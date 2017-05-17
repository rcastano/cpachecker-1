#!/usr/bin/python2

import argparse
import glob
import json
import math
import os
import random
import re
import shutil
import subprocess
import sys
import errno
import os.path

import lower_bound_with_traversals
import get_lines_from_cex

class FoundBugException(Exception):
    pass

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def main(args, f_out=sys.stdout):
    heap_size = args.heap
    instance_filename = args.instance_filename
    assert os.path.isfile(instance_filename)
    assumption_automaton_file = args.assumption_automaton_file
    traces_dir = os.path.abspath(instance_filename + '_feasible_traces')
    random.seed(123456789)

    temp_folder = os.path.abspath(
            os.path.join(_script_path(),
            'temp_sample_traces'))

    total_lines_to_cover = lower_bound_with_traversals.get_lines_to_cover(
            instance_filename,
            sys.stdout)
    def approximate_coverage(traces_dir, instance_filename, lines_to_cover, assumption_automaton_file):
        all_spec_dirs = [d for d in os.listdir(traces_dir) if
                os.path.isdir(os.path.join(traces_dir,d))]
        assert len(all_spec_dirs) > 0
        cex_count = 10
        chosen_specs = []
        while len(chosen_specs) < cex_count:
            i = random.randrange(len(all_spec_dirs))
            if all_spec_dirs[i] not in chosen_specs:
                chosen_specs.append(all_spec_dirs[i])

        cpachecker_root = os.path.join(_script_path(), os.path.pardir, os.path.pardir)
        all_lines_covered = set()

        for spec_dir in chosen_specs:
            try:
                shutil.rmtree(temp_folder)
                print('Warning: Temporary folder already existed.')
            except:
                pass
            spec_file = os.path.join(traces_dir, spec_dir, 'output', 'Counterexample.1.spc')
            assert os.path.exists(os.path.abspath(spec_file))
            assert os.path.exists(
                    os.path.abspath(assumption_automaton_file))
            specs = ([
                os.path.abspath(spec_file),
                os.path.abspath(assumption_automaton_file)])
            command = (
                [cpachecker_root + '/scripts/cpa.sh',
                 '-outputpath', temp_folder,
                 '-setprop', 'specification=' + ','.join(specs)] +
                 (['-heap', heap_size] if heap_size else []) + [
                 '-setprop',
                    'limits.time.cpu=-1ns',
                 '-setprop',
                    'cpa=cpa.arg.ARGCPA',
                 '-setprop',
                    'ARGCPA.cpa=cpa.composite.CompositeCPA',
                 '-setprop',
                    'CompositeCPA.cpas=cpa.location.LocationCPA,cpa.callstack.CallstackCPA',
                 instance_filename])
            try:
                output = subprocess.check_output(
                    command,
                    stderr = subprocess.STDOUT)
                for line in output.split(b'\n'):
                    print(line.decode('utf8'))
            except Exception as e:
                print(e.output)
                raise e

            lines_covered = get_lines_from_cex.process_counterexamples(
                instance_filename,
                temp_folder,
                only_cover_prefix=True)
            all_lines_covered.update(lines_covered)
            lines_to_cover.difference_update(lines_covered)
            try:
                shutil.rmtree(temp_folder)
            except:
                print("Warning: Temporary folder didn't exist after CPAchecker execution.")
        return all_lines_covered
    n_retries = 30
    avg_lines_covered = 0.0
    for i in range(n_retries):
        all_lines_covered = approximate_coverage(
                traces_dir,
                instance_filename,
                total_lines_to_cover.copy(),
                assumption_automaton_file)
        avg_lines_covered += float(len(all_lines_covered))
    avg_lines_covered = avg_lines_covered / float(n_retries)
    print('Traces used: ' + str(cex_count))
    print('Total # of lines to cover: ' + str(len(total_lines_to_cover)))
    print('(avg over ' + str(n_retries) + ' runs) Covered: ' + str(len(lines_covered)))

        
# def print_command(command, f_out):
#     for c in command[:-1]:
#         print >> f_out, c + " \\"
#     print >> f_out, command[-1]

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--assumption_automaton_suffix",
        help="The path to the file containing an assumption automaton will be that of the instance filename with this suffix appended.")

    parser.add_argument(
            "-heap",
            help="Heap size.")
    parser.add_argument(
            "instance_filename",
            help="File containing system-under-verification.")

    args = parser.parse_args()
    if args.assumption_automaton_suffix:
        args.assumption_automaton_file = args.instance_filename + args.assumption_automaton_suffix

    assert args.instance_filename
    # if sys.version_info.major < 3:
    #     raise "Expecting Python 3 (to reproduce original random number generation)"
    main(args)


