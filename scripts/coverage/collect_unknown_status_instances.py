import argparse
import bz2
import os.path

from lxml import etree

supported_benchmark_names = \
        {'generate-explicit-900': 'explicit',
         'generate-predicate-900': 'predicate'}

def set_filename(technique):
    return 'unfinished_' + technique + '_instances.set'

def main(args):
    result_xml = args.result_xml
    filename, file_extension = os.path.splitext(result_xml)
    print file_extension
    if file_extension == '.bz2':
        with bz2.BZ2File(result_xml, 'r') as f:
            t = etree.parse(f)
    else:
        with open(result_xml) as f:
            t = etree.parse(f)

    result = t.xpath('//result')
    assert len(result) == 1

    bench_name = result[0].get('name')
    assert result[0].get('benchmarkname') == 'generate'
    verification_technique = None
    assert bench_name in supported_benchmark_names.keys()
    verification_technique = supported_benchmark_names[bench_name]
    assert not os.path.isfile(os.path.join(args.set_dir,
        set_filename(verification_technique)))


    incomplete_runs = t.xpath(
        ".//run[column[@title = 'status' and @value='unknown']]")

    base_dirs = t.xpath("//var[@name = 'PWD']")
    len(base_dirs) == 1
    base_dir = base_dirs[0].text

    collected_unfinished_instances = []
    for r in incomplete_runs:
        aa_rel_path = (
                r.get('name')
                + '.' + verification_technique
                + '.assumption_automaton')
        aa_absolute_path = os.path.join(base_dir, aa_rel_path)
        assert (os.path.isfile(aa_absolute_path))
        # TODO(rcastano): maybe check file contents
        instance_absolute_path = os.path.join(base_dir, r.get('name'))
        assert (os.path.isfile(instance_absolute_path))
        collected_unfinished_instances.append(instance_absolute_path)
    print 'technique: ' + verification_technique
    with open(os.path.join(args.set_dir,
        set_filename(verification_technique)), 'w') as f:
        for instance in collected_unfinished_instances:
            print >> f, os.path.relpath(instance, start=args.set_dir)


def check_args(args):
    if not (args.result_xml and os.path.isfile(args.result_xml)):
        return False
    if not (args.set_dir and os.path.isdir(args.set_dir)):
        return False
    return True

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--result_xml",
        help="XML file produced by BenchExec containing benchmark results.")

    parser.add_argument(
        "--set_dir",
        help="Directory where the '.set' file will be created.")

    args = parser.parse_args()
    if not check_args(args):
        parser.print_help()
    else:
        main(args)
