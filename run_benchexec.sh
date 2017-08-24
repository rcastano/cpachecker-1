#!/bin/bash

echo $$ > /sys/fs/cgroup/cpuset/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/cpuacct/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/memory/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/freezer/system.slice/benchexec-cgroup.service/tasks

./scripts/benchmark.py \
	-o ../temp_benchexec_files/ \
	--rundefinition coverage_explicit_10_cex_900_secs \
	--tasks unfinished-explicit-900 \
	--limitCores 1 \
	experiment/experiment900_explicit.xml
./scripts/benchmark.py \
	-o ../temp_benchexec_files/ \
	--rundefinition coverage_predicate_10_cex_900_secs \
	--tasks unfinished-predicate-900 \
	--limitCores 1 \
	experiment/experiment900_predicate.xml
