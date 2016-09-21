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
        return self.str_without_size()  + " (" + str(d) + ")"

    def str_without_size(self):
        return ("_" * self._depth) + "..."

def print_witness(witness, f, line_numbers, is_group_representative=True):
    n = len(witness)
    l_size = int(math.log(n, 10)) + 1
    for i, m in enumerate(witness):
        if is_group_representative and i == len(witness) - 1:
            continue
        if line_numbers:
            f.write("{0:<{1}}:".format(i, l_size))
        if not isinstance(m, CollapsedCalls):
            print >> f, m.strip()
        else:
            if is_group_representative:
                print >> f, m.str_without_size()
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
            res = str(raw_input(message + "\n"))
            read = True
        except ValueError:
            print "Expecting a string"
    return res



class Command(object):
    def __init__(self, desc, keywords, command):
        if len(keywords) == 0:
            print "Command not usable, no keywords"  
        import inspect
        if len(inspect.getargspec(command).args) != 3:
            # command(key, history, witnesses)
            raise Exception("Command does not accept the correct number of parameters: " + keywords)

        self.desc = desc
        self.keywords = keywords
        self.command = command

    def __str__(self):
        keywords = self.keywords[0]
        for k in self.keywords[1:]:
            keywords += "/" + k 
        return "Command: " + keywords + "\n" + self.desc

def setup_commands(commands):
    def cmd_quit(key, history, witnesses):
        sys.exit(0)

    desc_quit = "Quit the program"
    key_quit = ["q"]

    commands.append(Command(desc_quit, key_quit, cmd_quit))

    def cmd_reset(key, history, witnesses):
        history = history[:1]
        # Format [(command, witnesses)]
        witnesses = history[-1][1][:]

    desc_reset = "Remove history and go back to original set of witnesses"
    key_reset = ["reset"]

    commands.append(Command(desc_reset, key_reset, cmd_reset))

    def cmd_back(key, history, witnesses):
        if len(history) > 1:
            witnesses = history[-2][1][:]
            history.pop()
            print "undo last operation: done"
        else:
            print "no list in the history"

    desc_back = "Undo last step"
    key_back = ["back"]

    commands.append(Command(desc_back, key_back, cmd_back))

    def cmd_filter_method(key, history, witnesses):
        method = read_string("method substring? ")
        witnesses = witnesses_calling(method, witnesses)
        history.append(((key, [method]), witnesses))
        print_witnesses(witnesses)

    desc_filter_method = "Only keep witnesses containing a certain method"
    key_filter_method = ["m"]

    commands.append(Command(desc_filter_method, key_filter_method, cmd_filter_method))

    def cmd_expand(key, history, witnesses):
        print_witnesses(witnesses, line_numbers=True)

        entered_y_n = False
        while not entered_y_n:
            inp = read_string("all witnesses? (y/n) ")
            if inp == 'y':
                entered_y_n = True
                params = [entered_y_n]
                witnesses = expand_witnesses(witnesses)
            elif inp == 'n':
                entered_y_n = True
                params = [entered_y_n]

                while True:
                    w = read_int("which witness? ")
                    l = read_int("which line? ")
                    params.append(w)
                    params.append(l)
                    try:
                        witnesses = expand_witnesses(witnesses, {w: [l]})
                        break
                    except LineNotCollapsed as e:
                        print "Not a collapsed line:"
                        print "In witness: " + str(e.witness_no) + " line: " + str(e.line_no)
                        print "Line: " + str(e.line)

            else:
                print "Please enter y/n"

        history.append(((key, params), witnesses))
        print_witnesses(witnesses)

    desc_expand = "Expand a previously collapsed portion of a witness"
    key_expand = ["expand"]

    commands.append(Command(desc_expand, key_expand, cmd_expand))

    def cmd_collapse_depth(key, history, witnesses):
        depth = read_int("depth? ")
        witnesses = collapse_depth(witnesses, depth)
        history.append(((key, [depth]), witnesses))
        print_witnesses(witnesses)

    desc_collapse_depth = "Collapse all lines which are deeper in the stack than a certain depth"
    key_collapse_depth = ["d"]

    commands.append(Command(desc_collapse_depth, key_collapse_depth, cmd_collapse_depth))

    def cmd_collapse_range(key, history, witnesses):
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
        history.append(((key, [lines_from, lines_to]), witnesses))
        print_witnesses(witnesses)

    desc_collapse_range = "Collapse all lines within a range of lines"
    key_collapse_range = ["collapse"]

    commands.append(Command(desc_collapse_range, key_collapse_range, cmd_collapse_range))

    def cmd_dump(key, history, witnesses):
        filename = read_string("file? ")
        with open(filename, 'a') as f:
            print >> f, "time: " + str(time.strftime("%d/%m/%Y"))
            print_witnesses(witnesses, f=f)

    desc_dump = "Dump current view of witnesses to a file."
    key_dump = ["dump"]

    commands.append(Command(desc_dump, key_dump, cmd_dump))

    def cmd_print(key, history, witnesses):
        print_witnesses(witnesses, line_numbers=False)

    desc_print = "Print all witnesses."
    key_print = ["print"]

    commands.append(Command(desc_print, key_print, cmd_print))

    def cmd_print_lines(key, history, witnesses):
        print_witnesses(witnesses, line_numbers=True)

    desc_print_lines = "Print all witnesses (include witness number and line numeration)."
    key_print_lines = ["print_lines"]

    commands.append(Command(desc_print_lines, key_print_lines, cmd_print_lines))

    def cmd_print_one(key, history, witnesses):
        line_numbers = True
        n = -1;
        while True:
            while True:
                try:
                    print "Number of witnesses: " + str(len(witnesses))
                    witness = read_string("which? \n    -1 to go back to main menu\n    <enter> for next, starting from 0 ")
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

    desc_print_one = "Print witnesses one by one (including witness number and line numeration)."
    key_print_one = ["print_one"]

    commands.append(Command(desc_print_one, key_print_one, cmd_print_one))

    def cmd_group_witnesses(key, history, witnesses):
        groups = []
        count = []
        copy_witnesses = witnesses[:]
        for w in copy_witnesses:
            def equal_witnesses(w1, w2):
                equal = len(w1) == len(w2)
                # Ignore last position, contains filename
                for i in range(len(w1)-1):
                    if not equal:
                        break
                    if (isinstance(w1[i], CollapsedCalls) and
                        isinstance(w2[i], CollapsedCalls)):
                        equal = w1[i]._depth == w2[i]._depth
                    else:
                        equal = w1[i] == w2[i] 
                return equal
            found_group = False
            for i, rep in enumerate(groups):
                if equal_witnesses(w, rep):
                    count[i] = count[i] + 1
                    found_group = True
                    break
            if not found_group:
                groups.append(w)
                count.append(1)
            assert len(count) == len(groups)
        for i, rep in enumerate(groups):
            print "Group " + str(i) + " - Count: " + str(count[i])
            print_witness(rep, line_numbers=False, f=sys.stdout, is_group_representative=True)
        print "Number of groups: " + str(len(groups))
        inner_cmd = ""
        while inner_cmd != "back":
            inner_cmd = read_string("enter 'back' after inspecting the groups to return to the main menu")


    desc_group_witnesses = "Group equivalent witnesses together (collapsed segments are considered equal)"
    key_group_witnesses = ["group"]

    commands.append(Command(desc_group_witnesses, key_group_witnesses, cmd_group_witnesses))

    def cmd_history(key, history, witnesses):
        for (key, params), cmd in history:
            print key + " (with params:) " + str(params)

    desc_history = "Show commands performed."
    key_history = ["history"]

    commands.append(Command(desc_history, key_history, cmd_history))

def print_help(commands):
    print "Available options are:"
    for cmd in commands:
        print cmd
        print ""

def check_commands(commands):
    all_keywords = set()
    for cmd in commands:
        for k in cmd.keywords:
            if k in all_keywords:
                raise Exception("Repeated keywords for commands: " + k)
            all_keywords.add(k)


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
    history = [(("-",[]), witnesses_backup)]
    commands = []
    setup_commands(commands)
    check_commands(commands)
    while True:
        c = read_string("command? (h for help)")
        if c == 'h':
            print_help(commands)
        for cmd in commands:
            for k in cmd.keywords:
                found = c == k
                if found:
                    break
            if found:
                cmd.command(c, history, witnesses)
                # update witnesses
                witnesses = history[-1][1]
                break
        if not found:
            print "not an available option"
            print_help(commands)

if __name__ == "__main__":
    main(sys.argv)
