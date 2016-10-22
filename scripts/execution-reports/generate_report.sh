#!/bin/bash

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null
CPACHECKER_DIR=$SCRIPTPATH/../../cpachecker_files/
ROOT_DIR=$SCRIPTPATH/../../

CONFIG_TO_BE_USED=""
USED_CONFIG_FILE=""

function show_help {
    echo This script generates an Execution Report from an incomplete execution
    echo of CPAchecker.
    echo "CPAchecker's Execution Reports enable users to observe which behaviors were"
    echo analyzed by CPAchecker during the interrupted verification attempt.
    echo Execution Reports contain three components:
    echo "  - Explored witnesses: Traces which were explored by CPAchecker and"
    echo "    are known to satisfy the original specification up to the length of the"
    echo "    trace. (There are no guarantees for extensions of these traces, though)"
    echo "  - Unexplored witnesses: Traces which were *not* explored by CPAchecker."
    echo "    These traces should be used as a hint to understand whether relevant"
    echo "    behaviors remain unexplored. These can also indicate how deep was"
    echo "    the exploration."
    echo "  - Safe witnesses: Traces which are known to satisfy the original specification"
    echo "    but are also guaranteed to satisfy the specification from that point on."
    echo
    echo The input for this script is the UsedConfiguration.properties file
    echo produced by CPAchecker and a configuration to run CPAchecker with.
    echo Bear in mind that this script overrides the specification used in the 
    echo chosen configuration.
    echo
    echo
    echo For the formal definition of Execution Reports, please refer to the
    echo following tech report: 
    echo Model Checker Execution Reports:
    echo https://arxiv.org/pdf/1607.06857.pdf
    echo
    echo Usage: 
    echo $0 \\
    echo "        -used_config_file some_path/UsedConfiguration.properties \\"
    echo "        -config config/some_configuration.properties"
    echo 
    echo "A temporary directory is created (temp_exec_report) or emptied"
    echo "within the directory where the UsedConfiguration.properties file"
    echo "is located."
    echo "" 
    echo The following options are extracted from the file indicated by the
    echo flag used_config_file:
    echo "  - assumption automaton:  assumptions.automatonFile"
    echo "  - program:               analysis.programNames (should be only one)"
    echo "  - preprocess?:           parser.usePreprocessor (false by default)"
}

function abort_with_message {
    echo $1
    echo Aborting.
    exit 1
}

while [[ $# -gt 0 ]]
do

key="$1"

case $key in
    -used_config_file)
    USED_CONFIG_FILE="$2"
    shift
    ;;
    -config)
    CONFIG_TO_BE_USED="$2"
    shift
    ;;
    *)
    show_help
    M="Unrecognized option: "$key
    abort_with_message $M 
    ;;
esac
shift
done

if [[ -z $USED_CONFIG_FILE ]] || [[ -z $CONFIG_TO_BE_USED ]] ; then
    show_help
    abort_with_message "Please indicate both -config and -used_config_file."
fi

OUTPUT_DIR=$(dirname $USED_CONFIG_FILE)
PROGRAM_NAME=$(grep "analysis.programNames" $USED_CONFIG_FILE | sed 's/analysis.programNames = \(.*\)/\1/')
if [[ -z $PROGRAM_NAME ]] ; then
    abort_with_message "Error parsing program name."
fi

CONTAINS_SEVERAL_FILES=$(echo $PROGRAM_NAME | grep ",")
if [[ ! -z $CONTAINS_SEVERAL_FILES ]] ; then
    abort_with_message "Several program names. Unsupported feature."
fi

PREPROCESS=$(grep "parser.usePreprocessor" $USED_CONFIG_FILE | sed 's/parser.usePreprocessor = \(.*\)/\1/')
if [[ -z $PREPROCESS ]] ; then
    PREPROCESS="false"
else
    if [[ $PREPROCESS != "true" ]] ; then
        abort_with_message "Error parsing preprocess flag."
    fi
fi


ASSUMPTION_AUTOMATON_FILE=$OUTPUT_DIR/$(grep "assumptions.automatonFile" $USED_CONFIG_FILE | sed 's/assumptions.automatonFile = \(.*\)/\1/')

if [[ -z $ASSUMPTION_AUTOMATON_FILE ]] ; then
    abort_with_message "Error parsing Assumption Automaton location."
fi



REPORT_DIR=$OUTPUT_DIR/temp_exec_report
mkdir $REPORT_DIR 2> /dev/null 
rm -r $REPORT_DIR/* 2> /dev/null 

mkdir $REPORT_DIR/unexplored
mkdir $REPORT_DIR/explored
mkdir $REPORT_DIR/safe
PATHS_DIR=$REPORT_DIR/paths
mkdir $PATHS_DIR

CPACHECKER=$CPACHECKER_DIR/scripts/cpa.sh

function get_json_from_html {
    CEX=$1
    MATCH=$(echo $CEX | grep Counterexample)
    if [ -z $MATCH ]; then
        echo Counterexample file name does not contain 'Counterexample'.
        echo This check is performed to avoid using the script with older
        echo versions of CPAchecker.
        echo Aborting
        exit 1
    fi

    grep "var errorPathData =" $CEX | sed 's/var errorPathData = \(.*\);/\1/g'
}

function show_paths {
    folder=$1
    COUNTEREXAMPLE_FILES=`ls $folder/* | grep Counterexample.[^.]*.html`
    mkdir json_temp

    for file in $COUNTEREXAMPLE_FILES; do 
      get_json_from_html $file | python $SCRIPTPATH/json_to_witness.py
      echo -n "  >>> File: "
      echo $file
    done

    rm -r json_temp
}

for witness_type in unexplored explored safe;
do
    SPEC=$ASSUMPTION_AUTOMATON_FILE,$ROOT_DIR/examples/config/specification/execution-reports/detect-$witness_type-calls.spc
    echo $CPACHECKER \
        -config $CONFIG_TO_BE_USED \
        -setprop specification=$SPEC \
        -setprop parser.usePreprocessor=$PREPROCESS \
        -setprop analysis.stopAfterError=false \
        -outputpath $REPORT_DIR/$witness_type/ \
        $PROGRAM_NAME # > /dev/null 2>&1
    $CPACHECKER \
        -config $CONFIG_TO_BE_USED \
        -setprop specification=$SPEC \
        -setprop parser.usePreprocessor=$PREPROCESS \
        -setprop analysis.stopAfterError=false \
        -outputpath $REPORT_DIR/$witness_type/ \
        $PROGRAM_NAME # > /dev/null 2>&1

    show_paths $REPORT_DIR/$witness_type/ > $REPORT_DIR/witnesses_$witness_type.txt 
done

echo The components of the execution report are the following files:
echo $REPORT_DIR/witnesses_explored.txt
echo $REPORT_DIR/witnesses_unexplored.txt
echo $REPORT_DIR/witnesses_safe.txt
echo
echo The following script allows easier visualization and manipulation of
echo the witnesses.
echo python $RELPATH/view_witnesses.py $REPORT_DIR/witnesses_unexplored.txt
