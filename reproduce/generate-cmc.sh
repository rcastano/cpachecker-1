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
CONFIGS=$(ls test-configs/generate/*.properties)
for config in $CONFIGS;
do
    DIRNAME=$(output_dirname $file $config $time_limit)
    mkdir -p $DIRNAME
    cp $file $DIRNAME
    { time ./scripts/cpa.sh -skipRecursion -outputpath $DIRNAME -logfile logfile.txt  -preprocess -config $config $file -setprop limits.time.cpu=$time_limit; } > $DIRNAME/output.txt 2>&1
    rm $DIRNAME/*.dot
    rm $DIRNAME/*.json
    rm $DIRNAME/*.spc
    rm $DIRNAME/*.graphml
    rm $DIRNAME/*.lck
done
