#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null
CPACHECKER_DIR=$SCRIPTPATH/../../cpachecker_files/
ROOT_DIR=$SCRIPTPATH/../../

echo "Cleaning up old output"
rm -r $SCRIPTPATH/output 2> /dev/null
rm $SCRIPTPATH/incomplete_verification.out 2> /dev/null
rm $SCRIPTPATH/generate_report.out 2> /dev/null

cd $CPACHECKER_DIR
echo "About to build CPAchecker."
echo "Press ENTER to continue or Ctrl+C to abort."
read a
ant
cd $SCRIPTPATH


echo "Contents of $RELPATH/bmc.c:"
cat -n $SCRIPTPATH/bmc.c
echo ""
echo ""
echo "About to run CPAchecker using a BMC configuration with a loop bound"
echo "of 1 iteration with the following file as input:"
echo $RELPATH/bmc.c
echo ""
echo "Press ENTER to continue or Ctrl+C to abort."
read a
$CPACHECKER_DIR/scripts/cpa.sh              \
    -config $SCRIPTPATH/bmc-cmc.properties  \
    -outputpath $SCRIPTPATH/output          \
    $SCRIPTPATH/bmc.c > $SCRIPTPATH/incomplete_verification.out 2>&1

echo "Last 5 lines of output:"
echo "<<<<<<<<<<<<<<<<<<<<<<<"
tail -n 5 $SCRIPTPATH/incomplete_verification.out
echo ">>>>>>>>>>>>>>>>>>>>>>>"

echo ""
echo ""
echo "CPAchecker finished running and should not have found any errors nor"
echo "proved the instance safe. Near the end of the output, you should see"
echo "the following output:"
echo "'Verification result: UNKNOWN'"

echo ""
echo ""
echo "About to generate an Execution Report for the inconclusive execution"
echo "of CPAchecker"
echo "Press ENTER to continue or Ctrl+C to abort."
read a

$ROOT_DIR/scripts/execution-reports/generate_report.sh                  \
    -used_config_file $SCRIPTPATH/output/UsedConfiguration.properties   \
    -config $ROOT_DIR/test-configs/predicateAnalysis.properties         \
    > $SCRIPTPATH/generate_report.out 2>&1

echo "Last 5 lines of output:"
echo "<<<<<<<<<<<<<<<<<<<<<<<"
tail -n 5 $SCRIPTPATH/generate_report.out
echo ">>>>>>>>>>>>>>>>>>>>>>>"

echo ""
echo ""
echo "Execution Report Generation has finished."
echo "About to run the script shown above, to inspect the Unexplored component"
echo "of the Execution Report produced."
echo "Press ENTER to continue or Ctrl+C to abort."
read a

$ROOT_DIR/scripts/execution-reports/view_witnesses_cmd.py $SCRIPTPATH/output/temp_exec_report/witnesses_unexplored.txt


