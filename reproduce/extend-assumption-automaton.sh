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
automaton_file_to_be_used=$dirname_file/AssumptionAutomatonAfterPredAbs.txt
sed -i 's@'$automaton_file_to_replace'@'$automaton_file_to_be_used'@' $CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-calls.properties
./scripts/cpa.sh -skipRecursion -outputpath outputTemp -logfile logfile.txt  -preprocess -config test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-calls.properties $source_file
# Restore default assumption automaton filename
sed -i 's@'$automaton_file_to_be_used'@'$automaton_file_to_replace'@' $CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-calls.properties
