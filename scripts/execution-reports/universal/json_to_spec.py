import json
# import signal
import sys
# import time

def main():
    try:
        j = json.load(sys.stdin)
    except Exception, e:
        print "Error parsing counterexample JSON"
        raise e
    ignore_relevant_methods = False
    if len(sys.argv) == 2:
        with open(sys.argv[1]) as f:
            try:
                # j = json.load(sys.stdin)
                relevant_methods = json.load(f)
            except Exception, e:
                print "Error parsing relevant methods JSON"
                raise e
    else:
        ignore_relevant_methods = True
    # print l
    indent = 0
    id = 0
    stack = []
    # signal.signal(signal.SIGUSR1, handle_pdb)
    # dummy = 0
    # while dummy == 0:
    #     time.sleep(0.2)
    def match_any_call(action=None):
        print '  ( MATCH { $1($?); } || MATCH { $? = $1($?); } )'
        print '    && CHECK(location, "functionName==$1")'
        if action:
            print '  -> ' + action + ';'
            print ''

    def match_method_transition(m, action):
        match_any_call()
        print '    && CHECK(location, "functionName==' + m + '")'
        print '  -> ' + action + ';'
        print ''

    print 'CONTROL AUTOMATON WitnessAutomaton'
    print ''
    print 'INITIAL STATE State0;'
    print '' 
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
                print "STATE USEFIRST State" + str(id) + ' :'
                match_method_transition(
                    func_name, "GOTO State" + str(id + 1))

                match_any_call("STOP")
                id += 1
            # We don't want to restrict calls to internal methods
            elif func_name in relevant_methods:
                print "STATE USEFIRST State" + str(id) + ' :'
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
    print "STATE USEFIRST State" + str(id) + ' :'
    print '  TRUE -> STOP;'
    print ''
    print 'END AUTOMATON'

if __name__ == "__main__":
    # if len(sys.argv) > 1:
    #     print "This script uses standard input."
    #     print "It expects a JSON encoded list representing a counterexample,"
    #     print "where each element in the list contains a statement in the"
    #     print "field 'desc'." 
    #     sys.exit(1)
    main()


