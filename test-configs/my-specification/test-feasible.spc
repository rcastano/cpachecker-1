#include ../specification/default.spc


// It checks only for calls to the __VERIFIER_error() functions
// and also implements some functions which usually lead to a program abort.
// It supports detecting multiple violations within one run (USEALL)
CONTROL AUTOMATON ControlAutomatonTest
// OBSERVER AUTOMATON ControlAutomatonTest

INITIAL STATE Init;

STATE USEALL Init :
  IS_CALL && CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") && IS_FEASIBLE -> PRINT "Transition matched, printing calls in the trace: " PRINT_CALLS STOP; // GOTO Found;


END AUTOMATON
