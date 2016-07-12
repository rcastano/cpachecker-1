#!/bin/bash
folder=$1
for file in `ls $folder/* | grep ErrorPath.[^.]*.txt`; do 
  echo -n `tail -n 1 $file`;
  echo -n "  >>> File: ";
  echo $file;
done
 
