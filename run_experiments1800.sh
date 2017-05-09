#!/bin/bash
RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPT_DIR=`pwd -P`
popd > /dev/null
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
for file in $(find my-programs -type f -name \*generate\*.set)
do
  dest_dir=$dir_backup/$(dirname $file)/
  mkdir -p $dest_dir
  mv $file $dest_dir
done

# Run initial verification phase (predicate analysis and
# explicit value, separately)
# For each instance.c file, this will generate the appropriate 
# instance.c.explicit.1800.assumption_automaton and
# instance.c.predicate.1800.assumption_automaton files.
cd cpachecker_files
./scripts/benchmark.py -o ../temp_benchexec_files/ --rundefinition generate-predicate-1800 --rundefinition generate-explicit-1800 --limitCores 1 ../experiments/experiment1800.xml
results_file=`ls ../temp_benchexec_files/generate*.txt`
# Moving the files to the default results folder
cp $results_file ../unified_results-1800.txt
cd ../
# Leaving temp_benchexec_files/ empty.
mv ./temp_benchexec_files/* ./results/

