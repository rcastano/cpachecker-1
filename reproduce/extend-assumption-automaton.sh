#!/bin/bash
# use assumption-automata/before-harness.txt
# cp assumption-automata/before-harness output/AssumptionAutomaton.txt
DIR=`dirname "$(readlink -f "$0")"`
source $DIR/defs.sh
cd $CPACHECKER_PATH
./scripts/cpa.sh -outputpath outputTemp -logfile logfile.txt  -preprocess -config test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-calls.properties my-programs/my-crafted/crafted2.c
