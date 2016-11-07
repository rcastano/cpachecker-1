#!/bin/bash 

BENCH_DIR=$1
find $BENCH_DIR \
    -type d     \
    -exec sh -c 'ls -1 "{}"/ | grep -q Counterexample.*.html' ';' \
    -print
