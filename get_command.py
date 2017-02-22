# usage 
# Notice double quotation marks!!
# echo "['/home/rcastano/files/tools/cpachecker/coverage/scripts/coverage/../..//scripts/cpa.sh', '-sv-comp16', '-outputpath', '/home/rcastano/files/tools/cpachecker/coverage/scripts/coverage/temp_folder_collect_coverage/', '-setprop', 'specification=/home/rcastano/files/tools/cpachecker/fork/my-programs/fse12/systemc/toy1_BUG.c.predicate.assumption_automaton,/home/rcastano/files/tools/cpachecker/coverage/scripts/coverage/fixed_specs/frontierCounterexample.9.spc', '-setprop', 'analysis.stopAfterError=true', '-setprop', 'output.disable=false', '/home/rcastano/files/tools/cpachecker/fork/my-programs/fse12/systemc/toy1_BUG.c']" | python get_command.py

command = input()
# print command

print "#!/bin/bash"
print "" 
for c in command[:-1]:
    print c + " \\"
print command[-1]


