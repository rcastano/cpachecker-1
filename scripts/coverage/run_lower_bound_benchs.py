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

import lower_bound_from_cex

expected_techniques = ['predicate', 'explicit']

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

class EmptyObject():
    pass

def full_instance_pathname(instance):
    raise Exception('not implemented yet')

def process_file(base, file, output_dir):
    try:
        os.makedirs(output_dir + '/' + file)
    except:
        raise Exception('Output directory already contains sub-directory for this filename: ' + file)
    dir_to_process = base + '/' + file + '/'
    benchs_ran = os.listdir(dir_to_process)
    safe_benchs = [b for b in benchs_ran if 'safe' in b]
    safe_benchs.append(None)
    frontier_benchs = [b for b in benchs_ran if 'unexplored' in b]
    frontier_benchs.append(None)
    def find_single_subdir(base, bench):
        sub_dirs = os.listdir(base + '/' + bench + '/')
        # Make sure only one sub-directory exists
        assert len(sub_dirs) == 1
        full_path = base + '/' + bench + '/' + sub_dirs[0] + '/'
        return full_path
    
    def get_verification_technique(dir):
        verification_technique_pattern = r'.*from-(?P<verification_technique>[^/]*).*'
        technique = re.match(verification_technique_pattern, dir).group('verification_technique').strip() 
        assert technique in expected_techniques
        return technique

    def techniques_compatible(t1, t2):
        return ((t1 is None and not t2 is None) or
                (not t1 is None and t2 is None) or
                (t1 == t2))

    for s in safe_benchs:
        s_desc = s if s else 'None' 
        if s:
            verification_technique_s = get_verification_technique(s)
            s = find_single_subdir(dir_to_process, s)

        for f in frontier_benchs:
            f_desc = f if s else 'None'
            verification_technique_f = get_verification_technique(f)
            if not techniques_compatible(verification_technique_f, verification_technique_s):
                continue
            f = find_single_subdir(dir_to_process, f)
            args = EmptyObject()
            args.coverage_file = (s if s else f) + '/coverage.info'
            args.instance_filename = full_instance_pathname(file)
            technique = verification_technique_s if s else verification_technique_f
            args.assumption_automaton_file = args.instance_filename + '.' + technique + '.assumption_automaton'
            args.safe_traces_dir = s
            args.frontier_traces_dir = f
            args.used_config_files = None

            with open(output_dir + '/' + file + '/' + s_desc + '___' + f_desc + '.run', 'w') as f_out:
                lower_bound_from_cex.main(args, f_out)

def main(args):
    all_files = os.listdir(args.benchexec_outputs)
    for file in all_files:
        process_file(args.benchexec_outputs, file)




if __name__ == "__main__":
    parser = compute_coverage.coverage_args_parser()
    
    parser.add_argument(
            "--benchexec_outputs",
            help="Directory containing output of BenchExec for previous execution report generation results.")
    parser.add_argument(
            "--output_dir",
            help="Root directory for output.")

    args = parser.parse_args()
    if (not args.benchexec_outputs) or (not args.output_dir):
        parser.print_help()
    else:
        main(args)


