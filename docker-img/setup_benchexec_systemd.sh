#!/bin/bash 

# Following instructions for "Setting up Cgroups on Systems with systemd"
# https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

SCRIPT_DIR=$(dirname $0)
echo "Performing copy"
cp /etc/systemd/system.conf /etc/systemd/system.conf.backup.`date +"%Y-%m-%d_%H-%M-%S"`
echo JoinControllers=cpuset,cpuacct,memory,freezer >> /etc/systemd/system.conf

# Not necessary within Docker, running as root.
# groupadd benchexec
# usermod -aG benchexec $USER

# Not necessary within Docker
# update-initramfs -u
# echo "The changes require a system restart"
