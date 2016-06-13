#!/bin/bash 
./activate_benchexec.sh
mkdir temp_benchexec_files
rm -rf temp_benchexec_files/*
benchexec -o temp_benchexec_files --limitCores 1 test/test-sets/experiment10800.xml
results_file=`ls temp_benchexec_files/experiment10800*.txt`
cat $results_file | python table_results/completed_5percent.py 
mv temp_benchexec_files/* results/
rm -rf temp_benchexec_files

