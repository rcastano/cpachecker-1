#!/bin/bash 

BENCH_DIR=$1
cd $BENCH_DIR
find $BENCH_DIR \
    -type d     \
    -exec sh -c 'ls -1 "{}"/ | grep -q Counterexample.*.html' ';' \
    -print
