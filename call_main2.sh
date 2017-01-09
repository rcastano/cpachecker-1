#!/bin/bash
export CLASSPATH=:/home/doc/files/tools/cpachecker/coverage/bin/:/home/doc/files/tools/cpachecker/coverage/cpachecker.jar:/home/doc/files/tools/cpachecker/coverage/lib/*:/home/doc/files/tools/cpachecker/coverage/lib/java/runtime/*:/home/doc/files/tools/cpachecker/coverage/bin/:/home/doc/files/tools/cpachecker/coverage/cpachecker.jar:/home/doc/files/tools/cpachecker/coverage/lib/*:/home/doc/files/tools/cpachecker/coverage/lib/java/runtime/*

# use ./test_pruning/spec.spc

java org.sosy_lab.cpachecker.cmdline.CPAMain2 $@
