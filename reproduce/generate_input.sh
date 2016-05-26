#!/bin/bash 

technique=$1
instance=$2
for witness_type in unexplored explored safe emptiness ;
do
    ./reproduce/show_paths.sh `./reproduce/largest_lexicographic.sh $instance/produce-witnesses-$witness_type-$technique`/ > paths_$witness_type.txt
    ./reproduce/stack_depth.sh paths_$witness_type.txt > input_$witness_type.txt
done

