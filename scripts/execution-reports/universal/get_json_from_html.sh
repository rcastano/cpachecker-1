#!/bin/bash

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

get_json_from_html $1
