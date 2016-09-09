

import fileinput
import sys

prev_line = "None"
bench_run = "None"
# Number of lines to ignore (headers and footers of each benchmark result table).
ignore = 0
# Dictionary of benchmarks. Benchmark name -> dictionary mapping instance names to lines containing execution information about that instance)
benchs = {}
# Flag. Expecting several benchmarks in the input. 
# When the header of a benchmark execution is read, reading_benchmark 
# is set to true and the results for each instance are stored, when 
# the footer is reached, reading_benchmark is set to false and lines
# are ignored until another header is reached.
reading_benchmark = False
# Utility to be able to refer to columns by name.
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


derived_from = {
    "produce-witnesses-unexplored-predicate-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-unexplored-predicate-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-unexplored-explicit-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-unexplored-explicit-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-explored-predicate-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-explored-predicate-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-explored-explicit-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-explored-explicit-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-safe-predicate-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-safe-predicate-from-predicate.original":
        "generate-predicate.original",
    "produce-witnesses-safe-explicit-from-explicit.original":
        "generate-explicit.original",
    "produce-witnesses-safe-explicit-from-predicate.original":
        "generate-predicate.original"
}

# Checking whether stale data was used (assumption automata from previous runs)
for der, base in derived_from.iteritems():
    to_delete = []

    for instance in benchs[base].keys():
        if benchs[base][instance][column_indexes["status"]] != "unknown":
            to_delete += [instance]
    
    if not to_delete:
        continue
    # Raising an exception might be the best option if no stale
    # data is expected.
    print "Cleaning up results of: " + der
    print "The following instances were generated from stale data:"
    print to_delete
    for instance in to_delete:
        del benchs[der][instance]
    print ""


# Dictionary mapping derived benchmark execution (keys in the derived_from 
# dictionary) to a dictionary mapping from "percentage of time with respect
# to the base benchmark execution time for that instance" to percentage of
# instances completed (where 100% is the number of instances in the base 
# benchmark from which the derived one is created).
# For example:
#     { "produce-witnesses-unexplored-predicate-from-explicit.original":
#          {5 : 53}}
# This dictionary would indicate that the generation of unexplored
# using predicate analysis from an assumption automaton generated from
# explicit value analysis succeeded within 5% of the original execution
# time in 53% of the instances.
finished_for = {}
for der, base in derived_from.iteritems():
    finished_for[der] = {}

# Similar to finished_for except that instead of storing a percentage
# these store the names of the instances themselves in the nested
# dictionary.
unfinished_for = {}
successful = {}
throw_error = {}
multiples = [1] # range(1, 12, 1)
for der, base in derived_from.iteritems():

    if len(benchs[der]) == 0:
        print "No instances processed in execution '" + der + "'."
    for p in multiples:
        bound = float(p) * 0.05
        finished_within_bound = 0
        unfinished_for[der] = []
        successful[der] = []
        throw_error[der] = []


        for instance in benchs[der].keys():
            if (benchs[der][instance][column_indexes["status"]] == "ERROR" or
            benchs[der][instance][column_indexes["status"]] == "EXCEPTION"):
                throw_error[der] += [instance]

            if (benchs[der][instance][column_indexes["status"]] != "true" and
            benchs[der][instance][column_indexes["status"]] != "false(reach)"):
                unfinished_for[der] += [instance]
                continue
            if float(benchs[der][instance][column_indexes["cpu time"]]) < bound * float(benchs[base][instance][column_indexes["cpu time"]]):
                finished_within_bound += 1
                successful[der] += [instance]
            else:
                unfinished_for[der] += [instance]

        if len(benchs[der]) == 0:
            finished_for[der][str(bound)] = -1
        else:
            finished_for[der][str(bound)] = 100 * (float(finished_within_bound) / float(len(benchs[der])))
        print "In " + der + ":"
        print "For bound " + str(bound * 100.0) + "% of original time: " + str(finished_for[der][str(bound)]) + "% completed."
        # print "Unfinished: "
        # print unfinished_for[der]


print ""
print ""

for der in derived_from.keys():
    print der 
    bound = 0.05
    print "total: " + str(len(benchs[der]))
    print "successful: " + str(len(successful[der]))
    print successful[der]
    print "pending: " + str(len(unfinished_for[der]))
    print unfinished_for[der]
    print "errors: " + str(len(throw_error[der]))
    print throw_error[der]
    assert len(benchs[der]) == (len(successful[der]) + len(unfinished_for[der]))
    print ""
    print ""



for der in derived_from.keys():
    for p in multiples:
        bound = float(p) * 0.05
        print "In " + der + ":"
        print "For bound " + str(bound * 100.0) + "% of original time: " + str(finished_for[der][str(bound)]) + "% completed."
i = 0

table_order = {
        "unexplored" : 
        ["produce-witnesses-unexplored-predicate-from-explicit.original",
        "produce-witnesses-unexplored-predicate-from-predicate.original",
        "produce-witnesses-unexplored-explicit-from-explicit.original",
        "produce-witnesses-unexplored-explicit-from-predicate.original"],
        "explored" : 
        ["produce-witnesses-explored-predicate-from-explicit.original",
        "produce-witnesses-explored-predicate-from-predicate.original",
        "produce-witnesses-explored-explicit-from-explicit.original",
        "produce-witnesses-explored-explicit-from-predicate.original"],
        "safe" :
        ["produce-witnesses-safe-predicate-from-explicit.original",
        "produce-witnesses-safe-predicate-from-predicate.original",
        "produce-witnesses-safe-explicit-from-explicit.original",
        "produce-witnesses-safe-explicit-from-predicate.original"]
    }

print "\t\t p from e\t| p from p\t| e from e\t| e from p"
for component in ["unexplored", "explored", "safe"]:
    sys.stdout.write(component + "\t")
    if (component == "safe"):
        sys.stdout.write("\t")
    for der in table_order[component]:
        for p in multiples:
            bound = float(p) * 0.05
            sys.stdout.write("%.2f\t\t" % finished_for[der][str(bound)])
            i += 1
            if i == 4:
                print ""
                i = 0


