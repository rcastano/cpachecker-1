import subprocess
import os
import sys
import re
import argparse

def main(args):
    script_path = os.getcwd()
    bench_dir = args.bench_dir
    dest_dir = args.dest_dir
    find_witnesses_script = script_path + "/find_witnesses.sh"
    output = subprocess.check_output([find_witnesses_script, bench_dir])
    witness_dirs = output.split()
    for directory in witness_dirs:
        pattern = r'\(.*\)/\([^/]*\)$'
        timestamp = re.sub(pattern, '\2', directory)
        # paths as created by BenchExec with the current xml spec
        # contain the timestamp in the innermost directory.
        # We remove the timestamp by matching whatever comes after
        # the last "/" and before the end-of-line '$'.
        dir_no_timestamp = re.sub(pattern, '\1', directory)
        
        all_cex_to_spec = script_path + "all-cex-to-spec.sh"
        folder = [bench_dir, directory].join('/')
        dest_folder = [dest_dir, timestamp, dir_no_timestamp].join('/') + "/"
        args = [all_cex_to_spec, dest_folder]
        if args.safe_witnesses:
            args.append("--safe_witness")
        subprocess.check_call(args)

if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--bench_dir",
        help="Directory where benchmark intermediate files are stored. (Specific directory structure expected)"
    )
    parser.add_argument(
        "--dest_dir",
        help="Destination directory."
    )
    parser.add_argument(
        "--safe_witnesses",
        help="Create specifications for safe witnesses (should check all possible extensions).",
        action="store_true")

    args = parser.parse_args()
    if (not args.bench_dir) or not args.dest_dir:
        args.print_help()
        sys.exit(1)
    main(args)
