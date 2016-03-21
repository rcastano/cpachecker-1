#!/bin/bash

run_cpachecker () {
  local config=$1
  local time_limit=$2
  local dirname=$3
  local source_file=$4
  mkdir -p $dirname
  echo $time_limit
  { time ./scripts/cpa.sh -skipRecursion -outputpath $dirname -logfile logfile.txt  -preprocess -config $config $source_file -setprop limits.time.cpu=$time_limit -additionalSpec $automaton_file_to_be_used; } > $dirname/output.txt 2>&1
}

produce_paths() {
  dirname=$1
  ./reproduce/show_paths.sh $dirname > $dirname/traces.txt
  sort $dirname/traces.txt > $dirname/traces_sorted.txt
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
automaton_file_to_be_used=$dirname_file/AssumptionAutomaton.txt
explored_time_limit=${explored_time_limit:-$time_limit}

config_explored=$CPACHECKER_PATH/test-configs/extend/explicitAnalysis-use-cmc-condition-print-explored-calls.properties
# config_explored=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-explored-calls.properties
config_unexplored=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-unexplored-calls.properties

shorten_path() {
  basename $1 
}

DIRNAME=$(output_dirname_extend $source_file)
echo "Explored prefixes:"
dirname=$DIRNAME/explored/$explored_time_limit/`shorten_path $config_explored`
run_cpachecker $config_explored $explored_time_limit $dirname $source_file 
produce_paths $dirname

DIRNAME=$(output_dirname_extend $source_file)
echo "Unexplored traces:"
dirname=$DIRNAME/unexplored/$time_limit/`shorten_path $config_unexplored`
run_cpachecker $config_unexplored $time_limit $dirname $source_file 
produce_paths $dirname

DIRNAME=$(output_dirname_extend $source_file safe)
$DIR/swap_false_and_true.sh $automaton_file_to_be_used
echo "Safe traces:"
dirname=$DIRNAME/safe/$time_limit/`shorten_path $config_unexplored`
automaton_file_to_be_used=$dirname_file/AssumptionAutomaton.txt.swapped
run_cpachecker $config_unexplored $time_limit $dirname $source_file 
produce_paths $dirname

