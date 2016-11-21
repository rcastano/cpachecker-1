#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

INSTANCES_DIR=$1
UNIVERSAL_BENCH_DIR=$2

technique=$(find $UNIVERSAL_BENCH_DIR/ -type d -name \*cex\* | grep "\-from" | sed 's@.*-from-\([^/]*\).*@\1@' | sort | uniq)

if [ "$technique" != "explicit" ]
then
    if [ "$technique" != "predicate" ]
    then
        echo "Aborting! Error parsing technique."
    fi
fi

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
    technique_combination=$(basename $(dirname `pwd`) | sed 's/.*-\([^-]*-from-[^-]*\).*/\1/')
    # echo $cex_id
    # echo cex___$(echo $cex_id)___$(basename $instance)
    ln -s $instance ${technique_combination}___cex___${cex_id}___$(basename $instance)
    popd > /dev/null
done

echo $technique >> $UNIVERSAL_BENCH_DIR/technique.txt

instances=$(find $INSTANCES_DIR/ -type f -name \*.c)
for name in $(ls $UNIVERSAL_BENCH_DIR/ |  grep "\.c");
do
    instance=$(echo $instances | tr " " "\n" | grep $name)
    cp                                              \
        $instance.$technique.assumption_automaton   \
        $UNIVERSAL_BENCH_DIR/$name/assumption_automaton.txt
done


