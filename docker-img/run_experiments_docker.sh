#!/bin/bash

pushd $(dirname $0) > /dev/null
DOCKERIMG_DIR=`pwd -P`
popd > /dev/null

rm -rf $DOCKERIMG_DIR/clean-repo
git clone $DOCKERIMG_DIR/../ clean-repo
cd $DOCKERIMG_DIR/clean-repo
rm -rf $DOCKERIMG_DIR/clean-repo/.git

cd $DOCKERIMG_DIR
docker build . -t experiments-execution-reports
docker run \
    -v /sys/fs/cgroup:/sys/fs/cgroup:rw \
    --name experiments-container \
    experiments-execution-reports \
    /home/benchs/run_experiments900.sh
#   Optionally, change to /home/benchs/run_experiments900_until_first.sh
#   to instead run until first counterexample is produced.
docker commit experiments-container finished-experiments-image
