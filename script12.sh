
echo script12.sh
./script10.sh 
benchexec --limitCores 1 --rundefinition produce-witnesses-explored-predicate-from-explicit --rundefinition produce-witnesses-explored-predicate-from-predicate --rundefinition produce-witnesses-explored-explicit-from-explicit --rundefinition produce-witnesses-explored-explicit-from-predicate --rundefinition produce-witnesses-safe-predicate-from-explicit --rundefinition produce-witnesses-safe-predicate-from-predicate --rundefinition produce-witnesses-safe-explicit-from-explicit --rundefinition produce-witnesses-safe-explicit-from-predicate --rundefinition produce-witnesses-emptiness-predicate-from-explicit --rundefinition produce-witnesses-emptiness-predicate-from-predicate --rundefinition produce-witnesses-emptiness-explicit-from-explicit --rundefinition produce-witnesses-emptiness-explicit-from-predicate test/test-sets/draft2.xml

