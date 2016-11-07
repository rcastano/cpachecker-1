#!/bin/bash 

BENCH_DIR=$1
pushd $BENCH_DIR > /dev/null
find . \
    -type d     \
    -exec sh -c 'ls -1 "{}"/ | grep -q Counterexample.*.html' ';' \
    -print
popd > /dev/null
