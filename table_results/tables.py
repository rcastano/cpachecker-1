

import fileinput
import sys

prev_line = "None"
bench_run = "None"
ignore = 0
benchs = {}
reading_benchmark = False
column_indexes = {"inputfile" : 0,
                  "status" : 1,
                  "cpu time" : 2,
                  "wall time" : 3,
                  "host" : 4,
                  "total" : 5,
                  "reached" : 6,
                  "memory" : 7}
# file = open('results/draft.2016-04-11_1449.results.txt', 'r')
for line in fileinput.input():
# for line in file.readlines():
    line = line.strip()
    if ignore > 0:
        ignore = ignore - 1
        continue
    split_line = line.split()
    if (len(split_line) > 0 and split_line[0] == "Run" and split_line[-1] != "skipped"):
        reading_benchmark = True
        bench_run = prev_line
        if bench_run in benchs:
            raise Exception("Duplicated benchmark results")
        # Adding it at the end, to prevent setting into the wrong benchmark dictionary
        # bench[bench_run] = {}
        bench_res = {}
        ignore = 1
        continue
    prev_line = line
    
    if not reading_benchmark:
        continue
   
    if reading_benchmark and len(split_line) > 0 and split_line[0] == "inputfile":
        ignore = 1
        continue
    if len(line) > 0 and line[0] == "-":
        reading_benchmark = False
        # ignore run set summary "Run set 3 done total_cpu_time total_wall_time"
        ignore = 1
        benchs[bench_run] = bench_res
        continue
    
    if reading_benchmark:
        if len(split_line) == 0:
            print "Found empty line"
            continue
        if split_line[0] in bench_res:
            raise Exception("Duplicated file times for same benchmark")
        bench_res[split_line[0]] = split_line

for k, v in benchs.iteritems():
    print "key: '" + str(k) + "'"
    print ">>>>>>>>>>>"
    for k1, v1 in v.iteritems():
        print k1
        print v1
        print ""
    print "<<<<<<<<<<<"

derived_from = {
    "produce-witnesses-unexplored-predicate-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-unexplored-predicate-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-unexplored-explicit-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-unexplored-explicit-from-predicate.original":
        "generate-predicate.original"
}

for der, base in derived_from.iteritems():
    to_delete = []

    for instance in benchs[base].keys():
        if benchs[base][instance][column_indexes["status"]] != "unknown":
            to_delete += [instance]

    print "Cleaning up results of: " + der
    print "The following instances were generated from stale data:"
    print to_delete
    for instance in to_delete:
        del benchs[der][instance]
    print ""



finished_for = {}
for der, base in derived_from.iteritems():
    finished_for[der] = {}

for der, base in derived_from.iteritems():
    for p in range(1,12,1):
        bound = float(p) * 0.05
        finished_within_bound = 0
        unfinished = []

        for instance in benchs[der].keys():
            if (benchs[der][instance][column_indexes["status"]] != "true" and
            benchs[der][instance][column_indexes["status"]] != "false(reach)"):
                unfinished += [instance]
                continue
            if float(benchs[der][instance][column_indexes["cpu time"]]) < bound * float(benchs[base][instance][column_indexes["cpu time"]]):
                finished_within_bound += 1

        finished_for[der][str(bound)] = 100 * (float(finished_within_bound) / float(len(benchs[der])))
        print "In " + der + ":"
        print "For bound " + str(bound * 100.0) + "% of original time: " + str(finished_for[der][str(bound)]) + "% completed."
        print "Unfinished: "
        print unfinished


print ""
print ""

print "# % of cpu time \t| % 1-e 2-p \t| % 1-p 2-p |\t % 1-e 2-e \t| 1-p 2-e"
for p in range(1,12,1):
    bound = float(p) * 0.05
    sys.stdout.write(str(bound * 100.0) + "\t")
    sys.stdout.write(str(finished_for["produce-witnesses-unexplored-predicate-from-explicit.original"][str(bound)]) + "\t")
    sys.stdout.write(str(finished_for["produce-witnesses-unexplored-predicate-from-predicate.original"][str(bound)]) + "\t")
    sys.stdout.write(str(finished_for["produce-witnesses-unexplored-explicit-from-explicit.original"][str(bound)]) + "\t")
    sys.stdout.write(str(finished_for["produce-witnesses-unexplored-explicit-from-predicate.original"][str(bound)]) + "\t")
    print ""

