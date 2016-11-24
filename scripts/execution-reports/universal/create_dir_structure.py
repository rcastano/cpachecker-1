import subprocess
import os
import sys
import re
import argparse
import signal

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def main(args):
    script_path = os.path.dirname(os.path.realpath(__file__))
    bench_dir = args.bench_dir
    dest_dir = args.dest_dir
    find_witnesses_script = script_path + "/find_witnesses.sh"
    print find_witnesses_script
    print bench_dir
    output = subprocess.check_output([find_witnesses_script, bench_dir],
            # To avoid "Broken pipe" errors.
            # https://stackoverflow.com/questions/37547232/broken-pipe-error-python-subprocess
            preexec_fn=default_sigpipe)
    witness_dirs = output.split()
    for directory in witness_dirs:
        pattern = r'(.*)/([^/]*)'
        timestamp = re.sub(pattern, r'\2', directory)
        # paths as created by BenchExec with the current xml spec
        # contain the timestamp in the innermost directory.
        # We remove the timestamp by matching whatever comes after
        # the last "/" and before the end-of-line '$'.
        dir_no_timestamp = re.sub(pattern, r'\1', directory)
        
        all_cex_to_spec = script_path + "/all-cex-to-spec.sh"
        folder = '/'.join([bench_dir, directory])
        dest_folder = '/'.join([dest_dir, timestamp, dir_no_timestamp]) + "/"
        subprocess_args = [all_cex_to_spec, folder, dest_folder]
        if args.safe_witnesses:
            subprocess_args.append("--safe_witness")
        print subprocess_args
        subprocess.check_call(subprocess_args)

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
