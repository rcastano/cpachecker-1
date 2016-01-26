#!/bin/bash

CPACHECKER_PATH=~/files/tools/cpachecker/fork/
time_limit=20s

# This is the directory where the output of CPAchecker would
# be stored when generating an assumption automaton.
output_dirname () {
  echo outputs/$1/outputDir$time_limit
}
