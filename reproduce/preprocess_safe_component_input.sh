#!/bin/bash

# This script will create the .swapped version necessary to create the
# safe component for all files in the directory containing our instances.
for file in `find my-programs/fse12/ -type f -name \*assumption_automaton`; do
    ./reproduce/swap_false_and_true.sh $file; 
done


