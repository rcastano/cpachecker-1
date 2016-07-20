#!/bin/bash 
if [ ! -z ${DO_NOT_ACTIVATE_BENCHEXEC+x} ]; then ./activate_benchexec.sh; fi
# Create temp directory (clear contents in case it already existed).
mkdir temp_benchexec_files
mkdir results
rm -rf temp_benchexec_files/*
dir_backup=backup_$(date +%Y%m%d_%H%M%S)
mkdir $dir_backup
mv `find my-programs -type f -name \*assumption_automaton\*` $dir_backup
# Run initial verification phase (predicate analysis and
# explicit value, separately)
# For each instance.c file, this will generate the appropriate 
# instance.c.explicit.assumption_automaton and
# instance.c.predicate.assumption_automaton files.
cd cpachecker_files
benchexec -o ../temp_benchexec_files --rundefinition generate-predicate --rundefinition generate-explicit --limitCores 1 ../experiments/experiment10800.xml
results_file=`ls ../temp_benchexec_files/experiment10800*.txt`
# Moving the files to the default results folder
mv $results_file unified_results.txt
# Leaving temp_benchexec_files/ empty.
mv ../temp_benchexec_files/* ../results/
cd ../
# Generating .swapped files, which have the TRUE and FALSE states
# swapped. This step is necessary to generate "safe" components of
# the execution reports.
./pre_process/preprocess_safe_component_input.sh
# Generate all components
cd cpachecker_files
benchexec -o ../temp_benchexec_files \
--tasks original
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
--limitCores 1 ../experiments/experiment10800.xml
# Should be only one.
results_file=`ls ../temp_benchexec_files/experiment10800*.txt`
# Appending results from the second phase to unified_results.txt
cat $results_file >> ../unified_results.txt
# Moving files to standard benchexec results folder.
mv ../temp_benchexec_files/* ../results/
cat ../unified_results.txt | python tables/completed_5percent.py 
rm -rf ../temp_benchexec_files
