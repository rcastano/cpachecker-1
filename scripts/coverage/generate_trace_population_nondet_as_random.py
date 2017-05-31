#!/usr/bin/python3

import argparse
import glob
import json
import math
import os
import re
import shutil
import subprocess
import sys
import errno
import os.path

import generate_coverage_spec

class FoundBugException(Exception):
    pass

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

def main(args, f_out=sys.stdout):
    heap_size = args.heap
    seed_dir = os.path.dirname(args.seed_filename)
    output_path = os.path.join(seed_dir, 'output_nondet_as_random')
    
    traces_dir = os.path.abspath(os.path.join(seed_dir, os.path.pardir))
    instance_filename = traces_dir[:-(len('_feasible_traces'))]

    assert os.path.isfile(args.seed_filename)
    assert not os.path.exists(output_path)
    with open(args.seed_filename) as f:
        seed = None
        for line in f:
            # File only contains a seed.
            assert not seed or line == ''
            seed = line

    reach_exit_spec_file = os.path.join(seed_dir, os.path.pardir, 'spec.spc')
    assert os.path.isfile(reach_exit_spec_file)

    cpachecker_root = os.path.join(_script_path(), os.path.pardir, os.path.pardir)
    specs = []
    specs.append(reach_exit_spec_file)
    # specs.append(os.path.join(cpachecker_root,'config','specification','default.spc')) # TODO(rcastano): do we need this? Should we parse output?
    command = (
        [cpachecker_root + '/scripts/cpa.sh',
         '-config', os.path.join('config','explicitValueNondetAsRandom.properties'),
         '-outputpath', output_path,
         '-setprop', 'specification=' + ','.join(specs),
         '-setprop',
            'cpa.value.nondetAsRandom.randomSeed=' + str(seed),
         (['-heap', heap_size] if heap_size else []) + [
         '-setprop',
            'limits.time.cpu=-1ns',

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

def print_command(command, f_out):
    for c in command[:-1]:
        print >> f_out, c + " \\"
    print >> f_out, command[-1]

if __name__ == "__main__":
    parser = argparse.ArgumentParser()

    # parser.add_argument(
    #         "--config",
    #         choices=config_options,
    #         help="Verification technique to be used to compute coverage.")

    parser.add_argument(
            "-heap",
            help="Heap size.")
    parser.add_argument(
            "seed_filename",
            help="Text file containing a seed for the random path traversal.")

    args = parser.parse_args()

    assert args.seed_filename
    if sys.version_info.major < 3:
        raise "Expecting Python 3 (to reproduce original random number generation)"
    main(args)


