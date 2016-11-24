import json
# import signal
import sys
# import time

import argparse

def process_counterexample(raw_string, relevant_methods_filename, safe_witness, out):
    try:
        j = json.loads(raw_string)
    except Exception, e:
        print "Error parsing counterexample JSON"
        print raw_string
        raise e
    ignore_relevant_methods = not relevant_methods_filename
    if not ignore_relevant_methods:
        with open(relevant_methods_filename) as f:
            try:
                # j = json.load(sys.stdin)
                relevant_methods = json.load(f)
            except Exception, e:
                print "Error parsing relevant methods JSON"
                raise e
    # print l
    indent = 0
    id = 0
    stack = []
    # signal.signal(signal.SIGUSR1, handle_pdb)
    # dummy = 0
    # while dummy == 0:
    #     time.sleep(0.2)
    def match_any_call(action=None):
        print >> out, '  ( MATCH { $1($?); } || MATCH { $? = $1($?); } )'
        print >> out, '    && CHECK(location, "functionName==$1")'
        if action:
            print >> out, '  -> ' + action + ';'
            print >> out, ''

    def match_method_transition(m, action):
        match_any_call()
        print >> out, '    && CHECK(location, "functionName==' + m + '")'
        print >> out, '  -> ' + action + ';'
        print >> out, ''

    print >> out, 'CONTROL AUTOMATON WitnessAutomaton'
    print >> out, ''
    print >> out, 'INITIAL STATE State0;'
    print >> out, '' 
    for r in j:
        return_desc = "Return edge from"
        function_start_desc = "Function start dummy edge"
        # space = "_"
        desc = r['desc']
        if desc == function_start_desc:
            # TODO(rcastano): This is not entirely robust, sometimes This
            # won't be the function name.
            # Example:
            # int f() {
            #   int nondet();
            #   int i = 0; // <- the transtion from the previous line is a
            #              //    "Function start dummy edge", func_name 
            #              //    will be "int nondet();", which is not what
            #              //    we want.
            # }
            func_name = last['desc'].strip()

            # TODO(rcastano): Actually parse the function name, now I'm
            # getting the whole statement.
            import re
            regex = ( r'([^=]+=\s+(?P<f1>[^( ]+).*)'
                    + r'|((?P<f2>[^( ]+).*)')
            m = re.match(regex, func_name)
            if not stack:
                func_name = "main"
            elif m.group('f1') and not m.group('f2'):
                func_name = m.group('f1')
            elif not m.group('f1') and m.group('f2'):
                func_name = m.group('f2')
            elif not m.group('f1') and not m.group('f2'):
                raise Exception("No match")
            else:
                raise Exception("Both matched")

            stack.append(func_name)
            if ignore_relevant_methods:
                print >> out, "STATE USEFIRST State" + str(id) + ' :'
                match_method_transition(
                    func_name, "GOTO State" + str(id + 1))

                match_any_call("STOP")
                id += 1
            # We don't want to restrict calls to internal methods
            elif func_name in relevant_methods:
                print >> out, "STATE USEFIRST State" + str(id) + ' :'
                match_method_transition(
                    func_name, "GOTO State" + str(id + 1))

                for f in relevant_methods:
                    if func_name == f:
                        continue
                    print ''
                    match_method_transition(f, "STOP")
                id += 1

            # print space*indent + last['desc']
            # indent += 1
        if desc[:len(return_desc)] == return_desc:
            func_name = stack.pop()
        ##     print "STATE USEFIRST State" + str(id) + ' :'
        ##     print '  ( MATCH LABEL "unique_return_' + func_name + '" )'
        ##     print '  -> GOTO State' + str(id + 1)
        ##     id += 1
        ##     # indent -= 1
        last = r
    print >> out, "STATE USEFIRST State" + str(id) + ' :'
    if safe_witness:
        # Transition never used, but in any case automaton would remain in
        # the same state.
        print >> out, '  FALSE -> GOTO State' + str(id) + ';'
    else:
        print >> out, '  TRUE -> STOP;'
    print >> out, ''
    print >> out, 'END AUTOMATON'

def main(args):
    with open('data.txt', 'r') as myfile:
        raw_string=myfile.read()
    process_counterexample(
            raw_string, args.relevant_methods, args.safe_witness, sys.stdout)


if __name__ == "__main__":
    # if len(sys.argv) > 1:
    #     print "This script uses standard input."
    #     print "It expects a JSON encoded list representing a counterexample,"
    #     print "where each element in the list contains a statement in the"
    #     print "field 'desc'." 
    #     sys.exit(1)
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--relevant_methods",
        help="File containing a JSON encoded list of method names (strings).")
    parser.add_argument(
        "--safe_witness",
        help="Create specification for a safe witness (should check all possible extensions)",
        action="store_true")
    
    args = parser.parse_args()
    main(args)


