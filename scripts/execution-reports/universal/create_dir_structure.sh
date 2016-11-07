#!/bin/bash 

RELPATH=`dirname $0`
pushd $RELPATH > /dev/null
SCRIPTPATH=`pwd -P`
popd > /dev/null

bench_dir=$1
dest_dir=$2

for directory in $($SCRIPTPATH/find_witnesses.sh $bench_dir)
do
    timestamp=$(echo $directory | sed 's@.*/\([^/]*\)$@\1@g')
    # paths as created by BenchExec with the current xml spec
    # contain the timestamp in the innermost directory.
    # We remove the timestamp by matching whatever comes after
    # the last "/" and before the end-of-line '$'.
    dir_no_timestamp=$(echo $directory | sed 's@[^/]*$@@g')
    $SCRIPTPATH/all-cex-to-spec.sh      \
        $bench_dir/$directory           \
        $dest_dir/$timestamp/$dir_no_timestamp/
done

