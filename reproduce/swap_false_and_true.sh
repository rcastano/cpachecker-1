#!/bin/bash

file=$1
# This is all a quick and dirty hack.
# I believe there might be some optimizations to be made, by analyzing
# graph reachability (that is, not actual reachability in the original
# program) to the nodes false. The only tricky thing is to take special
# care of conditions (syntax: "[condition]"), because in some cases
# when there is branch branching and one of the branches has been
# explored, the original condition might be removed and the "default"
# GOTO __TRUE might be left.
head -n 9 $file > true_false_defs.txt
tail -n +10 $file > chopped_file.txt
sed -i 's/__FALSE/__new_true/g' chopped_file.txt
sed -i 's/__TRUE/__new_false/g' chopped_file.txt
sed -i 's/__new_false/__FALSE/g' chopped_file.txt
sed -i 's/__new_true/__TRUE/g' chopped_file.txt
cp $file $file.backup
mv true_false_defs.txt $file.swapped
cat chopped_file.txt >> $file.swapped
rm chopped_file.txt


