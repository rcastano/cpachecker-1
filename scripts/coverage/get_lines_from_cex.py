import argparse
import glob
import json
import os
import re
import subprocess
import sys
import errno
import shutil

def default_sigpipe():
    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

# cex_filename should be a .spc file (a CPAchecker specification file)
def get_lines_from_cex(cex_filename, temp_folder=None):
    # This doesn't work, we need to differenciate function declarations
    # from method calls to compute coverage.
    # with open(cex_filename) as f:
    #     for l in f:
    #         m = re.match(r'^(line[s]) (?P<range>[^:]*)', l)
    #         if not m:
    #             continue
    #         range_txt = r.group('range')
    #         if '-' in range_txt:

    if not temp_folder:
        temp_folder = _script_path() + '/temp_folder/'

    try:
        shutil.rmtree(temp_folder)
    except:
        print "Warning! Temporary folder for get_lines_from_cex already existed." 
        pass
    os.makedirs(temp_folder)

    lines_covered = set()
    with open(cex_filename) as f:

        for line in f:
            m = re.match(r'^DA:(?P<line_number>[^,]*),(?P<visits>.*)$', line)
            if not m:
                continue
            line_number = int(m.group('line_number'))
            n_visits = int(m.group('visits'))
            if n_visits != 0:
                lines_covered.add(line_number)
    shutil.rmtree(temp_folder)

    return lines_covered
  
def _script_path(): 
    return os.path.dirname(os.path.realpath(__file__))

def process_counterexamples(instance_filename, folder, only_cover_prefix=False, temp_folder=None):
    all_cex = os.listdir(folder + '/')
    pattern = r'.*Counterexample.([^.]*).coverage-info'
    if only_cover_prefix:
        pattern = r'.*Counterexample.([^.]*).prefix.coverage-info'
    all_cex = [cex for cex in all_cex if re.match(pattern, cex)]
    lines_covered = set()
    for cex in all_cex:
        cex = folder + '/' + cex
        lines_covered.update(get_lines_from_cex(cex, temp_folder))
    return lines_covered

def find_property(filename, prop_name):
    with open(filename) as f:
        values_assigned = []
        for line in f:
            m = re.match(r'.*' + prop_name + r' = (?P<prop>.*)$', line)
            if not m:
                continue
            values_assigned.append(m.group('prop'))
    return values_assigned

def main(args):
    program_names = find_property(args.folder + '/UsedConfiguration.properties', 'analysis.programNames')
    if len(program_names) == 0:
        print "Error parsing program name."
        sys.exit(1)
    if len(program_names) > 1:
        print "Several program names. Unsupported feature."
        sys.exit(1)
    instance_filename = program_names[0]
    lines_covered = process_counterexamples(instance_filename, args.folder)
    for l in lines_covered:
        print l

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--folder",
        help="Directory containing Counterexample.*.html files and UsedConfiguration.properties file.")
    
    args = parser.parse_args()
    if not args.folder:
        parser.print_help()
    else:
        main(args)


