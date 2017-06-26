
import argparse
import fileinput
import sys
import os.path

def filter_unknown_status(benchs, column_indexes):
    # Dictionary containing, for each benchmark run, the instance
    # names containing status "unknown"
    unknown_status = {}
    for b, r in benchs.iteritems():
        # r is a dictionary: { instance_name -> row with results}
        unknown_status[b] = []
        for instance, results in r.iteritems():
            if results[column_indexes["status"]] == "unknown":
                unknown_status[b].append(results)
    return unknown_status

    # Generates a dictionary of benchmarks.
    # { Benchmark name ->
    #       dictionary mapping instance names to lines containing execution
    #       information about that instance)
def parse_benchmark_results(column_indexes):
    prev_line = "None"
    bench_run = "None"
    # Number of lines to ignore (headers and footers of each benchmark result table).
    ignore = 0

    # Flag. Expecting several benchmarks in the input. 
    # When the header of a benchmark execution is read, reading_benchmark 
    # is set to true and the results for each instance are stored, when 
    # the footer is reached, reading_benchmark is set to false and lines
    # are ignored until another header is reached.
    reading_benchmark = False

    # Holds the result
    benchs = {}

    for line in sys.stdin:
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
    return benchs

def main(args):

    # Utility to be able to refer to columns by name.
    column_indexes = {"inputfile" : 0,
                      "status" : 1,
                      "cpu time" : 2,
                      "wall time" : 3,
                      "host" : 4,
                      "total" : 5,
                      "reached" : 6,
                      "memory" : 7}

    benchs = parse_benchmark_results(column_indexes)

    if args.print_unfinished:
        unfinished_instances = filter_unknown_status(benchs, column_indexes)

        for b, r in unfinished_instances.iteritems():
            filename = args.instances_root_path + "/" + b + ".set"
            if os.path.isfile(filename):
                print ("Instance file containing unfinished instances "
                       "already exists:")
                print filename
                sys.exit(1)
            with open(filename, 'w') as f:
                for results_for_instance in r:
                    print >> f, "fse12/" + results_for_instance[column_indexes["inputfile"]]
    else:
        time_limit=args.time_limit
        techniques = ["explicit", "predicate"]
        # witness_types = ["unexplored", "explored", "safe"]
        witness_types = ["unexplored", "safe"]

        def benchmark_name(derived_technique, base_technique, witness_type,
                time_limit):
            der = ( "produce-witnesses-" +
                    witness_type + "-" +
                    derived_technique + "-from-" +
                    base_technique + ".from-" +
                    base_technique + "-" + time_limit)
            return der
        def base_benchmark_name(base_technique, time_limit):
            base = ("generate-" +
                    base_technique + "-" +
                    time_limit + ".original" )
            return base

        derived_from = {}
        for l in time_limit:
            for t in techniques:
                for t_f in techniques:
                    for w_t in witness_types:
                        der = benchmark_name(t, t_f, w_t, time_limit)
                        base = base_benchmark_name(t_f, time_limit)
                        derived_from[der] = base

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
                if instance in benchs[der]:
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

        # Dictionary: bound x base-technique x der-technique -> [instance]
        any_finished = {}
        other_than_explored_finished = {}

        multiples = range(1, 20, 1) # [i for i in range(1, 20, 1) if i % 2 == 1] # [1] # range(1, 12, 1)

        for p in multiples:
            bound = float(p) * 0.05
            any_finished[str(bound)] = {}
            other_than_explored_finished[str(bound)] = {}
            for t_f in techniques:
                any_finished[str(bound)][t_f] = {}
                other_than_explored_finished[str(bound)][t_f] = {}
                for t in techniques:
                    any_finished[str(bound)][t_f][t] = []
                    other_than_explored_finished[str(bound)][t_f][t] = []
                    # Any witness type works, I just need to iterate over
                    # all instances.
                    der = benchmark_name(t, t_f, "safe", time_limit)
                    for instance in benchs[der].keys():
                        found = False
                        found_other_than_explored = False
                        for w_t in witness_types:
                            der = benchmark_name(t, t_f, w_t, time_limit)
                            base = base_benchmark_name(t_f, time_limit)
                            print benchs[der][instance]
                            if float(benchs[der][instance][column_indexes["cpu time"]]) > bound * float(benchs[base][instance][column_indexes["cpu time"]]):
                                # Instance did not finish within alloted time
                                continue
                            if (benchs[der][instance][column_indexes["status"]] == "true" or
                            benchs[der][instance][column_indexes["status"]] == "false(reach)"):
                                found = True
                                if w_t != "explored":
                                    found_other_than_explored = True
                        if found:
                            any_finished[str(bound)][t_f][t].append(instance)
                        if found_other_than_explored:
                            other_than_explored_finished[str(bound)][t_f][t].append(instance)


        all_finished = {}
        for p in multiples:
            bound = float(p) * 0.05
            all_finished[str(bound)] = {}
            for t_f in techniques:
                all_finished[str(bound)][t_f] = {}
                for t in techniques:
                    all_finished[str(bound)][t_f][t] = []
                    # Any witness type works, I just need to iterate over
                    # all instances.
                    der = benchmark_name(t, t_f, "safe", time_limit)
                    for instance in benchs[der].keys():
                        found_not_finished = False
                        for w_t in witness_types:
                            der = benchmark_name(t, t_f, w_t, time_limit)
                            base = base_benchmark_name(t_f, time_limit)
                            if float(benchs[der][instance][column_indexes["cpu time"]]) > bound * float(benchs[base][instance][column_indexes["cpu time"]]):
                                # Instance did not finish within alloted time
                                found_not_finished = True
                                break
                            if (benchs[der][instance][column_indexes["status"]] != "true" and
                            benchs[der][instance][column_indexes["status"]] != "false(reach)"):
                                found_not_finished = True
                                break
                        if not found_not_finished:
                            all_finished[str(bound)][t_f][t].append(instance)
        


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
            print ""
        i = 0

        p = "predicate"
        e = "explicit"
        table_order = {}
        # def benchmark_name(
        #           derived_technique,
        #           base_technique,
        #           witness_type,
        #           time_limit):
        for w_t in witness_types:
            table_order[w_t] = [
                benchmark_name(p, e, w_t, args.time_limit),
                benchmark_name(p, p, w_t, args.time_limit),
                benchmark_name(e, e, w_t, args.time_limit),
                benchmark_name(e, p, w_t, args.time_limit)]

        for p in multiples:
            bound = float(p) * 0.05
            print ""
            print ("Instances finished within " + str(bound*100) + "%" )
            print "Verification\t e \t|\t p\t|\t e\t|\t p"
            print ("ER" +   "\t\t p \t|\t p\t|\t e\t|\t e")
            # for component in ["unexplored", "explored", "safe"]:
            for component in ["unexplored", "safe"]:
                sys.stdout.write(component + "\t")
                if (component == "safe"):
                    sys.stdout.write("\t")
                for der in table_order[component]:
                    sys.stdout.write("%.2f\t\t" % finished_for[der][str(bound)])
                print ""
        y = {}
        # original verification technique - ER technique
        y["pp"] = []
        y["ee"] = []
        y["pe"] = []
        y["ep"] = []
        for p in multiples:
            bound = float(p) * 0.05
            print ""
            print ("Instances with at least one component finishing within " + str(bound*100) + "%" )
            print "Verification\t e \t|\t p\t|\t e\t|\t p"
            print ("ER" +   "\t\t p \t|\t p\t|\t e\t|\t e")
            sys.stdout.write("\t\t")
            # witness type does not matter, the number of instances will
            # be the same for all witness types.
            der = benchmark_name("predicate", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(any_finished[str(bound)]["explicit"]["predicate"]))
            total = float(len(benchs[der].keys()))

            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ep"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("predicate", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(any_finished[str(bound)]["predicate"]["predicate"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pp"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(any_finished[str(bound)]["explicit"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ee"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(any_finished[str(bound)]["predicate"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pe"].append(100.0*(n_with_1_full/total))
            print ""

        x = [5 * i for i in multiples]
        try:
            import matplotlib
            matplotlib.use('Agg')
            import matplotlib.pyplot as plt
        except ImportError:
            print "matplotlib not available."
            print "Running the following 2 commands will install matplotlib"
            print "sudo apt-get install python-pip"
            print "pip install matplotlib"
            raise

        plt.ylabel('% of instances')
        plt.xlabel('% of 900s (verification time)')

        c = "ee"
        plt.plot(x, y[c], label=c)
        c = "ep"
        plt.plot(x, y[c], label=c)
        c = "pe"
        plt.plot(x, y[c], label=c)
        c = "pp"
        plt.plot(x, y[c], label=c)

        plt.legend(loc='lower right')
        plt.axis([0.0,100.0, 0, 105])
        plt.show()
        plt.savefig('one-or-more.eps', format='eps')

        y = {}
        # original verification technique - ER technique
        y["pp"] = []
        y["ee"] = []
        y["pe"] = []
        y["ep"] = []
        for p in multiples:
            bound = float(p) * 0.05
            print ""
            print ("Instances with all components finishing within " + str(bound*100) + "%" )
            print "Verification\t e \t|\t p\t|\t e\t|\t p"
            print ("ER" +   "\t\t p \t|\t p\t|\t e\t|\t e")
            sys.stdout.write("\t\t")
            # witness type does not matter, the number of instances will
            # be the same for all witness types.
            der = benchmark_name("predicate", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(all_finished[str(bound)]["explicit"]["predicate"]))
            total = float(len(benchs[der].keys()))

            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ep"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("predicate", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(all_finished[str(bound)]["predicate"]["predicate"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pp"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(all_finished[str(bound)]["explicit"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ee"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(all_finished[str(bound)]["predicate"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pe"].append(100.0*(n_with_1_full/total))
            print ""

        x = [5 * i for i in multiples]

        plt.clf()
        plt.ylabel('% of instances')
        plt.xlabel('% of 900s (verification time)')

        c = "ee"
        plt.plot(x, y[c], label=c)
        c = "ep"
        plt.plot(x, y[c], label=c)
        c = "pe"
        plt.plot(x, y[c], label=c)
        c = "pp"
        plt.plot(x, y[c], label=c)

        plt.legend(loc='upper left')
        plt.axis([0.0,100.0, -5, 50])
        plt.show()
        plt.savefig('all.eps', format='eps')

        y = {}
        # original verification technique - ER technique
        y["pp"] = []
        y["ee"] = []
        y["pe"] = []
        y["ep"] = []
        for p in multiples:
            bound = float(p) * 0.05
            print ""
            print ("Instances with at least one component other than explored finishing within " + str(bound*100) + "%" )
            print "Verification\t e \t|\t p\t|\t e\t|\t p"
            print ("ER" +   "\t\t p \t|\t p\t|\t e\t|\t e")
            sys.stdout.write("\t\t")
            # witness type does not matter, the number of instances will
            # be the same for all witness types.
            der = benchmark_name("predicate", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(other_than_explored_finished[str(bound)]["explicit"]["predicate"]))
            total = float(len(benchs[der].keys()))

            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ep"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("predicate", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(other_than_explored_finished[str(bound)]["predicate"]["predicate"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pp"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "explicit", "safe", args.time_limit)
            n_with_1_full = float(len(other_than_explored_finished[str(bound)]["explicit"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["ee"].append(100.0*(n_with_1_full/total))


            der = benchmark_name("explicit", "predicate", "safe", args.time_limit)
            n_with_1_full = float(len(other_than_explored_finished[str(bound)]["predicate"]["explicit"]))
            total = float(len(benchs[der].keys()))
            sys.stdout.write("%.2f\t\t" % (100.0*(n_with_1_full/total)))
            y["pe"].append(100.0*(n_with_1_full/total))
            print ""

        x = [5 * i for i in multiples]

        plt.clf()
        matplotlib.rcParams.update({'font.size': 22})
        plt.figure(figsize=(10, 10))
        plt.ylabel('% of instances')
        plt.xlabel('% of 900s (verification time)')

        c = "ee"
        l = "EE"
        plt.plot(x, y[c], '-*', label=l)
        c = "ep"
        l = "EP"
        plt.plot(x, y[c], '-^', label=l)
        c = "pe"
        l = "PE"
        plt.plot(x, y[c], '-o', label=l)
        c = "pp"
        l = "PP"
        plt.plot(x, y[c], '-v', label=l)

        plt.legend(loc='right', prop={'size':17})
        plt.axis([0.0,100.0, 0, 95])
        plt.tight_layout()
        plt.show()
        plt.savefig('one-or-more-other-than-explored.eps', format='eps')

if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument(
            "--time_limit",
            help="Time limit enforced during verification.",
            choices=["900", "10800"])
    parser.add_argument(
            "--print_unfinished",
            help="Print unfinished instances",
            action="store_true")

    parser.add_argument(
            "--instances_root_path",
            help=("Path to directory holding benchmark instances,\n"
                  "used to generate task files containing only\n"
                  "unfinished instances"))

    args = parser.parse_args()
    
    if args.print_unfinished and not args.instances_root_path:
        parser.print_help()
        print "Please indicate instances root path"
        sys.exit(1)

    if not args.print_unfinished and args.time_limit != "900" and args.time_limit != "10800":
        print "Please enter time limit used (expecting either 900 or 10800)"
        sys.exit(1)


    main(args)
