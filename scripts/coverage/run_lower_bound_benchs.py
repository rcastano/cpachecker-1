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
import time
import pprint

import lower_bound_from_cex

expected_techniques = ['predicate', 'explicit']

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def _script_path():
    return os.path.dirname(os.path.realpath(__file__))

class EmptyObject():
    pass

def full_instance_pathname(instances_root_dir, instance):
    for root, dirs, files in os.walk(instances_root_dir):
        if instance in files:
            return os.path.abspath(os.path.join(root, instance))
    raise Exception('Instance not found')

def process_file(base, file, instances_root_dir, output_dir, cex_limit):
    try:
        os.makedirs(os.path.join(output_dir, file))
    except:
        raise Exception('Output directory already contains sub-directory for this filename: ' + file)
    dir_to_process = os.path.abspath(os.path.join(base, file))
    benchs_ran = os.listdir(dir_to_process)
    safe_benchs = [b for b in benchs_ran if 'safe' in b]
    safe_benchs.append(None)
    frontier_benchs = [b for b in benchs_ran if 'unexplored' in b]
    frontier_benchs.append(None)
    tried = 0
    failed = 0
    def find_single_subdir(base, bench):
        sub_dirs = os.listdir(os.path.join(base, bench))
        # Make sure only one sub-directory exists
        assert len(sub_dirs) == 1
        full_path = os.path.join(base, bench, sub_dirs[0])
        return full_path
    
    def get_verification_technique(dir):
        verification_technique_pattern = r'.*from-(?P<verification_technique>[^/]*).*'
        technique = re.match(verification_technique_pattern, dir).group('verification_technique').strip() 
        assert technique in expected_techniques
        return technique

    def techniques_compatible(t1, t2):
        return ((t1 is None and not t2 is None) or
                (not t1 is None and t2 is None) or
                (not t1 is None and t1 == t2))

    for s in safe_benchs:
        s_desc = s if s else 'None' 
        verification_technique_s = get_verification_technique(s) if s else None
        if s:
            s = find_single_subdir(dir_to_process, s)

        for f in frontier_benchs:
            f_desc = f if f else 'None'
            verification_technique_f = get_verification_technique(f) if f else None
            if f:
                f = find_single_subdir(dir_to_process, f)
            if not techniques_compatible(verification_technique_f, verification_technique_s):
                continue

            args = EmptyObject()
            args.coverage_file = (s if s else f) + '/coverage.info'
            args.instance_filename = full_instance_pathname(instances_root_dir, file)
            technique = verification_technique_s if s else verification_technique_f
            args.assumption_automaton_file = args.instance_filename + '.' + technique + '.assumption_automaton'
            args.safe_traces_dir = s
            args.frontier_traces_dir = f
            args.used_config_file = None
            args.time_limit_in_secs = 45.0
            args.cex_limit = cex_limit
            print "f: " + f_desc
            print "s: " + s_desc
            with open(os.path.join(output_dir, file, s_desc + '___' + f_desc + '.run'), 'w') as f_out:
                start_time = time.time()
                try:
                    tried += 1
                    print >> f_out, 'python scripts/coverage/lower_bound_from_cex.py \\'
                    for k, v in args.__dict__.iteritems():
                        if v:
                            print >> f_out, '--' + k + ' ' + str(v) + ' \\'
                    # print >> f_out, args.__dict__
                    lower_bound_from_cex.main(args, f_out)
                    print >> f_out, "Execution finished."
                except KeyboardInterrupt:
                    failed += 1
                    print >> f_out, "Execution failed."
                    print "Ctrl-C pressed, aborting."
                    sys.exit(1)
                
                except:
                    failed += 1
                    print >> f_out, "Execution failed."
                elapsed_time = time.time() - start_time
                print >> f_out, 'Elapsed time: ' + str(elapsed_time) + 's'
                f_out.flush()
    return tried, failed

def main(args):
    all_files = os.listdir(args.benchexec_outputs)
    total_tried = 0
    total_failed = 0

    for file in all_files:
        tried, failed = process_file(args.benchexec_outputs, file, args.instances_root_dir, args.output_dir, args.cex_limit)
        total_tried += tried
        total_failed += failed
    print "Tried: " + str(total_tried)
    print "Failed: " + str(total_failed)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()    
    parser.add_argument(
            "--benchexec_outputs",
            help="Directory containing output of BenchExec for previous execution report generation results.")
    parser.add_argument(
            "--output_dir",
            help="Root directory for output.")
    parser.add_argument(
            "--instances_root_dir",
            help="Root directory for instances.")
    parser.add_argument(
            "--cex_limit",
            help="Maximum number of traces to be used to under approximate covergage for each instance.")

    args = parser.parse_args()
    if not (args.benchexec_outputs and args.output_dir and args.instances_root_dir):
        parser.print_help()
    else:
        main(args)


