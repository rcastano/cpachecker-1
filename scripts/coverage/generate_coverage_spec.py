import sys
import argparse

#def default_sigpipe():
#    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def gen_spec(f, lines_to_cover):
    assert len(lines_to_cover) > 0
    print >> f, 'CONTROL AUTOMATON CoverageAutomaton'
    print >> f, ''
    print >> f, 'INITIAL STATE State0;'
    print >> f, ''
    print >> f, 'STATE USEFIRST State0:'
    print >> f, '  ('
    for l in lines_to_cover:
        print >> f, '  CHECK("line==' + str(l) + '") ||'
    print >> f, '  FALSE) -> GOTO WaitForExit;'

    print >> f, ''
    print >> f, 'STATE USEFIRST WaitForExit:'
    print >> f, '  MATCH EXIT -> ERROR("Found covering test case");'
    print >> f, ''
    print >> f, 'END AUTOMATON'

def main(args):
    # script_path = os.path.dirname(os.path.realpath(__file__))
    file_with_line_numbers = args.lines_to_cover
    lines_to_cover = []
    with open(args.lines_to_cover) as f:
        for l in f:
            lines_to_cover.append(int(l))
    
    gen_spec(sys.stdout, lines_to_cover)

if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--lines_to_cover",
        help="Directory where benchmark intermediate files are stored. (Specific directory structure expected)"
    )

    args = parser.parse_args()
    if not args.lines_to_cover:
        parser.print_help()
    else:
        main(args)
