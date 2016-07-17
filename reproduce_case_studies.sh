#!/bin/bash 
./activate_benchexec.sh
# Generate all components from existing verification
# files (folder case_studies).
benchexec -o temp_benchexec_files \
--tasks case_studies \
--rundefinition produce-witnesses-unexplored-predicate-from-predicate \
--rundefinition produce-witnesses-unexplored-predicate-from-explicit \
--rundefinition produce-witnesses-explored-predicate-from-predicate \
--rundefinition produce-witnesses-explored-predicate-from-explicit \
--rundefinition produce-witnesses-safe-predicate-from-predicate \
--rundefinition produce-witnesses-safe-predicate-from-explicit \
--rundefinition produce-witnesses-emptiness-predicate-from-predicate \
--rundefinition produce-witnesses-emptiness-predicate-from-explicit \
--limitCores 1 experiments/experiment10800.xml
./post_processing/generate_input.sh predicate-from-explicit benchexec-outputs/keyspan_remote.BUG.c 
for file in input_*.txt; do
    mv $file keyspan_$file;
done
./post_processing/generate_input.sh predicate-from-predicate benchexec-outputs/mem_slave_tlm.2.c
for file in input_*.txt; do
    mv $file mem_slave_2_$file;
done
./post_processing/generate_input.sh predicate-from-explicit benchexec-outputs/mem_slave_tlm.1+keyspan_remote.BUG.c
for file in input_*.txt; do
    mv $file combined_$file;
done


