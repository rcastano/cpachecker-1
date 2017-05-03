#!/bin/bash

# Generates my-programs/unfinished_instances.set
python scripts/coverage/collect_unknown_status_instances.py \
	--result_xml ../fork/results/generate.2017-04-21_1211.results.generate-explicit-900.original.xml.bz2 \
	--set_dir ../fork/my-programs/
# To undo: 
# rm my-programs/unfinished_instances.set

# for each file listed in unfinished_instances.set:
#	creates $file_feasible_traces/[0001 to 0999]
# Also creates my-programs/generated_seeds.set with all the *_seed_*.txt
# files created.
./scripts/coverage/generate_seeds.py \
	--n 1000 \
	my-programs/unfinished_instances.set
# To undo: 
# rm my-programs/generated_seeds.set
# for file in $(find my-programs/ -name \*_feasible_*); do rm -r $file ; done

./baseline.sh
# To undo:
# for file in $(find my-programs/ -name \*output); do rm -r $file ; done
