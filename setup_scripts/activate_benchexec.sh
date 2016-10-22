#!/bin/bash 

# Following instructions for "Setting up Cgroups on Systems with systemd"
# https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

sudo mount -t cgroup cgroup /sys/fs/cgroup
sudo chmod o+wt,g+w /sys/fs/cgroup/
