import json
import sys

def main():
    try:
        j = json.load(sys.stdin)
    except:
        print "Error parsing JSON"
        sys.exit(1)
    # print l
    indent = 0
    for r in j:
        return_desc = "Return edge from"
        function_start_desc = "Function start dummy edge"
        space = "_"
        desc = r['desc']
        print space*indent + desc
        if desc == function_start_desc:
            indent += 1

        if desc[:len(return_desc)] == return_desc:
            indent -= 1


if __name__ == "__main__":
    if len(sys.argv) > 1:
        print "This script uses standard input."
        print "It expects a JSON encoded list representing a counterexample,"
        print "where each element in the list contains a statement in the"
        print "field 'desc'." 
        sys.exit(1)
    main()


