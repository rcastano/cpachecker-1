import argparse
import glob
import json
import os
import re
import subprocess
import sys
import errno

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def process_counterexamples(folder, dest_folder, safe_witnesses):
    script_path = os.path.dirname(os.path.realpath(__file__))
    all_cex = os.listdir(folder + '/')
    pattern = r'.*Counterexample.([^.]*).html'
    all_cex = [cex for cex in all_cex if re.match(pattern, cex)]
    for cex in all_cex:

        number = re.sub(pattern, r'\1', cex)
        cex = folder + '/' + cex
        cex_spec_folder = dest_folder + '/cex' + number + '/'
        try:
            os.makedirs(cex_spec_folder)
        except OSError as exc:
            if exc.errno != errno.EEXIST:
                raise exc
            pass
        output = subprocess.check_output([script_path + '/get_json_from_html.sh', cex])
        import json_to_spec
        with open(cex_spec_folder + 'cex.spec', 'w') as f:
            json_to_spec.process_counterexample(output, None, safe_witnesses, f)

def main(args):
    process_counterexamples(args.folder, args.dest_folder, args.safe_witnesses)

if __name__ == "__main__":
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


