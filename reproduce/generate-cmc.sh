#!/bin/bash
if [ $# -eq 0 ]
  then
    echo "No arguments supplied, expecting filename."
    exit
fi
DIR=`dirname "$(readlink -f "$0")"`
source $DIR/defs.sh
# imports time_limit from defs.sh
# imports CPACHECKER_PATH from defs.sh
# imports output_dirname (file) from defs.sh
cd $CPACHECKER_PATH
file=$1
DIRNAME=$(output_dirname $file)
mkdir -p $DIRNAME 
cp $file $DIRNAME
sed "s/.*limits.time.cpu.*/limits.time.cpu = $time_limit/" -i test-configs/components/predicateAnalysis-generate-cmc-condition.properties
./scripts/cpa.sh -skipRecursion -outputpath $DIRNAME -logfile logfile.txt  -preprocess -config test-configs/components/predicateAnalysis-generate-cmc-condition.properties $file
cat -n $DIRNAME/AssumptionAutomatonAfterPredAbs.txt | tail -n 5 

