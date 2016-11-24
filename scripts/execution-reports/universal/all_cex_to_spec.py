import argparse
import glob
import json
import os
import re
import subprocess
import sys

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def main(args):
    all_cex = os.listdir(folder + '/')
    for cex in all_cex:
        pattern = r'.*Counterexample.([^.]*).html'
        number = re.sub(pattern, r'\1', cex)
        os.mkdir(args.dest_folder + '/cex' + number)
        output = subprocess.check_output([script_path + '/get_json_from_html.sh', cex])
        import json_to_spec
        json_to_spec.process_counterexample(output, relevant_methods=None, args.safe_witnesses)


if __name__ == "__main__":
    global script_path = os.path.dirname(os.path.realpath(__file__))

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--folder",
        help="Directory containing Counterexample.*.html files.")
    parser.add_argument(
        "--dest_folder",
        help="Destination folder. Subdirectory structure will be generated to create 'cex<number>/cex.spec' files.")
    parser.add_argument(
        "--safe_witnesses",
        help="Create specifications for safe witnesses (should check all possible execution extensions.)",
        action="store_true")
    
    args = parser.parse_args()
    main(args)


