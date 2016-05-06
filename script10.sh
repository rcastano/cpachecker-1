echo script10.sh
benchexec --limitCores 1 --rundefinition produce-witnesses-unexplored-predicate-from-explicit --rundefinition produce-witnesses-unexplored-predicate-from-predicate --rundefinition produce-witnesses-unexplored-explicit-from-explicit --rundefinition produce-witnesses-unexplored-explicit-from-predicate test/test-sets/draft.xml
