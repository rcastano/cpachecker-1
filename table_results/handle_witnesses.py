import sys
import re
import time
import math

class CollapsedCalls:
    def __init__(self):
        self._l = []
        self._depth = None

    def append(self, c):
        if isinstance(c, CollapsedCalls):
            for l in c._l:
                self.append(l)
        else:
            m = re.match("_*", c)
            if self._depth is None:
                self._depth = len(m.group(0))
            if self._depth > len(m.group(0)):
                self._depth = len(m.group(0))

            assert len(m.group(0)) >= self._depth
            self._l.append(c)

    def __str__(self):
        assert len(self._l) > 0
        d = len(self._l)
        return ("_" * self._depth)  + "... (" + str(d) + ")"



def print_witness(witness, f, line_numbers):
    n = len(witness)
    l_size = int(math.log(n, 10)) + 1
    for i, m in enumerate(witness):
        if line_numbers:
            f.write("{0:<{1}}:".format(i, l_size))
        if not isinstance(m, CollapsedCalls):
            print >> f, m.strip()
        else:
            print >> f, str(m)
    print >> f, ""
def print_witnesses(witnesses, line_numbers=False, f=sys.stdout):
    n = len(witnesses)
    if n == 0:
        l_size = 1;
    else:
        l_size = int(math.log(n, 10)) + 1
    for i, w in enumerate(witnesses):
        if line_numbers:
            print >> f, "Witness: " + str(i)
        print_witness(w, f, line_numbers)
    print >> f, "Number of witnesses: " + str(n)


def read_witness(data, i):
    res = []
    while not re.search(">>>", data[i]):
        res.append(data[i])
        i += 1
    res.append(data[i])
    i +=1
    return res, i

def witnesses_calling(method, witnesses):
    res = []
    for w in witnesses:
        if re.search(method, str(expand_witness(w))):
            res.append(w)
    return res

def collapse_depth_witness(witness, depth):
    res = []
    collapsed_call = None
    for c in witness:
        if isinstance(c, CollapsedCalls):
            res.append(c)
            continue
        m = re.match("_*", c)
        # create collapsed_call if increasing depth
        # beyond threshold
        if m and len(m.group(0)) > depth and not collapsed_call:
            collapsed_call = CollapsedCalls()
            res.append(collapsed_call)
        # release reference to collapsed_call if reducing 
        # depth to less than threshold
        if not m or len(m.group(0)) <= depth and collapsed_call:
            collapsed_call = None
        if m and len(m.group(0)) > depth:
            # this works because we keep the reference to 
            # the same object and we keep adding to the last element
            # in <res>
            collapsed_call.append(c)
        else:
            res.append(c)
    return res

def collapse_depth(witnesses, depth):
    res = []
    for w in witnesses:
        res.append(collapse_depth_witness(w[:], depth))
    return res

def collapse_range_witness(witness, lines):
    res = []
    collapsed_call = None
    for i, c in enumerate(witness):
        # create collapsed_call if entering range of interest
        if i in lines and collapsed_call is None:
            collapsed_call = CollapsedCalls()
            res.append(collapsed_call)
        # releasing collapsed_call reference if leaving 
        # range of interest
        if i not in lines and collapsed_call is not None:
            collapsed_call = None
        if i in lines:
            # this works because we keep the reference to 
            # the same object and we keep adding to the last element
            # in <res>
            collapsed_call.append(c)
        else:
            res.append(c)
    return res

def collapse_range(witnesses, witness, lines):
    res = []
    for i, w in enumerate(witnesses):
        if i == witness:
            res.append(collapse_range_witness(w[:], lines))
        else:
            res.append(w)
    return res

class LineNotCollapsed(Exception):
    def __init__(self, line, line_no, witness_no = None):
        self.line = line
        self.line_no = line_no
        self.witness_no = witness_no

    def __str__(self):
        return "witness number:" + str(witness_no) + "\nline number: " + str(self.line_no)


def expand_witness(witness, lines_to_expand = None):
    expand_all = lines_to_expand is None
    res = []
    for i, c in enumerate(witness):
        if isinstance(c, CollapsedCalls) and (expand_all or i in lines_to_expand):
            res += c._l
        else:
            res.append(c)
            if not expand_all and i in lines_to_expand:
                raise LineNotCollapsed(line=c,line_no=i)
    return res


def expand_witnesses(witnesses, witnesses_to_expand = None):
    res = []
    expand_all = witnesses_to_expand is None
    for i, w in enumerate(witnesses):
        if expand_all or i in witnesses_to_expand.keys():
            try:
                lines_to_expand = None
                if not expand_all and i in witnesses_to_expand.keys():
                    lines_to_expand = witnesses_to_expand[i]
                res.append(expand_witness(w, lines_to_expand))
            except LineNotCollapsed as e:
                raise LineNotCollapsed(line=e.line, line_no=e.line_no, witness_no=i)
        else:
            res.append(w)
    return res

def read_int(message):
    read = False
    while not read:
        try:
            res = int(raw_input(message))
            read = True
        except ValueError:
            print "Expecting a number"
    return res

def read_string(message):
    read = False
    while not read:
        try:
            res = str(raw_input(message))
            read = True
        except ValueError:
            print "Expecting a string"
    return res

def main(argv):
    if (len(argv) > 1):
        f = open(argv[1])
        data = f.readlines()
    else:
        print "provide input filename"
        sys.exit()
    witnesses = []
    i = 0
    while i < len(data):
        witness, i = read_witness(data, i)
        witnesses.append(witness)

    witnesses_backup = witnesses[:]
    history = [('-', witnesses_backup)]
    while True:
        c = read_string("command? ")
        if c == 'q':
            break
        if c == 'reset':
            witnesses = witnesses_backup[:]
            history = [('-', witnesses_backup)]
            print "restored input (undo all operations): done"
            continue
        if c == 'back':
            if len(history) > 1:
                witnesses = history[-2][1][:]
                history.pop()
                print "undo last operation: done"
            else:
                print "no list in the history"
            continue
        if c == 'm':
            method = read_string("method substring? ")
            witnesses = witnesses_calling(method, witnesses)
            history.append((c, witnesses))
            print_witnesses(witnesses)
            continue
        if c == 'expand':
            print_witnesses(witnesses, line_numbers=True)

            entered_y_n = False
            while not entered_y_n:
                inp = read_string("all witnesses? (y/n) ")
                if inp == 'y':
                    entered_y_n = True
                    witnesses = expand_witnesses(witnesses)
                elif inp == 'n':
                    entered_y_n = True

                    while True:
                        w = read_int("which witness? ")
                        l = read_int("which line? ")
                        try:
                            witnesses = expand_witnesses(witnesses, {w: [l]})
                            break
                        except LineNotCollapsed as e:
                            print "Not a collapsed line:"
                            print "In witness: " + str(e.witness_no) + " line: " + str(e.line_no)
                            print "Line: " + str(e.line)

                else:
                    print "Please enter y/n"
            history.append((c, witnesses))
            print_witnesses(witnesses)
            continue
        if c == 'd':
            depth = read_int("depth? ")
            witnesses = collapse_depth(witnesses, depth)
            history.append((c, witnesses))
            print_witnesses(witnesses)
            continue
        if c == 'collapse':
            print_witnesses(witnesses, line_numbers=True)
            while True:
                witness = read_int("witness? ")
                if witness >= len(witnesses):
                    print "Too large"
                    continue
                lines_from = read_int("from line number? ")
                lines_to = read_int("to line number (included)? ")
                if lines_from > lines_to:
                    print "enter a valid range, from > to"
                    continue
                if lines_from < 0:
                    print "enter a valid range, from < 0"
                    continue
                if lines_to >= len(witnesses[witness]):
                    print "enter a valid range, to > lenght(witness)"
                    continue
                break

            witnesses = collapse_range(witnesses, witness, range(lines_from, lines_to+1))
            history.append((c, witnesses))
            print_witnesses(witnesses)
            continue
        if c == 'dump':
            filename = read_string("file? ")
            with open(filename, 'a') as f:
                print >> f, "time: " + str(time.strftime("%d/%m/%Y"))
                print_witnesses(witnesses, f=f)
            continue
        if re.match('print', c):
            line_numbers = bool(re.search('_lines', c))
            if re.match('print_one', c):
                n = -1;
                while True:
                    while True:
                        try:
                            print "Number of witnesses: " + str(len(witnesses))
                            witness = read_string("which? (-1 for back, <enter> for next, starting from 0) ")
                            if witness == "":
                                n += 1
                            else:
                                n = int(witness)
                            break
                        except ValueError as e:
                            print "Invalid value, enter a number"
                    if n == -1:
                        break
                    if n >= len(witnesses):
                        break
                    print ""
                    print ""
                    print "Printing witness " + str(n) + ":"
                    print_witness(witnesses[n], line_numbers=line_numbers, f=sys.stdout)
            else:
                print_witnesses(witnesses, line_numbers=line_numbers)
            continue
        print "not an available option"
        # TODO(rcastano) print available options
    

if __name__ == "__main__":
    main(sys.argv)

