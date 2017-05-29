#!/bin/bash

./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-predicate-900 \
	--rundefinition coverage_explicit_old_coverage_heuristic_10_cex_900_secs \
	experiments-xml/experiment900.xml
./scripts/benchmark.py \
	-o temp_benchexec_files/ \
	--limitCores 1 \
	--tasks unfinished-explicit-900 \
	--rundefinition coverage_explicit_old_coverage_heuristic_10_cex_900_secs \
	experiments-xml/experiment900.xml


