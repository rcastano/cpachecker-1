#!/bin/bash
if [ $# -eq 0 ]
  then
    echo "No arguments supplied, expecting filename."
    exit
fi
DIR=`dirname "$(readlink -f "$0")"`
files_to_save="AssumptionAutomaton.txt output.txt Statistics.txt"
source $DIR/defs.sh
# imports time_limit from defs.sh
# imports CPACHECKER_PATH from defs.sh
# imports output_dirname (file) from defs.sh
cd $CPACHECKER_PATH
file=$1
CONFIGS=$(ls test-configs/generate/*.properties)
for config in $CONFIGS;
do
    DIRNAME=$(output_dirname $file $config $time_limit)
    mkdir -p $DIRNAME
    mkdir outputTemp
    cp $file $DIRNAME
    sed "s/.*limits.time.cpu.*/limits.time.cpu = $time_limit/" -i $config
    cbmc_time_limit=$[`echo $time_limit | sed 's/s//'`/10]s
    sed "s/.*cbmc.timelimit.*/cbmc.timelimit = $cbmc_time_limit/" -i $config
    { time ./scripts/cpa.sh -skipRecursion -outputpath outputTemp -logfile logfile.txt  -preprocess -config $config $file; } > outputTemp/output.txt 2>&1
    for f in $files_to_save;
    do
      cp outputTemp/$f $DIRNAME/
    done
    rm -r outputTemp
done

