import argparse
import glob
import json
import os
import re
import subprocess
import sys
import errno

from sets import Set

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

# cex_filename should be a .spc file (a CPAchecker specification file)
def get_lines_from_cex(cex_filename, script_path):
    # This doesn't work, we need to differenciate function declarations
    # from method calls to compute coverage.
    # with open(cex_filename) as f:
    #     for l in f:
    #         m = re.match(r'^(line[s]) (?P=range[^:]*)', l)
    #         if not m:
    #             continue
    #         range_txt = r.group('range')
    #         if '-' in range_txt:
    
    temp_folder = script_path + '/temp_folder/'
    import shutil
    try:
        shutil.rmtree(temp_folder)
    except:
        # Directory might not exist
        pass
    os.makedirs(temp_folder)


    subprocess.check_call(
        [script_path + '/../cpa.sh',
         '-predicateAnalysis',
         'setprop specification=' + cex_filename,
         '-outputpath ' + temp_folder,
         cex])
    lines_covered = Set()
    with open(temp_folder + '/coverage.info') as f:

        for line in f:
            m = re.match(r'^DA:(?P=line_number[^,]*),1$', line)
            if not m:
                continue
            line_number = int(m.group('line_number'))
            lines_covered.add(line_number)

    return lines_covered
  
  
              

def process_counterexamples(folder, dest_folder, safe_witnesses):
    script_path = os.path.dirname(os.path.realpath(__file__))
    all_cex = os.listdir(folder + '/')
    pattern = r'.*Counterexample.([^.]*).spc'
    all_cex = [cex for cex in all_cex if re.match(pattern, cex)]
    lines_covered = Set()
    for cex in all_cex:
        lines_covered.union_update(process_counterexample(cex, script_path))

def main(args):
    process_counterexamples(args.folder, args.dest_folder, args.safe_witnesses)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--folder",
        help="Directory containing Counterexample.*.html files.")
    
    args = parser.parse_args()
    main(args)


