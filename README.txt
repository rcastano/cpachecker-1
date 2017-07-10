To see the original CPAchecker README.txt file, please look at cpachecker_files/README.txt.

This branch contains additional files necessary to reproduce our experiments.

To run a sample verification attempt that will result inconclusive and subsequently generate the corresponding Execution Report, run either of the following scripts and follow the instructions:
examples/example1/run_example.sh
examples/example2/run_example.sh

These scripts show the expected use-case of Execution Reports and the concrete steps to generate and inspect one.
The instances analyzed correspond to the examples discussed in the paper.

The example requires:
 - Python
 - ant
 - Java 8

To reproduce the experiments end-to-end, we provide the script reproduce.py. These scripts have not been heavily tested, please contact us if any problems should arise or for additional information.

The script first runs CPAchecker (1st phase) with two different configurations on all the instances indicated in 'my-programs/instances.set' and generates an Assumption Automaton for each execution that did not yield a conclusive result (either a counterexample or finished verifiying the instance).

After that, the script creates Execution Reports (2nd phase) for each of the Assumption Automata generated, again using two different configurations.

It is worth noting that we do not enforce hard time limits for the 1st phase because we need to allow CPAchecker to produce the Assumption Automaton once the soft time limit is reached.
The reproduction script is densely commented to explain the experiments step by step.

Experiments require additional configuration to support BenchExec measurements.
BenchExec documentation: https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

It is worth noting that to have reliable measurements, swap memory should be disabled in the host machine even when running the experiments using Docker.

Directory structure:
cpachecker_files
        CPAchecker
        commit 63ae8d8 corresponding to
        git-svn-id: https://svn.sosy-lab.org/software/cpachecker/trunk@23188
        + 2 backported bug-fixes
examples
        Example to show how to use the tools.
experiments
        XML files specifying BenchExec experiments.
my-programs
        SystemC and DeviceDrivers instances from SV-COMP
scripts/execution-reports
        Utility scripts to generate execution reports from inconclusive
        executions.
setup_scripts
        Scripts used to set up the system for BenchExec experiments.
        We strongly advice against running these scripts, since they might
        not be appropriate for your system. We include them to document our
        setup, but each step should be understood and manually executed only
        if necessary.
tables
        Script used to generate Figures and Tables.
test-configs
        Configurations used in the experiments.

Note 1: When running the experiments, ignore warnings about missing property files. Specifications are set using command line options instead of the standard BenchExec mechanism, triggering the warning. This is necessary due to differences in the language supported in property files compared to CPAchecker specifications.
Note 2: When running the experiments, the build step "Downloading and installing dependencies with Ivy" might take a long time, this is normal.
