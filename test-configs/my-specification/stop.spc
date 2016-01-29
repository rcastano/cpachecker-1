#include ../specification/default.spc


// It checks only for calls to the __VERIFIER_error() functions
// and also implements some functions which usually lead to a program abort.
// It supports detecting multiple violations within one run (USEALL)
CONTROL AUTOMATON StopAutomaton

INITIAL STATE Init;

STATE USEALL Init :
  MATCH {stop($?)} -> STOP;


END AUTOMATON
