To see the original CPAchecker README.txt file, please look at cpachecker_files/README.txt.

This branch contains additional files necessary to reproduce our experiments.

To reproduce the experiments end-to-end, we provide the scripts run_experiments900.sh. These scripts have not been heavily tested, please contact us if any problems should arise or for additional information.

Directory structure:
cpachecker_files
        CPAchecker
        commit 63ae8d8 corresponding to
        git-svn-id: https://svn.sosy-lab.org/software/cpachecker/trunk@23188
docker-img
        Dockerfile and scripts to be able to experiment without complicated
        setup.   
experiments
        XML files specifying BenchExec experiments.
my-programs
        SystemC and DeviceDrivers instances from SV-COMP
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

Note: When running the experiments, ignore warnings about missing property files. Specifications are set using command line options instead of the standard BenchExec mechanism, triggering the warning. This is necessary due to differences in the language supported in property files compared to CPAchecker specifications.

