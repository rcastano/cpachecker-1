#!/usr/bin/python

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

config_options = ['predicate','explicit','explicit-old']
traversal_options = ['coverage_traversal','random', None]

class FoundBugException(Exception):
    pass

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def get_lines_to_cover(instance_filename, f_out):
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
        for line in output.split(b'\n'):
            print >> f_out, line.decode('utf8')
        print >> f_out, "Executed (to compute coverage baseline):"
        print_command(command, sys.stdout)
    if not os.path.exists(temp_folder + '/coverage.info'):
        raise Exception("Coverage file did not exist. Failed creating a baseline for coverage.")
    lines_to_cover, cpachecker_coverage = compute_coverage.parse_coverage_file(temp_folder + '/coverage.info')
    try:
        shutil.rmtree(temp_folder)
    except:
        raise Exception("Could not clean up temporary directory: " + temp_folder)
    return lines_to_cover

def main(args, f_out=sys.stdout):
    if args.used_config_file:
        (instance_filename, assumption_automaton_file, coverage_filename) = \
            compute_coverage.extract_all_options(args)
    else:
        instance_filename = args.instance_filename[0]
        assumption_automaton_file = args.assumption_automaton_file
        coverage_filename = args.coverage_file

    lines_to_cover = set()
    config = args.config
    cpachecker_coverage = None
    if coverage_filename and os.path.exists(coverage_filename):
        lines_to_cover, cpachecker_coverage = compute_coverage.parse_coverage_file(coverage_filename)
        
    else:
        lines_to_cover = get_lines_to_cover(instance_filename, f_out)

    prune_with_assumption_automaton = True
    
    timelimit = 900.0
    if args.timelimit:
        timelimit = int(args.timelimit)
    stop_after_error = False
    only_cover_prefix = False
    cex_limit = int(args.cex_limit) if args.cex_limit else None
    (lines_covered, lines_not_covered, found_bug) = collect_coverage(
        only_cover_prefix=only_cover_prefix,
        prune_with_assumption_automaton=prune_with_assumption_automaton,
        assumption_automaton_file=assumption_automaton_file,
        lines_to_cover=lines_to_cover,
        instance_filename=instance_filename,
        traversal=args.traversal,
        config=config,
        stop_after_error=stop_after_error,
        timelimit=timelimit,
        cex_limit=cex_limit,
        heap_size=args.heap,
        cpachecker_coverage=cpachecker_coverage,
        use_coverage_last=args.use_coverage_last,
        temp_folder=None)

    print >> f_out, "<Collected coverage> Total # of lines to cover: " + str(len(lines_to_cover))
    print >> f_out, "<Collected coverage> Covered: " + str(len(lines_covered))
    if found_bug:
        print >> f_out, "<Collected coverage> Found bug!!!"
        print >> f_out, "<Collected coverage> Found bug: YES"
    else:
        print >> f_out, "<Collected coverage> Bug not found."
        print >> f_out, "<Collected coverage> Found bug: -"
    print >> f_out, ("<Collected coverage> Coverage CPAchecker: " + 
            (str(len(cpachecker_coverage)) if cpachecker_coverage else '-'))

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
        traversal, config, stop_after_error, timelimit, cex_limit, heap_size,
        cpachecker_coverage, use_coverage_last, temp_folder=None):
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
    feasible_cex_count = 0
    time_budget = int(timelimit)
    timelimit = int(timelimit)
    while cex_limit and not bug_found and timelimit > 45:
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
        if config not in config_options:
            raise Exception('Invalid verification configuration.')
        config_string = ''
        if config == 'predicate':
            config_string = '/config/predicateAnalysis.properties'
        elif config == 'explicit':
            config_string = '/config/valueAnalysis.properties'
        elif config == 'explicit-old':
            config_string = '/config/explicitAnalysis.properties'
        else:
            raise Exception('Invalid verification configuration.')

        conf = cpachecker_root + config_string

        # if conf == 'config/sv-comp16.properties':
        #     stop_after_error = True
        if traversal not in traversal_options:
            raise Exception("Traversal not recognized")
        if traversal == 'coverage_traversal':
            traversal_conf = 'analysis.traversal.useCoverage=true'
        elif traversal == 'random':
            traversal_conf = 'analysis.traversal.order=RAND'
        elif traversal is None:
            pass
        else:
            raise Exception("Not implemented yet")

        traversal_conf = 'analysis.traversal.useCoverage=true' if traversal == 'coverage_traversal' else None
        command = (
            [cpachecker_root + '/scripts/cpa.sh',
             '-config' , conf,
             '-outputpath', temp_folder,
             '-setprop', 'specification=' + ','.join(specs)] +
             (['-setprop', traversal_conf] if traversal_conf else []) +
             (['-heap', heap_size] if heap_size else []) +
             (['-setprop',
                'analysis.stopAfterError='+(str(cex_limit).lower())]
                if traversal != 'coverage_traversal'
                else []) + [
             # Necessary for sv-comp16
             '-setprop',
                'output.disable=false'] +
             (['-setprop',
                'analysis.traversal.usePostorder=true']
                if traversal == 'coverage_traversal'
                else []) +
             (['-setprop',
                'analysis.traversal.useCoverageFirst=false']
                if use_coverage_last
                else []) +
             ['-setprop',
                'limits.time.cpu=' + str(int(timelimit)) + 's',
             '-setprop',
                'linesToCoverFile='+temp_folder+'/lines_to_cover.txt',
             '-setprop',
                'analysis.traversal.order=DFS',
             '-setprop',
                'analysis.traversal.useReversePostorder=false',
             '-setprop',
                'analysis.traversal.useCallstack=false',
             # '-setprop',
             #    'collapseAutomaton=AssumptionAutomaton',
             instance_filename])
       
        def print_command(command):
            for c in command[:-1]:
                print c + " \\"
            print command[-1]

        output = ''
        with open(os.devnull, 'w') as devnull:
            print "Executing:"
            print_command(command)
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
        feasible_cex_count += len(
                get_lines_from_cex.counterexample_coverage_files(
                    temp_folder))
        if len(lines_covered):
            bug_found = not generate_coverage_spec.found_coverage_test_case(output)
        # raw_input("Press Enter to continue...")
        shutil.rmtree(temp_folder)
        
        elapsed_time = time.time() - start_time
        timelimit = time_budget - elapsed_time

        print "Elapsed time: " + str(elapsed_time) + "s"

        ## saturated_coverage = True
        ## for line in output.split('\n'):
        ##     if re.match('^Verification result: FALSE.*', line):
        ##         saturated_coverage = False
        ##         break
        if not bug_found:
            all_lines_covered.update(lines_covered)
            lines_to_cover.difference_update(lines_covered)
            print 'Traces used: ' + str(feasible_cex_count)
        compute_coverage.report_coverage(all_lines_covered, lines_to_cover,
                bug_found, cpachecker_coverage)
        if not traversal or traversal != 'coverage_traversal':
            break
    print 'Traces used: ' + str(feasible_cex_count)
    return all_lines_covered, lines_to_cover, bug_found

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--used_config_file",
        help="some_path/UsedConfiguration.properties\nFile containing the configuration options for a previous CPAchecker run.\nThe files containing the verification instance, coverage information and the Assumption Automaton from the previous run can be extracted from the configuration file.")
    
    parser.add_argument(
        "--coverage_file",
        help="some_path/coverage.info\nFile containing coverage information for a previous CPAchecker run, used only to gather all 'coverable' lines (i.e. not comments, empty lines, etc.).")

    parser.add_argument(
        "--assumption_automaton_file",
        help="some_path/assumption_automaton\nFile containing an assumption automaton.")
    
    parser.add_argument(
        "--assumption_automaton_suffix",
        help="The path to the file containing an assumption automaton will be that of the instance filename with this suffix appended.")

    parser.add_argument(
        "--coverage_suffix",
        help="The path to the file containing coverage information will be that of the instance filename with this suffix appended.")
    parser.add_argument(
            "--cex_limit",
            help="Maximum number of traces to be used to under approximate coverage for each instance.")

    parser.add_argument(
            "--timelimit",
            help="Time limit in seconds.")

    parser.add_argument(
            "--covered_lines_file",
            help="Output file: will contained all lines covered.")

    parser.add_argument(
            "--config",
            choices=config_options,
            help="Verification technique to be used to compute coverage.")

    parser.add_argument(
            "--traversal",
            choices=traversal_options,
            const=None,
            default=None,
            help="Traversal to be used to compute coverage.")
    parser.add_argument(
            "-heap",
            help="Heap size.")
    parser.add_argument(
            "--use_coverage_last",
            action='store_true',
            help="Time limit in seconds.")
    parser.add_argument(
            "instance_filename", nargs=1,
            help="Instance filename.")

    args = parser.parse_args()
    assert not (args.assumption_automaton_suffix and
            args.assumption_automaton_file)
    assert not (args.coverage_suffix and
            args.coverage_file)
    if args.assumption_automaton_suffix:
        args.assumption_automaton_file = args.instance_filename[0] + args.assumption_automaton_suffix
    if args.coverage_suffix:
        args.coverage_file = args.instance_filename[0] + args.coverage_suffix
    print dir(args)
    for arg in dir(args):
        print arg
        print getattr(args, arg)
        print ""
        print ""
    if (not (args.used_config_file and
             not args.assumption_automaton_file and
             not args.instance_filename) and
       not (not args.used_config_file and
            args.assumption_automaton_file and
            args.instance_filename)):
        parser.print_help()
    else:
        main(args)


