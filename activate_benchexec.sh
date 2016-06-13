#!/bin/bash 

sudo mount -t cgroup cgroup /sys/fs/cgroup
sudo chmod o+wt,g+w /sys/fs/cgroup/
