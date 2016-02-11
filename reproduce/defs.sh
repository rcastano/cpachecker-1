#!/bin/bash

CPACHECKER_PATH=~/files/tools/cpachecker/fork/
time_limit=10800s

# This is the directory where the output of CPAchecker would
# be stored when generating an assumption automaton.
output_dirname () {
  suffix=${2:-""}
  echo outputs/$1/outputDir$suffix
}

output_dirname_extend () {
  echo extend_outputs/$(dirname $1)
}
