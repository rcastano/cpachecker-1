#!/bin/bash

echo $$ > /sys/fs/cgroup/cpuset/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/cpuacct/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/memory/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/freezer/system.slice/benchexec-cgroup.service/tasks

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

# Generate all components
cd cpachecker_files
./scripts/benchmark.py -o ../temp_benchexec_files/ \
--tasks "from-predicate-900" \
--rundefinition produce-witnesses-unexplored-predicate-from-predicate \
--rundefinition produce-witnesses-unexplored-explicit-from-predicate \
--rundefinition produce-witnesses-safe-predicate-from-predicate \
--rundefinition produce-witnesses-safe-explicit-from-predicate \
--limitCores 1 ../experiments/experiment900.xml
# Should be only one.
results_file=`ls ../temp_benchexec_files/experiment900*.txt`
# Appending results from the second phase to unified_results.txt
cat $results_file >> ../unified_results.txt
# Moving files to standard benchexec results folder.
mv ../temp_benchexec_files/* ../results/

./scripts/benchmark.py -o ../temp_benchexec_files/ \
--tasks "from-explicit-900" \
--rundefinition produce-witnesses-unexplored-predicate-from-explicit \
--rundefinition produce-witnesses-unexplored-explicit-from-explicit \
--rundefinition produce-witnesses-safe-predicate-from-explicit \
--rundefinition produce-witnesses-safe-explicit-from-explicit \
--limitCores 1 ../experiments/experiment900.xml
# Should be only one.
results_file=`ls ../temp_benchexec_files/experiment900*.txt`
# Appending results from the second phase to unified_results.txt
cat $results_file >> ../unified_results.txt
# Moving files to standard benchexec results folder.
mv ../temp_benchexec_files/* ../results/

cd ../
cat unified_results.txt | python tables/completed_5percent.py --time_limit 900 
rm -rf temp_benchexec_files

