#!/bin/bash

run_cpachecker () {
  config=$1
  time_limit=$2
  dirname=$3
  source_file=$4
  base_config=`dirname $config`/predicateAnalysis-generate-and-use-cmc-condition-print-specified-calls.properties
  mkdir -p $dirname
  echo $time_limit
  sed -i 's@'$automaton_file_to_replace'@'$automaton_file_to_be_used'@' $config
  sed "s/.*limits.time.cpu.*/limits.time.cpu = $time_limit/" -i $base_config
  { time ./scripts/cpa.sh -skipRecursion -outputpath $dirname -logfile logfile.txt  -preprocess -config $config $source_file; } > $dirname/output.txt 2>&1
  # Restore default assumption automaton filename
  sed -i 's@'$automaton_file_to_be_used'@'$automaton_file_to_replace'@' $config
}

produce_paths() {
  config=$1
  ./reproduce/show_paths.sh $DIRNAME/$config > $DIRNAME/$config-traces.txt
  sort $DIRNAME/$config-traces.txt > $DIRNAME/$config-traces_sorted.txt
}

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

config_explored=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-explored-calls.properties
config_unexplored=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-unexplored-calls.properties

DIRNAME=$(output_dirname_extend $source_file)
echo "Explored prefixes:"
run_cpachecker $config_explored $time_limit $DIRNAME/explored $source_file 
produce_paths explored

DIRNAME=$(output_dirname_extend $source_file)
echo "Unexplored traces:"
run_cpachecker $config_unexplored $time_limit $DIRNAME/unexplored $source_file 
produce_paths unexplored

DIRNAME=$(output_dirname_extend $source_file safe)
$DIR/swap_false_and_true.sh $automaton_file_to_be_used
echo "Safe traces:"
automaton_file_to_be_used=$dirname_file/AssumptionAutomaton.txt.swapped
run_cpachecker $config_unexplored $time_limit $DIRNAME/safe $source_file 
produce_paths safe

