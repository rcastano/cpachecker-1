#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

INSTANCES_DIR=$1
UNIVERSAL_BENCH_DIR=$2

instances=$(find $INSTANCES_DIR/ -type f -name \*.c)
for name in $(ls $UNIVERSAL_BENCH_DIR/ | grep "\.c");
do
    instance=$(echo $instances | tr " " "\n" | grep $name)
    cp $instance $UNIVERSAL_BENCH_DIR/$name/
done

for leaf in $(find $UNIVERSAL_BENCH_DIR/ -mindepth 2 -type d -name \*cex\*);
do
    pushd $leaf > /dev/null
    instance=$(ls ../../*.c)
    # pwd
    cex_id=$(pwd | sed 's@.*cex\([^/]*\).*@\1@')
    # echo $cex_id
    # echo cex___$(echo $cex_id)___$(basename $instance)
    ln -s $instance cex___$(echo $cex_id)___$(basename $instance)
    popd > /dev/null
done
