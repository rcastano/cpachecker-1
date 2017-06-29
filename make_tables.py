import argparse
import bz2
import os.path
import sys

from lxml import etree

supported_benchmark_names = \
        {'generate-explicit-900': 'explicit',
         'generate-predicate-900': 'predicate'}

def set_filename(technique):
    return 'unfinished_' + technique + '_instances.set'

def print_table_header(run_set_name_explicit, run_set_name_predicate, f):
    print(r'\begin{tabular}{l|c|c|c|c|c|c|l}', file=f)
    name_in_table_explicit = run_set_name_explicit.replace(
            'produce-witnesses-', '').replace(
            '-', ' ').replace(
            'safe', 'Safe: ').replace(
            'unexplored', 'Frontier: ') + '-AA'
    name_in_table_predicate = run_set_name_predicate.replace(
            'produce-witnesses-', '').replace(
            '-', ' ').replace(
            'safe', 'Safe: ').replace(
            'unexplored', 'Frontier: ') + '-AA'

    f.write(
        r' & \multicolumn{4}{c|}{' + name_in_table_explicit + '}')
    f.write(
        r' & \multicolumn{4}{c|}{' + name_in_table_predicate + r'} \\ ')
    print('', file=f)
    print(r' & \# traces & Full? & CPU time' +
           r' & \# traces & Full? & CPU time \\', file=f)

def get_output_directory(instance_name, run_set_name):
    script_dir = os.path.dirname(os.path.realpath(__file__))
    base_output_dir = os.path.join(
        script_dir, 'cpachecker_files','benchexec-outputs')
    instance_output_dir = os.path.join(base_output_dir, instance_name)
    run_output_dir = os.path.join(instance_output_dir, run_set_name)
    assert os.path.exists(run_output_dir)
    run_output_subdirs = os.listdir(run_output_dir)

    assert len(run_output_subdirs) == 1
    return os.path.join(run_output_dir, run_output_subdirs[0])

# Count number of Counterexample files generated.
def print_cex_number(run_set_name, instance_name):
    output_files = os.listdir(
        get_output_directory(instance_name, run_set_name))
    cex_files = [f for f in output_files if (
        'Counterexample' in f and 'html' in f)]
    return str(len(cex_files))

def is_full_status(c):
    return c.get('title') == 'status' and (
       c.get('value') == 'false(reach)' or
       c.get('value') == 'true')

# Returns True iff the status reported indicates
# CPAchecker finished within the time bounds, i.e. iff it
# completed the ER component.
def is_full_er(columns):
    for c in columns:
        if is_full_status(c):
            return True
    return False

def to_string(c):
    debug = False
    if c.get('title') == 'memUsage':
        # return c.get('value')
        return str(int(c.get('value'))/1024**2) + 'MB'
    elif c.get('title') == 'cputime':
        assert (c.get('value')[-1:] == 's')
        return "{0:.2f}".format(float(c.get('value')[:-1])) + 's'
    elif c.get('title') == 'status':
        if is_full_status(c):
            return r'\checkmark'
        elif debug:
            return c.get('value')
        else:
            return r'\xmark'
    else:
        return c.get('value')

def print_col(columns, col, f):
    for c in columns:
        if c.get('title') == col:
            f.write(to_string(c) + ' \t& ')

def print_n_traces(columns, run_set_name, instance_name, f):
    is_full = is_full_er(columns)
    cex_number_str = print_cex_number(
        run_set_name, instance_name) if is_full else '-'
    f.write(cex_number_str + ' & ')

def print_columns(columns, run_set_name, instance_name, f):
    # Column '# traces'
    print_n_traces(columns, run_set_name, instance_name, f)
    # Column 'Full?'
    print_col(columns, 'status', f)
    # Column 'CPU time'
    print_col(columns, 'cputime', f)

def print_line(r, result_predicate, run_set_name_explicit,
    run_set_name_predicate, completed_instances, f):
    columns_explicit = r.xpath('.//column')
    instance = os.path.basename(r.get('name'))
    # Print instance file name
    f.write(instance.replace('_', r'\_') + ' \t& ')
    # Match with the appropriate run in the results using
    # lazy predicate abstraction.
    runs_predicate = result_predicate.xpath(
        ".//run[column][@name='" + r.get('name') + "']")
    assert len(runs_predicate) == 1
    columns_predicate = runs_predicate[0].xpath('.//column')

    print_columns(columns_explicit, run_set_name_explicit, instance, f)
    if is_full_er(columns_explicit):
        completed_instances.completed_explicit += 1

    print_columns(columns_predicate, run_set_name_predicate, instance, f)
    if is_full_er(columns_predicate):
        completed_instances.completed_predicate += 1

    print(r' \\', file=f)

class CompletedInstances(object):
    def __init__(self):
        self.completed_predicate = 0
        self.completed_explicit = 0

def handle_bench_result(result_explicit, result_predicate, f):
    run_set_name_explicit = result_explicit.get('name')
    run_set_name_predicate = result_predicate.get('name')

    print_table_header(run_set_name_explicit, run_set_name_predicate, f)

    runs_explicit = result_explicit.xpath('.//run')
    runs_predicate = result_predicate.xpath('.//run')
    completed_instances = CompletedInstances()
    for r in runs_explicit:
        print_line(
            r,
            result_predicate,
            run_set_name_explicit,
            run_set_name_predicate,
            completed_instances,
            f)
    completed_explicit = completed_instances.completed_explicit
    completed_predicate = completed_instances.completed_predicate
    f.write(
        ' & &' + str(completed_explicit) + '/' + str(len(runs_explicit)) +
        ' Full & & & &')
    f.write(
        str(completed_predicate) + '/' + str(len(runs_predicate)) +
        r' Full & & & \\')
    print('', file=f)
    print(r'\end{tabular}', file=f)
                
                



def main(args):
    trees = []
    for result_xml in args.result_xml:
        filename, file_extension = os.path.splitext(result_xml)
        if file_extension == '.bz2':
            with bz2.BZ2File(result_xml, 'r') as f:
                t = etree.parse(f)
        else:
            with open(result_xml) as f:
                t = etree.parse(f)
        trees.append(t)

    results = []
    for t in trees:
        tree = t.xpath('//result')
        assert len(tree) == 1
        results.append(tree[0])
    with open('table.tex', 'w') as f:
        handle_bench_result(results[0], results[1], f)



def check_args(args):
    if not args.result_xml:
        return False
    return True

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--result_xml",
        help="XML file produced by BenchExec containing benchmark results.",
        nargs=2)


    args = parser.parse_args()
    if not check_args(args):
        parser.print_help()
    else:
        main(args)
