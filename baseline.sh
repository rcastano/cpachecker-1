#!/bin/bash

./scripts/benchmark.py \
	-o baselines_traces_files/ \
	--limitCores 1 \
	--rundefinition generate_traces \
	experiments-xml/generate_traces.xml
