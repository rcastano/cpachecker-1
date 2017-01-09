#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

export CLASSPATH=:`pwd`/bin/:`pwd`/cpachecker.jar:`pwd`/lib/*:`pwd`/lib/java/runtime/*:`pwd`/bin/:`pwd`/cpachecker.jar:`pwd`/lib/*:`pwd`/lib/java/runtime/*

# 1st param: instance (C file)
# 2nd param: Assumption Automaton file.

java org.sosy_lab.cpachecker.cmdline.CPAMain2 $@
