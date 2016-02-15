#!/bin/bash
DIR=`dirname "$(readlink -f "$0")"`
for t in {20..200..20}
do
     export time_limit="$t"s
     ./reproduce/generate-cmc.sh my-programs/drivers64+mem_slave_tlm.1/mem_slave_tlm.1+loop.BUG.c
     ./reproduce/generate-cmc.sh my-programs/drivers64+mem_slave_tlm.1/mem_slave_tlm.1+keyspan_remote.BUG.c
done

