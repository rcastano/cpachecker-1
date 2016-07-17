#!/bin/bash 

technique=$1
instance=$2
for witness_type in unexplored explored safe emptiness ;
do
    ./post_processing/show_paths.sh `./post_processing/largest_lexicographic.sh $instance/produce-witnesses-$witness_type-$technique`/ > paths_$witness_type.txt
    ./post_processing/stack_depth.sh paths_$witness_type.txt > input_$witness_type.txt
done
