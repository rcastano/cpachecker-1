#!/bin/bash 

# Following instructions for "Setting up Cgroups on Systems with systemd"
# https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

systemctl enable benchexec-cgroup
systemctl start benchexec-cgroup
chmod o+wt '/sys/fs/cgroup/cpuset,cpuacct,memory,freezer/'
swapoff -a
