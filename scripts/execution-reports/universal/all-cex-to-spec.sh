#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

folder=$1
dest_folder=$2
CEX=$(ls $folder/* | grep Counterexample.[^.]*.html)
for cex in $CEX; do
    number=$(echo $cex | sed 's/Counterexample.\([^.]*\).html/\1/')
    mkdir -p $dest_folder/cex$number/
    $SCRIPTPATH/get_json_from_html.sh $cex | \
        python $SCRIPTPATH/json_to_spec.py > \
        $dest_folder/cex$number/cex.spec
done


