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

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def gather_report_specs(
        safe_dir, frontier_dir, outputpath, prune_with_assumption_automaton):
    safe_specs = []
    if safe_dir:
        safe_specs = \
            fix_counterexample_specs(
                safe_dir, 'safe', outputpath, prune_with_assumption_automaton)
    frontier_specs = []
    if frontier_dir:
        frontier_specs = \
            fix_counterexample_specs(
                frontier_dir, 'frontier', outputpath, False)
    return safe_specs, frontier_specs

def fix_single_spec(f_in, f_out, prune_with_assumption_automaton):
    end_automaton_repetitions = 0
    for l in f_in:
        if '-> ERROR' in l:
            f_out.write(l.replace('-> ERROR', '-> GOTO LookingForReturn'))
        elif 'END AUTOMATON' in l:
            end_automaton_repetitions += 1
            f_out.write('STATE USEFIRST LookingForReturn :\n')
            f_out.write('  MATCH EXIT -> ERROR("Found covering test case");\n')
        else:
            f_out.write(l)
    f_out.write('END AUTOMATON\n')

    if prune_with_assumption_automaton:
        generate_coverage_spec.avoid_unexplored_spec(f_out)

    if end_automaton_repetitions != 1:
        raise Exception("Found more than one automaton in a specification file.") 


def fix_counterexample_specs(
        folder, prefix, outputpath, prune_with_assumption_automaton):
    all_cex = os.listdir(folder)
    pattern = r'.*Counterexample.([^.]*).spc'
    all_cex = [cex for cex in all_cex if re.match(pattern, cex)]

    def new_spec_filename(outputpath, prefix, cex):
        return os.path.join(outputpath, prefix + cex)
    for cex in all_cex:
        with open(os.path.join(folder, cex)) as f_in:
            with open(new_spec_filename(outputpath, prefix, cex), 'w') as f_out:
                fix_single_spec(f_in, f_out, prune_with_assumption_automaton)
    return [new_spec_filename(outputpath, prefix, cex) for cex in all_cex]

def main(args, f_out=sys.stdout):
    if args.used_config_file:
        (instance_filename, assumption_automaton_file, coverage_filename) = \
            compute_coverage.extract_all_options(args)
    else:
        instance_filename = args.instance_filename
        assumption_automaton_file = args.assumption_automaton_file
        coverage_filename = args.coverage_file

    lines_to_cover = set()
    with open(coverage_filename) as f:
        for l in f:
            m = re.match(r'^DA:(?P<line_number>[^,]*),.*', l)
            if m:
                line_number = int(m.group('line_number'))
                lines_to_cover.add(line_number)

    fixed_specs_folder = _script_path() + '/fixed_specs/'
    try:
        shutil.rmtree(fixed_specs_folder)
        print "Warning! Temporary folder already existed."
    except:
        pass
    os.makedirs(fixed_specs_folder)
    prune_with_assumption_automaton = True
    (safe_specs, frontier_specs) = gather_report_specs(
            args.safe_traces_dir, args.frontier_traces_dir, fixed_specs_folder, prune_with_assumption_automaton)

    only_cover_prefix = False
    (lines_covered_safe, lines_not_covered_safe) = collect_coverage(
        safe_specs, only_cover_prefix, prune_with_assumption_automaton, assumption_automaton_file, lines_to_cover, instance_filename, time_limit_in_secs, False)
    (lines_covered, lines_not_covered) = (lines_covered_safe, lines_not_covered_safe)

    time_limit_in_secs = 900.0
    if args.time_limit_in_secs = float(args.time_limit_in_secs)
    print >> f_out, "<Collected coverage> Total # of lines to cover: " + str(len(lines_to_cover))
    print >> f_out, "<Collected coverage> Covered with safe traces alone: " + str(len(lines_covered_safe))
    if args.frontier_traces_dir:
        only_cover_prefix = True
        prune_with_assumption_automaton = False
        (lines_covered_frontier, lines_not_covered_frontier) = collect_coverage(
            frontier_specs, only_cover_prefix, prune_with_assumption_automaton, assumption_automaton_file, lines_to_cover, instance_filename, time_limit_in_secs, False)
        lines_covered.update(lines_covered_frontier)
        lines_not_covered.update(lines_not_covered_frontier)
    print >> f_out, "<Collected coverage> Covered with safe or frontier traces (prefix semantics): " + str(len(lines_covered))
    try:
        shutil.rmtree(fixed_specs_folder)
    except:
        print "Warning! Temporary folder already deleted."
        pass


def collect_coverage(all_cex, only_cover_prefix, prune_with_assumption_automaton, assumption_automaton_file, lines_to_cover, instance_filename, stop_after_error, time_limit_in_secs, temp_folder=None):
    print "Computing coverage"
    if not temp_folder:
        temp_folder = _script_path() + '/temp_folder_collect_coverage/'
    lines_to_cover = lines_to_cover.copy()
    all_lines_covered = set()

    import time
    start_time = time.time()
    for cex in all_cex:
        try:
            shutil.rmtree(temp_folder)
            print "Warning! Temporary folder already existed."
        except:
            pass
        os.makedirs(temp_folder)


        cpachecker_root = _script_path() + '/../../'
        specs = []
        if prune_with_assumption_automaton:
            specs.append(assumption_automaton_file)
        specs.append(cex)
        # conf = 'config/custom_explicitAnalysis.properties'
        conf = cpachecker_root + 'config/predicateAnalysis.properties'
        stop_after_error = True
        # if conf == 'config/sv-comp16.properties':
        #     stop_after_error = True
        command = (
            [cpachecker_root + '/scripts/cpa.sh',
             '-config' , conf,
             '-outputpath', temp_folder,
             '-setprop', 'specification=' + ','.join(specs),
             '-setprop',
                'analysis.stopAfterError='+(str(stop_after_error).lower()),
             # Necessary for sv-comp16
             '-setprop',
                'output.disable=false',
             # '-setprop',
             #    'collapseAutomaton=AssumptionAutomaton',
             instance_filename])
        # for c in command[:-1]:
        #     print c + " \\"
        # print command[-1]
        # raw_input("Press Enter to continue...") 
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
        compute_coverage.report_coverage(all_lines_covered, lines_to_cover)
    return all_lines_covered, lines_to_cover

if __name__ == "__main__":
    parser = compute_coverage.coverage_args_parser()
    
    parser.add_argument(
            "--safe_traces_dir",
            help="Directory containing safe traces from an execution report.")

    parser.add_argument(
            "--frontier_traces_dir",
            help="Directory containing frontier traces from an execution report.")

    parser.add_argument(
            "--time_limit_in_secs",
            help="Time limit in seconds.")

    args = parser.parse_args()
    if not compute_coverage.is_legal_config(args):
        parser.print_help()
    elif not (args.safe_traces_dir or args.frontier_traces_dir):
        parser.print_help()
    else:
        main(args)


