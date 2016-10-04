#!/bin/bash 

SCRIPT_DIR=$(dirname $0)
cd $SCRIPT_DIR
# Create temp directory (clear contents in case it already existed).
mkdir temp_benchexec_files
# This should only run once
mkdir results
rm -rf temp_benchexec_files/*
dir_backup=backup_$(date +%Y%m%d_%H%M%S)
mkdir $dir_backup
for file in $(find my-programs -type f -name \*assumption_automaton\*)
do
  dest_dir=$dir_backup/$(dirname $file)/
  mkdir -p $dest_dir
  mv $file $dest_dir
done
# Run initial verification phase (predicate analysis and
# explicit value, separately)
# For each instance.c file, this will generate the appropriate 
# instance.c.explicit.assumption_automaton and
# instance.c.predicate.assumption_automaton files.
cd cpachecker_files
./scripts/benchmark.py -o ../temp_benchexec_files --rundefinition generate-predicate-10800 --rundefinition generate-explicit-10800 --limitCores 1 ../experiments/generate.xml
results_file=`ls ../temp_benchexec_files/generate*.txt`
# Moving the files to the default results folder
cp $results_file ../unified_results.txt
cd ../
# Leaving temp_benchexec_files/ empty.
mv ./temp_benchexec_files/* ./results/

if [ ! -z ${ONLY_GENERATE} ];
then
# var is set
exit
fi
# Generate all components
cd cpachecker_files
./scripts/benchmark.py -o ../temp_benchexec_files \
--tasks original \
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
cd ../
# Moving files to standard benchexec results folder.
mv temp_benchexec_files/* results/
cat unified_results.txt | python tables/completed_5percent.py 
rm -rf temp_benchexec_files

