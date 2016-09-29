#!/bin/bash 

# Following instructions for "Setting up Cgroups on Systems with systemd"
# https://github.com/sosy-lab/benchexec/blob/master/doc/INSTALL.md

if [ $EUID -ne 0 ]; then
    echo "This script requires administrative permissions"
    echo "CAUTION! Run only at your own script after understanding the effects"
fi

ACTUAL_USER=$USER

cp /etc/systemd/system.conf /etc/systemd/system.conf.backup.`date +"%Y-%m-%d_%H-%M-%S"`
echo JoinControllers=cpuset,cpuacct,memory,freezer >> /etc/systemd/system.conf
mv config_benchexec_systemd/benchexec-cgroup.service /etc/systemd/system/

groupadd benchexec
adduser $ACTUAL_USER benchexec

update-initramfs -u
echo "The changes require a system restart"
exit
