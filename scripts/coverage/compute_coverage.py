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

import get_lines_from_cex
import generate_coverage_spec

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def find_property(filename, prop_name):
    with open(filename) as f:
        values_assigned = []
        for line in f:
            m = re.match(r'.*' + prop_name + r' = (?P<prop>.*)$', line)
            if not m:
                continue
            values_assigned.append(m.group('prop'))
    return values_assigned

def extract_all_options(args):
    outputpath = os.path.dirname(args.used_config_file)
    program_names = find_property(
        args.used_config_file, 'analysis.programNames')
    if len(program_names) == 0:
        print "Error parsing program name."
        sys.exit(1)
    if len(program_names) > 1:
        print "Several program names. Unsupported feature."
        sys.exit(1)
    assumption_automaton_file = find_property(
        args.used_config_file, 'assumptions.automatonFile')
    if len(assumption_automaton_file) > 1:
        print "Error parsing Assumption Automaton file."
        sys.exit(1)
    if len(assumption_automaton_file) < 1:
        assumption_automaton_file = 'AssumptionAutomaton.txt'

    assumption_automaton_file = outputpath + '/' + assumption_automaton_file
    coverage_filename = outputpath + '/coverage.info'
    return program_names[0], assumption_automaton_file, coverage_filename

def report_coverage(lines_covered, lines_not_covered):
    if (lines_covered.intersection(lines_not_covered)):
        print "Warning! Intersection between covered and not covered."
    print "Code Coverage:"
    total = len(lines_covered) + len(lines_not_covered)
    print "Total lines to cover: " + str(total)
    print "Total lines covered: " + str(len(lines_covered))
    print "Ratio covered/total: " + str(float(len(lines_covered))/float(total))
    print ""
    # print "The following lines were covered:"
    # for l in lines_covered:
    #     print l
    # print ""
    # print "The following lines were *not* covered:"
    # for l in lines_not_covered:
    #     print l

def parse_coverage_file(coverage_filename):
    lines_to_cover = set()
    with open(coverage_filename) as f:
        for l in f:
            m = re.match(r'^DA:(?P<line_number>[^,]*),.*', l)
            if m:
                line_number = int(m.group('line_number'))
                lines_to_cover.add(line_number)
    return lines_to_cover


def main(args):
    if args.used_config_file:
        (instance_filename, assumption_automaton_file, coverage_filename) = \
            extract_all_options(args)
    else:
        instance_filename = args.instance_filename
        assumption_automaton_file = args.assumption_automaton_file
        coverage_filename = args.coverage_file

    lines_to_cover = parse_coverage_file(coverage_filename)

    (lines_covered, lines_not_covered) = compute_coverage(
        assumption_automaton_file, lines_to_cover, instance_filename, False)

def compute_coverage(assumption_automaton_file, lines_to_cover, instance_filename, stop_after_error, temp_folder=None):
    print "Computing coverage"
    if not temp_folder:
        temp_folder = _script_path() + '/temp_folder_loop/'
    lines_to_cover = lines_to_cover.copy()
    all_lines_covered = set()

    import time
    start_time = time.time()
    time_limit_in_secs = 900.0
    while lines_to_cover:
        sys.stdout.flush()
        current_time = time.time()
        if current_time - start_time > time_limit_in_secs:
            print "Execution time exceeded " + str(time_limit_in_secs) + "s"
            break
        try:
            shutil.rmtree(temp_folder)
            print "Warning! Temporary folder already existed."
        except:
            pass
        os.makedirs(temp_folder)

        avoid_unexplored_spec_filename = temp_folder + '/avoid_unexplored.spc'
        with open(avoid_unexplored_spec_filename, 'w') as f:
            generate_coverage_spec.avoid_unexplored_spec(f)

        lines_filename = temp_folder + '/lines_to_cover.txt'
        with open(lines_filename, 'w') as f:
            for l in lines_to_cover:
                print >> f, l

        lines_spec_filename = temp_folder + '/spec.spc'
        with open(lines_spec_filename, 'w') as f:
            generate_coverage_spec.gen_spec(f, lines_to_cover)
            
        cpachecker_root = _script_path() + '/../../'
        specs = []
        specs.append(assumption_automaton_file)
        specs.append(lines_spec_filename)
        specs.append(avoid_unexplored_spec_filename)
        conf = '-sv-comp16'
        if conf == '-sv-comp16':
            stop_after_error = True
        command = (
            [cpachecker_root + '/scripts/cpa.sh',
             conf,
             '-outputpath', temp_folder,
             '-setprop', 'specification=' + ','.join(specs),
             '-setprop',
                'analysis.stopAfterError='+(str(stop_after_error).lower()),
             '-setprop',
                'linesToCoverFile='+lines_filename,
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
            temp_folder)
        # raw_input("Press Enter to continue...")
        shutil.rmtree(temp_folder)
        
        elapsed_time = time.time() - start_time
        print "Elapsed time: " + str(elapsed_time) + "s"
        report_coverage(all_lines_covered, lines_to_cover)
        # print "lines_covered"
        # print lines_covered
        # print "lines_to_cover"
        # print lines_to_cover

        saturated_coverage = True
        for line in output.split('\n'):
            if re.match('^Verification result: FALSE.*', line):
                saturated_coverage = False
                break
        all_lines_covered.update(lines_covered)
        assert saturated_coverage or lines_to_cover.intersection(lines_covered)
        lines_to_cover.difference_update(lines_covered)
        if saturated_coverage:
            break
    return all_lines_covered, lines_to_cover

def is_legal_config(args):
    if (args.used_config_file and
        not args.coverage_file and
        not args.assumption_automaton_file and
        not args.instance_filename):
        return True
    if (not args.used_config_file and
        args.coverage_file and
        args.assumption_automaton_file and
        args.instance_filename):
        return True
    return False

def coverage_args_parser():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--used_config_file",
        help="some_path/UsedConfiguration.properties\nFile containing the configuration options for a previous CPAchecker run.\nThe files containing the verification instance, coverage information and the Assumption Automaton from the previous run can be extracted from the configuration file.")
    
    parser.add_argument(
        "--coverage_file",
        help="some_path/coverage.info\nFile containing coverage information for a previous CPAchecker run, used only to gather all 'coverable' lines (i.e. not comments, empty lines, etc.).")

    parser.add_argument(
        "--assumption_automaton_file",
        help="some_path/coverage.info\nFile containing an assumption automaton.")

    parser.add_argument(
        "--instance_filename",
        help="Instance filename.")
    return parser

if __name__ == "__main__":
    parser = coverage_args_parser()

    args = parser.parse_args()
    if not is_legal_config(args):
        parser.print_help()
    else:
        main(args)


