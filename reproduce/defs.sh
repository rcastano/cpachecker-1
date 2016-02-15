#!/bin/bash

CPACHECKER_PATH=~/files/tools/cpachecker/fork/
time_limit=${time_limit:-"200s"}

# This is the directory where the output of CPAchecker would
# be stored when generating an assumption automaton.
output_dirname () {
  config=${2:-""}
  suffix=${3:-""}
  echo outputs/$1/outputDir$suffix/$config
}

output_dirname_extend () {
  echo extend_outputs/$(dirname $1)
}
