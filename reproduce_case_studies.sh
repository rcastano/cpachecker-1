#!/bin/bash 
./activate_benchexec.sh
# Generate all components from existing verification
# files (folder case_studies).
cd cpachecker_files
benchexec -o ../temp_benchexec_files/ \
--tasks case_studies \
--rundefinition produce-witnesses-unexplored-predicate-from-predicate \
--rundefinition produce-witnesses-unexplored-predicate-from-explicit \
--rundefinition produce-witnesses-explored-predicate-from-predicate \
--rundefinition produce-witnesses-explored-predicate-from-explicit \
--rundefinition produce-witnesses-safe-predicate-from-predicate \
--rundefinition produce-witnesses-safe-predicate-from-explicit \
--limitCores 1 ../experiments/experiment10800.xml
cd ../
./post_processing/generate_input.sh predicate-from-explicit cpachecker_files/benchexec-outputs/copy_keyspan_remote.BUG.c 
for file in input_*.txt; do
    mv $file keyspan_$file;
done
./post_processing/generate_input.sh predicate-from-predicate cpachecker_files/benchexec-outputs/copy_mem_slave_tlm.2.c
for file in input_*.txt; do
    mv $file mem_slave_2_$file;
done
./post_processing/generate_input.sh predicate-from-explicit cpachecker_files/benchexec-outputs/copy_mem_slave_tlm.1+keyspan_remote.BUG.c
for file in input_*.txt; do
    mv $file combined_$file;
done


