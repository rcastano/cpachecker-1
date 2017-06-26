#!/usr/bin/python3

import cmd
import sys
import re
import time
import math
# for autocompletion
import readline

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

    def str_without_size(self, print_help=False):
        return ("_" * self._depth) + "[...]" + (
            '' if not print_help else " // collapsed segment (see 'help expand' to expand)")

def print_witness(witness, f, line_numbers, is_group_representative=True):
    n = len(witness)
    l_size = int(math.log(n, 10)) + 1
    print_help_collapsed = True
    for i, m in enumerate(witness):
        if is_group_representative and i == len(witness) - 1:
            continue
        if line_numbers:
            f.write("{0:<{1}}:".format(i, l_size))
        if not isinstance(m, CollapsedCalls):
            print(m.strip(), file=f)
        else:
            if is_group_representative:
                print(m.str_without_size(print_help_collapsed), file=f)
                print_help_collapsed = False
            else:
                print(str(m), file=f)
    print("", file=f)
def print_witnesses(witnesses, line_numbers=False, f=sys.stdout):
    n = len(witnesses)
    if n == 0:
        l_size = 1;
    else:
        l_size = int(math.log(n, 10)) + 1
    for i, w in enumerate(witnesses):
        if line_numbers:
            print("Witness: " + str(i), file=f)
        print_witness(w, f, line_numbers)
    print("Number of witnesses: " + str(n), file=f)


def read_witness(data, i):
    res = []
    while not re.search(">>>", data[i]):
        res.append(data[i].strip())
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
            res = int(input(message))
            read = True
        except ValueError:
            print("Expecting a number")
    return res

def read_string(message):
    read = False
    while not read:
        try:
            res = str(input(message + "\n"))
            read = True
        except ValueError:
            print("Expecting a string")
    return res



class Command(object):
    def __init__(self, desc, keywords, command):
        if len(keywords) == 0:
            print("Command not usable, no keywords"  )
        import inspect
        if len(inspect.getargspec(command).args) != 3:
            # command(key)
            raise Exception("Command does not accept the correct number of parameters: " + keywords)

        self.desc = desc
        self.keywords = keywords
        self.command = command

    def __str__(self):
        keywords = self.keywords[0]
        for k in self.keywords[1:]:
            keywords += "/" + k 
        return "Command: " + keywords + "\n" + self.desc

class ViewWitnessesShell(cmd.Cmd):
    intro = 'Execution Report viewer. \n' \
            'Type help or ? to list commands.\n'
    prompt = '(ER view) '
    def __init__(self, p_witnesses):
        super(ViewWitnessesShell, self).__init__()
        self.witnesses = p_witnesses
        self.history = [(('-',[]), self.witnesses[:])]


    def do_quit(self, key):
        'Quit the program'
        return True
        

    def do_reset(self, key):
        'Go back to original set of witnesses'
        self.history = self.history[:1]
        # Format [(command)]
        self.witnesses = self.history[-1][1][:]

    def do_back(self, key):
        'Undo last step'
        if len(self.history) > 1:
            self.witnesses = self.history[-2][1][:]
            self.history.pop()
            print("undo last operation: done")
        else:
            print("no list in the history")

    def do_filter_method(self, key):
        'Only keep witnesses containing a certain method'
        method = read_string("method substring? ")
        self.witnesses = witnesses_calling(method, self.witnesses)
        self.history.append((('filter_method', [method]), self.witnesses))
        print_witnesses(self.witnesses)

    def do_expand(self, key):
        'Expand a previously collapsed portion of a witness'
        print_witnesses(self.witnesses, line_numbers=True)

        entered_y_n = False
        while not entered_y_n:
            inp = read_string("all witnesses? (y/n) ")
            if inp == 'y':
                entered_y_n = True
                params = [entered_y_n]
                self.witnesses = expand_witnesses(self.witnesses)
            elif inp == 'n':
                entered_y_n = True
                params = [entered_y_n]

                while True:
                    w = read_int("which witness? ")
                    l = read_int("which line? ")
                    params.append(w)
                    params.append(l)
                    try:
                        self.witnesses = expand_witnesses(self.witnesses, {w: [l]})
                        break
                    except LineNotCollapsed as e:
                        print("Not a collapsed line:")
                        print("In witness: " + str(e.witness_no) + " line: " + str(e.line_no))
                        print("Line: " + str(e.line))

            else:
                print("Please enter y/n")

        self.history.append((('expand', params), self.witnesses))
        print_witnesses(self.witnesses)

    def do_collapse_depth(self, key):
        'Collapse all lines which are deeper in the stack than a certain depth'
        depth = read_int("depth? ")
        self.witnesses = collapse_depth(self.witnesses, depth)
        self.history.append((('collapse_depth', [depth]), self.witnesses))
        print_witnesses(self.witnesses)

    def do_collapse_range(self, key):
        'Collapse all lines within a range of lines'
        print_witnesses(self.witnesses, line_numbers=True)
        while True:
            witness = read_int("witness? ")
            if witness >= len(self.witnesses):
                print("Too large")
                continue
            lines_from = read_int("from line number? ")
            lines_to = read_int("to line number (included)? ")
            if lines_from > lines_to:
                print("enter a valid range, from > to")
                continue
            if lines_from < 0:
                print("enter a valid range, from < 0")
                continue
            if lines_to >= len(self.witnesses[witness]):
                print("enter a valid range, to > lenght(witness)")
                continue
            break

        self.witnesses = collapse_range(self.witnesses, witness, range(lines_from, lines_to+1))
        self.history.append(((key, [lines_from, lines_to]), self.witnesses))
        print_witnesses(self.witnesses)

    def do_dump(self, key):
        'dump current view of witnesses to a file.'
        filename = read_string("file? ")
        with open(filename, 'a') as f:
            print( "time: " + str(time.strftime("%d/%m/%Y %H:%M:%S")), file=f)
            print_witnesses(self.witnesses, f=f)

    def do_print(self, key):
        'Print all witnesses.'
        print_witnesses(self.witnesses, line_numbers=False)

    def do_print_lines(self, key):
        'Print all witnesses (include witness number and line numeration).'
        print_witnesses(self.witnesses, line_numbers=True)

    def do_print_one(self, key):
        'Print witnesses one by one (including witness number and line numeration).'
        line_numbers = True
        n = -1;
        while True:
            while True:
                try:
                    print("Number of witnesses: " + str(len(self.witnesses)))
                    witness = read_string("which? \n    -1 to go back to main menu\n    <enter> for next, starting from 0 ")
                    if witness == "":
                        n += 1
                    else:
                        n = int(witness)
                    break
                except ValueError as e:
                    print("Invalid value, enter a number")
            if n == -1:
                break
            if n >= len(self.witnesses):
                break
            print("")
            print("")
            print("Printing witness " + str(n) + ":")
            print_witness(self.witnesses[n], line_numbers=line_numbers, f=sys.stdout)

    def do_group(self, key):
        'Group equivalent witnesses together (collapsed segments are considered equal)'
        groups = []
        count = []
        copy_witnesses = self.witnesses[:]
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
            print("Group " + str(i) + " - Count: " + str(count[i]))
            print_witness(rep, line_numbers=False, f=sys.stdout, is_group_representative=True)
        print("Number of groups: " + str(len(groups)))
        inner_cmd = ""
        while inner_cmd != "back":
            inner_cmd = read_string("enter 'back' after inspecting the groups to return to the main menu")

    def do_history(self, key):
        'Show commands performed.'
        for (key, params), witnesses in self.history:
            print(key + " (with params:) " + str(params))

    # ----- record and playback -----
    # def do_record(self, self, arg):
    #     'Save future commands to filename:  RECORD rose.cmd'
    #     self.file = open(arg, 'w')
    # def do_playback(self, self, arg):
    #     'Playback commands from a file:  PLAYBACK rose.cmd'
    #     self.close()
    #     with open(arg) as f:
    #         self.cmdqueue.extend(f.read().splitlines())
    # def precmd(self, line):
    #     line = line.lower()
    #     if self.file and 'playback' not in line:
    #         print(line, file=self.file)
    #     return line
    # def close(self):
    #     if self.file:
    #         self.file.close()
    #         self.file = None


def print_help(commands):
    print("Available options are:")
    for cmd in commands:
        print(cmd)
        print("")

def check_commands(commands):
    all_keywords = set()
    for cmd in commands:
        for k in cmd.keywords:
            if k in all_keywords:
                raise Exception("Repeated keywords for commands: " + k)
            all_keywords.add(k)

def collapse_non_calls_witness(witness):
    res = []
    collapsed_statements = None
    for i in range(len(witness)):

        c = witness[i]
        if isinstance(c, CollapsedCalls):
            res.append(c)
            continue

        ### # create collapsed_call whenever the current statement is not a call
        ### if m and len(m.group(0)) > depth and not collapsed_call:
        ###     collapsed_call = CollapsedCalls()
        ###     res.append(collapsed_call)

        def stmt_i_is_call(witness, i):
            if i + 1 >= len(witness)-1:
                return False
            c = witness[i]
            c_next = witness[i+1]
            m = re.match("_*", c)
            m_next = re.match("_*", c_next)
            return len(m.group(0)) + 1 == len(m_next.group(0))
        def stmt_i_is_return(witness, i):
            if i + 1 >= len(witness)-1:
                return False
            c = witness[i]
            c_next = witness[i+1]
            m = re.match("_*", c)
            m_next = re.match("_*", c_next)
            return len(m.group(0)) - 1 == len(m_next.group(0))
            

        # release reference to collapsed_call if current statement is a call
        if stmt_i_is_call(witness, i) and collapsed_statements:
            collapsed_statements = None
        if stmt_i_is_call(witness, i):
            res.append(c)
        else:
            if not collapsed_statements:
                collapsed_statements = CollapsedCalls()
                res.append(collapsed_statements)
            # this works because we keep the reference to 
            # the same object and we keep adding to the last element
            # in <res>
            collapsed_statements.append(c)
        # release reference to collapsed_call if current statement is 
        # a return
        if stmt_i_is_return(witness, i) and collapsed_statements:
            collapsed_statements = None
    if collapsed_statements:
        res = res[:-1]
        res += collapsed_statements._l
    return res

def collapse_non_calls_witnesses(witnesses):
    processed_witnesses = []
    for w in witnesses:
        processed_witnesses.append(collapse_non_calls_witness(w))
    return processed_witnesses


def preprocess_witness(witness_statements):
    filtered_witness = []
    reached_main = False
    for s in witness_statements:
        m = re.match("_*", s)
        reached_main = reached_main or 'Function start dummy edge' in s
        empty_stmt = len(m.group(0)) == len(s)
        if reached_main and not empty_stmt and ( not (
            ('Return edge' in s) or
            ('Function start dummy edge' in s) or
            ('default return' in s)
        )):
            filtered_witness.append(s)
    return filtered_witness

def preprocess_witnesses(witnesses):
    filtered_witnesses = []
    for w in witnesses:
        filtered_witnesses.append(preprocess_witness(w))
    return filtered_witnesses





def main(argv):
    if (len(argv) > 1):
        f = open(argv[1])
        data = f.readlines()
    else:
        print("provide input filename")
        sys.exit()
    witnesses = []
    i = 0
    while i < len(data):
        witness, i = read_witness(data, i)
        witnesses.append(witness)
    witnesses = preprocess_witnesses(witnesses)
    witnesses = collapse_non_calls_witnesses(witnesses)
    ViewWitnessesShell(witnesses).cmdloop()


if __name__ == "__main__":
    if sys.version_info[0] < 3:
        raise "The script requires Python 3"
    main(sys.argv)
