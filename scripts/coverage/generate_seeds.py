#!/usr/bin/python3

import argparse
import glob
import math
import os
import random
import re
import sys
import os.path

import generate_coverage_spec

class FoundBugException(Exception):
    pass

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

coverage_test_case_message = 'Found covering test case'
def gen_spec(f):
    print('CONTROL AUTOMATON CoverageAutomaton', file=f)
    print('', file=f)
    print('INITIAL STATE WaitForExit;', file=f)
    print('', file=f)

    print('', file=f)
    print('STATE USEFIRST WaitForExit:', file=f)
    print('  MATCH EXIT -> ERROR("' + coverage_test_case_message + '");', file=f)
    print('', file=f)
    print('END AUTOMATON', file=f)

def generate_seeds(instance_filename, n, base_dir):
    created_files = []
    random.seed(123456789)
    digits = int(math.ceil(math.log10(n + 1)))
    output_path_root = instance_filename + '_feasible_traces'
    instance_name = os.path.basename(instance_filename)
    print(output_path_root)
    assert not os.path.exists(output_path_root)
    os.makedirs(output_path_root)

    reach_exit_spec_file = os.path.join(output_path_root, 'spec.spc')
    assert not os.path.exists(reach_exit_spec_file)
    with open(reach_exit_spec_file, 'w') as f:
        gen_spec(f)

    while n:
        n -= 1
        str_n = str(n).zfill(digits)
        output_path = os.path.join(output_path_root, str_n)
        assert not os.path.exists(output_path)
        os.makedirs(output_path)
        seed_file = os.path.join(output_path, instance_name + '_seed_' + str_n + '.txt')
        created_files.append(os.path.relpath(seed_file, start=base_dir))
        with open(seed_file, 'w') as f:
            f.write(str(random.randrange(2147483647))) # 2^31 − 1
    return created_files

def main(args):
    n = args.n
    base_dir = os.path.dirname(args.set_file[0])
    print('base_dir: ' + base_dir)
    with open(args.set_file[0]) as f:
        files = []
        for line in f:
            full_path = os.path.join(base_dir, line.strip())
            files += glob.glob(full_path)
    set_file = os.path.join(base_dir, 'generated_seeds.set')
    assert not os.path.exists(set_file)
    created_files = []
    for f in files:
        created_files += generate_seeds(f, n, base_dir)

    with open(set_file, 'w') as f:
        for seed_file in created_files:
            print(seed_file, file=f)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()

    parser.add_argument(
            "--n",
            type=int,
            help="Number of seeds to be generated.")

    # parser.add_argument(
    #         "--config",
    #         choices=config_options,
    #         help="Verification technique to be used to compute coverage.")

    parser.add_argument(
            "set_file",
            nargs=1,
            help="Set of instances to generate seeds for.")

    args = parser.parse_args()

    assert args.n
    assert args.set_file
    assert len(args.set_file) == 1
    if sys.version_info.major < 3:
        raise "Expecting Python 3 (to reproduce original random number generation)"

    main(args)


