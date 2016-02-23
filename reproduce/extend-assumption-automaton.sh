#!/bin/bash
# use assumption-automata/before-harness.txt
# cp assumption-automata/before-harness output/AssumptionAutomaton.txt
if [ $# -eq 0 ]
  then
    echo "No arguments supplied, expecting filename."
    exit
fi
DIR=`dirname "$(readlink -f "$0")"`
source $DIR/defs.sh
cd $CPACHECKER_PATH
source_file=$1
dirname_file=`dirname "$(readlink -f "$source_file")"`
automaton_file_to_replace=../../output/AssumptionAutomaton.txt
automaton_file_to_be_used=$dirname_file/AssumptionAutomaton.txt
DIRNAME=$(output_dirname_extend $source_file)
config=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-calls.properties
mkdir -p $DIRNAME
sed -i 's@'$automaton_file_to_replace'@'$automaton_file_to_be_used'@' $config
sed "s/.*limits.time.cpu.*/limits.time.cpu = $time_limit/" -i $config
{ time ./scripts/cpa.sh -skipRecursion -outputpath $DIRNAME -logfile logfile.txt  -preprocess -config $config $source_file; } > $DIRNAME/output.txt 2>&1
# Restore default assumption automaton filename
sed -i 's@'$automaton_file_to_be_used'@'$automaton_file_to_replace'@' $config
