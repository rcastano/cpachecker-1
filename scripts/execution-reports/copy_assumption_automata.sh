#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

INSTANCES_DIR=$1
UNIVERSAL_BENCH_DIR=$2

technique=$(find $UNIVERSAL_BENCH_DIR/ -type d -name \*cex\* | sed 's@.*from-\([^/]*\).*@\1@' | sort | uniq)
if [ $technique -ne "explicit" ]
then
    if [ $technique -ne "predicate" ]
    then
        echo "Aborting! Error parsing technique."
    fi
fi

echo $technique >> $UNIVERSAL_BENCH_DIR/technique.txt

instances=$(find $INSTANCES_DIR/ -type f -name \*.c)
for name in $(ls $UNIVERSAL_BENCH_DIR/);
do
    instance=$(echo $instances | tr " " "\n" | grep $name)
    cp                                              \
        $instance.$technique.assumption_automaton   \
        $UNIVERSAL_BENCH_DIR/$name/$name.assumption_automaton
done
