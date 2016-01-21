#include ../specification/default.spc


// It checks only for calls to the __VERIFIER_error() functions
// and also implements some functions which usually lead to a program abort.
// It supports detecting multiple violations within one run (USEALL)
// CONTROL AUTOMATON ControlAutomatonTest
OBSERVER AUTOMATON ControlAutomatonTest

INITIAL STATE Init;

STATE USEALL Init :
  (MATCH {harness($?)} || MATCH {push($?)} || MATCH {pop($?)} || MATCH{init($?)}) && (CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") || CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == bottom")) && IS_FEASIBLE -> PRINT "called some method " PRINT EVAL(location, "functionname") BREAK; // GOTO Found;


END AUTOMATON
