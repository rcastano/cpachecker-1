#!/bin/bash 

BENCH_DIR=$1
cd $BENCH_DIR
find . \
    -type d     \
    -exec sh -c 'ls -1 "{}"/ | grep -q Counterexample.*.html' ';' \
    -print
