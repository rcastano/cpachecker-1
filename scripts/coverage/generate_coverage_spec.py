import sys
import argparse

#def default_sigpipe():
#    signal.signal(signal.SIGPIPE, signal.SIG_DFL)

def avoid_unexplored_spec(f):
    print >> f, 'CONTROL AUTOMATON AvoidUnexplored'
    print >> f, ''
    print >> f, 'INITIAL STATE Init;'
    print >> f, ''
    print >> f, 'STATE USEFIRST Init :'
    print >> f, '  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> STOP;'
    print >> f, '  TRUE -> GOTO Init;'
    print >> f, ''
    print >> f, 'END AUTOMATON'

def gen_spec(f, lines_to_cover):
    assert len(lines_to_cover) > 0
    print >> f, 'CONTROL AUTOMATON CoverageAutomaton'
    print >> f, ''
    print >> f, 'INITIAL STATE State0;'
    print >> f, ''
    print >> f, 'STATE USEFIRST State0:'
    for l in lines_to_cover:
        print >> f, '  CHECK("line==' + str(l) + '") -> GOTO WaitForExit;'

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
        help="Path to text file containing all liens that we need to cover."
    )

    args = parser.parse_args()
    if not args.lines_to_cover:
        parser.print_help()
    else:
        main(args)
