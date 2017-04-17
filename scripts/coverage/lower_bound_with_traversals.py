import argparse
import glob
import json
import os
import re
import shutil
import subprocess
import sys
import errno
import os.path

import compute_coverage
import get_lines_from_cex
import generate_coverage_spec

class FoundBugException(Exception):
    pass

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def main(args, f_out=sys.stdout):
    if args.used_config_file:
        (instance_filename, assumption_automaton_file, coverage_filename) = \
            compute_coverage.extract_all_options(args)
    else:
        instance_filename = args.instance_filename
        assumption_automaton_file = args.assumption_automaton_file
        coverage_filename = args.coverage_file

    lines_to_cover = set()
    config = args.config
    if coverage_filename and os.path.exists(coverage_filename):
        lines_to_cover = compute_coverage.parse_coverage_file(coverage_filename)
    else:
        cpachecker_root = _script_path() + '/../../'
        temp_folder = _script_path() + '/temp_folder_coverage_baseline/'
        try:
            shutils.rmtree(temp_folder)
        except:
            pass
        try:
            os.makedirs(temp_folder)
        except:
            pass
        command = (
            [cpachecker_root + '/scripts/cpa.sh',
             '-detectRecursion', # Using this configuration because it seems lightweight
             '-outputpath', temp_folder,
             instance_filename])
        with open(os.devnull, 'w') as devnull:
            print >> f_out, "Getting coverage baseline:"
            print_command(command, f_out)
            output = subprocess.check_output(
                command,
                stderr = subprocess.STDOUT)
            print >> f_out, output
            print >> f_out, "Executed (to compute coverage baseline):"
            print_command(command, sys.stdout)
        if not os.path.exists(temp_folder + '/coverage.info'):
            raise Exception("Coverage file did not exist. Failed creating a baseline for coverage.")
        lines_to_cover = compute_coverage.parse_coverage_file(temp_folder + '/coverage.info')
        try:
            shutil.rmtree(temp_folder)
        except:
            raise Exception("Could not clean up temporary directory: " + temp_folder)

    prune_with_assumption_automaton = True
    
    time_limit_in_secs = 900.0
    if args.time_limit_in_secs:
        time_limit_in_secs = float(args.time_limit_in_secs)
    stop_after_error = False
    only_cover_prefix = False
    cex_limit = int(args.cex_limit) if args.cex_limit else None
    (lines_covered, lines_not_covered, found_bug) = collect_coverage(
        only_cover_prefix=only_cover_prefix,
        prune_with_assumption_automaton=prune_with_assumption_automaton,
        assumption_automaton_file=assumption_automaton_file,
        lines_to_cover=lines_to_cover,
        instance_filename=instance_filename,
        traversal='coverage_traversal',
        config=config,
        stop_after_error=stop_after_error,
        time_limit_in_secs=time_limit_in_secs,
        cex_limit=cex_limit,
        temp_folder=None)

    print >> f_out, "<Collected coverage> Total # of lines to cover: " + str(len(lines_to_cover))
    print >> f_out, "<Collected coverage> Covered: " + str(len(lines_covered))
    if found_bug:
        print >> f_out, "<Collected coverage> Found bug!!!"
    else:
        print >> f_out, "<Collected coverage> Bug not found."

    if args.covered_lines_file:
        try:
            print "creating file: " + args.covered_lines_file
            sys.stdout.flush()
            with open(args.covered_lines_file, 'w') as f:
                for l in lines_covered:
                    print >> f, l
        except:
            print "failed"

    if found_bug:
        raise FoundBugException()


def print_command(command, f_out):
    for c in command[:-1]:
        print >> f_out, c + " \\"
    print >> f_out, command[-1]

def collect_coverage(only_cover_prefix, prune_with_assumption_automaton,
        assumption_automaton_file, lines_to_cover, instance_filename,
        traversal, config, stop_after_error, time_limit_in_secs, cex_limit, temp_folder=None):
    print "Computing coverage"
    if not temp_folder:
        temp_folder = _script_path() + '/temp_folder_traverse_coverage/'
        shared_temp_folder = _script_path() + '/shared_temp_folder_traverse_coverage/'

    # Create shared (generic) spec files.
    try:
        shutil.rmtree(shared_temp_folder)
        print "Warning! Shared temporary folder already existed."
    except:
        pass
    os.makedirs(shared_temp_folder)
    reach_exit_spec_file = shared_temp_folder + '/spec.spc'
    with open(reach_exit_spec_file, 'w') as f:
        generate_coverage_spec.gen_spec(f, lines_to_cover)

    cpachecker_root = _script_path() + '/../../'
    lines_to_cover = lines_to_cover.copy()

    all_lines_covered = set()

    import time
    start_time = time.time()
    bug_found = False
    # while cex_limit and not bug_found:
    #    cex_limit -= 1
    if True:
        try:
            shutil.rmtree(temp_folder)
            print "Warning! Temporary folder already existed."
        except:
            pass
        os.makedirs(temp_folder)

        with open(temp_folder + '/lines_to_cover.txt', 'w') as f:
            for line in lines_to_cover:
                print >> f, line

        specs = []
        specs.append(reach_exit_spec_file)
        specs.append(os.path.join(cpachecker_root,'config','specification','default.spc')) # TODO(rcastano): do we need this? Should we parse output?
        specs.append(assumption_automaton_file)
        # conf = 'config/custom_explicitAnalysis.properties'
        if config not in ['explicit', 'predicate', 'explicit-old']:
            raise Exception('Invalid verification configuration.')
        config_string = ''
        if config == 'predicate':
            config_string = '/config/predicateAnalysis.properties'
        elif config == 'explicit':
            config_string = '/config/valueAnalysis.properties'
        else:
            config_string = '/config/valueAnalysis.properties'

        conf = cpachecker_root + config_string

        # if conf == 'config/sv-comp16.properties':
        #     stop_after_error = True
        if traversal not in ['coverage_traversal','random']:
            raise Exception("Traversal not recognized")
        traversal_conf = 'analysis.traversal.useCoverage=true' if traversal == 'coverage_traversal' else 'analysis.traversal.order=RAND'
        command = (
            [cpachecker_root + '/scripts/cpa.sh',
             '-config' , conf,
             '-outputpath', temp_folder,
             '-setprop', 'specification=' + ','.join(specs),
             '-setprop', traversal_conf,
             '-setprop',
                'analysis.stopAfterError='+(str(cex_limit).lower()),
             # Necessary for sv-comp16
             '-setprop',
                'output.disable=false',
             '-setprop',
                'limits.time.cpu=' + str(int(time_limit_in_secs)) + 's',
             '-setprop',
                'linesToCoverFile='+temp_folder+'/lines_to_cover.txt',
             # '-setprop',
             #    'collapseAutomaton=AssumptionAutomaton',
             instance_filename])
        # for c in command[:-1]:
        #     print c + " \\"
        # print command[-1]
        # raw_input("Press Enter to continue...")
        output = ''
        with open(os.devnull, 'w') as devnull:
            print "Executing:"
            print command
            output = subprocess.check_output(
                command,
                stderr = subprocess.STDOUT)
            print output
            print "Executed:"
            print command
        lines_covered = get_lines_from_cex.process_counterexamples(
            instance_filename,
            temp_folder,
            only_cover_prefix)
        if len(lines_covered):
            bug_found = not generate_coverage_spec.found_coverage_test_case(output)
        # raw_input("Press Enter to continue...")
        shutil.rmtree(temp_folder)
        
        elapsed_time = time.time() - start_time
        print "Elapsed time: " + str(elapsed_time) + "s"

        ## saturated_coverage = True
        ## for line in output.split('\n'):
        ##     if re.match('^Verification result: FALSE.*', line):
        ##         saturated_coverage = False
        ##         break
        all_lines_covered.update(lines_covered)
        lines_to_cover.difference_update(lines_covered)
        compute_coverage.report_coverage(all_lines_covered, lines_to_cover,
                bug_found)
    return all_lines_covered, lines_to_cover, bug_found

if __name__ == "__main__":
    parser = compute_coverage.coverage_args_parser()
    
    parser.add_argument(
            "--cex_limit",
            help="Maximum number of traces to be used to under approximate coverage for each instance.")

    parser.add_argument(
            "--time_limit_in_secs",
            help="Time limit in seconds.")

    parser.add_argument(
            "--covered_lines_file",
            help="Output file: will contained all lines covered.")

    parser.add_argument(
            "--config",
            choices=['predicate','explicit'],
            help="Verification technique to be used to compute coverage.")

    args = parser.parse_args()
    if (not (args.used_config_file and
             not args.assumption_automaton_file and
             not args.instance_filename) and
       not (not args.used_config_file and
            args.assumption_automaton_file and
            args.instance_filename)):
        parser.print_help()
    else:
        main(args)


