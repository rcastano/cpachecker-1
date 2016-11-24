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
    output = subprocess.check_output([find_witnesses_script, bench_dir],
            # To avoid "Broken pipe" errors.
            # https://stackoverflow.com/questions/37547232/broken-pipe-error-python-subprocess
            preexec_fn=default_sigpipe)
    witness_dirs = output.split()
    for directory in witness_dirs:
        print directory
        if args.safe_witnesses:
            if not 'safe' in directory:
                continue
        else:
            if not 'explored' in directory:
                continue

        pattern = r'(.*)/([^/]*)'
        timestamp = re.sub(pattern, r'\2', directory)
        # paths as created by BenchExec with the current xml spec
        # contain the timestamp in the innermost directory.
        # We remove the timestamp by matching whatever comes after
        # the last "/" and before the end-of-line '$'.
        dir_no_timestamp = re.sub(pattern, r'\1', directory)
       
        import all_cex_to_spec
        folder = '/'.join([bench_dir, directory])
        dest_folder = '/'.join([dest_dir, timestamp, dir_no_timestamp]) + "/"
        all_cex_to_spec.process_counterexamples(
                folder,
                dest_folder,
                args.safe_witnesses)

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
