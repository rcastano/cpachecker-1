#!/bin/bash

run_cpachecker () {
  local config=$1
  local time_limit=$2
  local dirname=$3
  local source_file=$4
  mkdir -p $dirname
  echo $time_limit
  { time ./scripts/cpa.sh -skipRecursion -outputpath $dirname -logfile logfile.txt  -preprocess -config $config $source_file -setprop limits.time.cpu=$time_limit -setprop "specification=$specs"; } > $dirname/output.txt 2>&1
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

config_explored=$CPACHECKER_PATH/test-configs/extend/explicitAnalysis.properties
config_unexplored=$CPACHECKER_PATH/test-configs/components/predicateAnalysis-generate-and-use-cmc-condition-print-specified-calls.properties

shorten_path() {
  basename $1 
}

spec_base=$CPACHECKER_PATH/test-configs/specification/AssumptionGuidingAutomaton.spc
spec_explored=$CPACHECKER_PATH/test-configs/my-specification/detect-explored-calls.spc
spec_unexplored=$CPACHECKER_PATH/test-configs/my-specification/detect-unexplored-calls.spc

DIRNAME=$(output_dirname_extend $source_file)
echo "Explored prefixes:"
dirname=$DIRNAME/explored/$explored_time_limit/`shorten_path $config_explored`
specs=$(echo $spec_base, $spec_explored, $automaton_file_to_be_used)
run_cpachecker $config_explored $explored_time_limit $dirname $source_file 
produce_paths $dirname

DIRNAME=$(output_dirname_extend $source_file)
echo "Unexplored traces:"
dirname=$DIRNAME/unexplored/$time_limit/`shorten_path $config_unexplored`
specs=$(echo $spec_base, $spec_unexplored, $automaton_file_to_be_used)
run_cpachecker $config_unexplored $time_limit $dirname $source_file 
produce_paths $dirname

DIRNAME=$(output_dirname_extend $source_file safe)
$DIR/swap_false_and_true.sh $automaton_file_to_be_used
echo "Safe traces:"
dirname=$DIRNAME/safe/$time_limit/`shorten_path $config_unexplored`
automaton_file_to_be_used=$dirname_file/AssumptionAutomaton.txt.swapped
# I need to update the assumption automaton file. 
specs=$(echo $spec_base, $spec_unexplored, $automaton_file_to_be_used)
run_cpachecker $config_unexplored $time_limit $dirname $source_file 
produce_paths $dirname
