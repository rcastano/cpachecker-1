#!/bin/bash 

# Following instructions for "Setting up Cgroups on Systems with systemd"
# https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

systemctl enable benchexec-cgroup
systemctl start benchexec-cgroup
chmod o+wt '/sys/fs/cgroup/cpuset,cpuacct,memory,freezer/'
swapoff -a
echo "To make sure swap is not used nor incorrectly reported"
echo "run 'sudo systemctl mask <unit>' for each file listed below:"

systemctl --type swap --all list-unit-files
