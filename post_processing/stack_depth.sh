#!/bin/bash

temp_file=temp_txt.txt
cp $1 $temp_file
sed -i 's/), /),\n/g' $temp_file
sed -i 's$// $// \n$g' $temp_file
cat $temp_file
