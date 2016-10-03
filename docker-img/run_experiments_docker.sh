#!/bin/bash

docker build . -t experiments-execution-reports
docker run \
    -v /sys/fs/cgroup:/sys/fs/cgroup:rw \
    --name experiments-container \
    experiments-execution-reports \
    /home/benchs/run_experiments900.sh
