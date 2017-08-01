#!/bin/bash

echo $$ > /sys/fs/cgroup/cpuset/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/cpuacct/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/memory/system.slice/benchexec-cgroup.service/tasks
echo $$ > /sys/fs/cgroup/freezer/system.slice/benchexec-cgroup.service/tasks

./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-predicate-900 \
	--rundefinition coverage_explicit_same_traversal_10_cex_900_secs \
	experiments-xml/experiment900.xml
./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-explicit-900 \
	--rundefinition coverage_explicit_same_traversal_10_cex_900_secs \
	experiments-xml/experiment900.xml

./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-predicate-900 \
	--rundefinition coverage_explicit_coverage_heuristic_10_cex_900_secs \
	experiments-xml/experiment900.xml
./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-explicit-900 \
	--rundefinition coverage_explicit_coverage_heuristic_10_cex_900_secs \
	experiments-xml/experiment900.xml

