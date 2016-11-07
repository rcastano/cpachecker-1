#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

INSTANCES_DIR=$1
UNIVERSAL_BENCH_DIR=$2

instances=$(find $INSTANCES_DIR/ -type f)
for name in $(ls $UNIVERSAL_BENCH_DIR/);
do
    instance=$(echo $instances | tr " " "\n" | grep $name)
    cp $instance $UNIVERSAL_BENCH_DIR/$name/
done

for leaf in $(find UNIVERSAL_BENCH_DIR/ -type d -name \*cex\*);
do
    pushd $leaf > /dev/null
    instance=$(ls ../../*.c)
    ln -s $instance
    popd > /dev/null
done
