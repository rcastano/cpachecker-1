#!/bin/bash
temp_file=temp_txt.txt
rm $temp_file
if [ -t 0 ]; then
    cp $1 $temp_file
else
    while read -r line ; do
       echo $line >> temp_txt.txt 
    done
fi

sed -i 's/), /),\n/g' $temp_file
sed -i 's$// $// \n$g' $temp_file
cat $temp_file
