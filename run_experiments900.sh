#!/bin/bash 
if [ -z ${ACTIVATE_BENCHEXEC+x} ]; then ./activate_benchexec.sh; fi
# Create temp directory (clear contents in case it already existed).
mkdir temp_benchexec_files
rm -rf temp_benchexec_files/*
# Run initial verification phase (predicate analysis and
# explicit value, separately)
# For each instance.c file, this will generate the appropriate 
# instance.c.explicit.assumption_automaton and
# instance.c.predicate.assumption_automaton files.
benchexec -o temp_benchexec_files --rundefinition generate-predicate --rundefinition generate-explicit --limitCores 1 experiments/experiment900.xml
results_file=`ls temp_benchexec_files/experiment900*.txt`
# Moving the files to the default results folder
mv $results_file unified_results.txt
# Leaving temp_benchexec_files/ empty.
mv temp_benchexec_files/* results/
# Generating .swapped files, which have the TRUE and FALSE states
# swapped. This step is necessary to generate "safe" components of
# the execution reports.
./pre_process/preprocess_safe_component_input.sh
# Generate all components
benchexec -o temp_benchexec_files \
--rundefinition produce-witnesses-unexplored-predicate-from-predicate \
--rundefinition produce-witnesses-unexplored-predicate-from-explicit \
--rundefinition produce-witnesses-unexplored-explicit-from-predicate \
--rundefinition produce-witnesses-unexplored-explicit-from-explicit \
--rundefinition produce-witnesses-explored-predicate-from-predicate \
--rundefinition produce-witnesses-explored-predicate-from-explicit \
--rundefinition produce-witnesses-explored-explicit-from-predicate \
--rundefinition produce-witnesses-explored-explicit-from-explicit \
--rundefinition produce-witnesses-safe-predicate-from-predicate \
--rundefinition produce-witnesses-safe-predicate-from-explicit \
--rundefinition produce-witnesses-safe-explicit-from-predicate \
--rundefinition produce-witnesses-safe-explicit-from-explicit \
--rundefinition produce-witnesses-emptiness-predicate-from-predicate \
--rundefinition produce-witnesses-emptiness-predicate-from-explicit \
--rundefinition produce-witnesses-emptiness-explicit-from-predicate \
--rundefinition produce-witnesses-emptiness-explicit-from-explicit \
--limitCores 1 experiments/experiment900.xml
# Should be only one.
results_file=`ls temp_benchexec_files/experiment900*.txt`
# Appending results from the second phase to unified_results.txt
cat $results_file >> unified_results.txt
# Moving files to standard benchexec results folder.
mv temp_benchexec_files/* results/
cat unified_results.txt | python table_results/completed_5percent.py 
rm -rf temp_benchexec_files

