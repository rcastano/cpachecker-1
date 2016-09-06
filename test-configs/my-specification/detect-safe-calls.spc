#include ../specification/default.spc

// Detects both errors as defined in default.spc and method/function
// calls that had not been reached by a previous analysis.
// The way to detect the latter is by checking that the assumption
// automaton is in the __FALSE state.

CONTROL AUTOMATON ControlAutomatonTest

INITIAL STATE Init;

STATE USEALL Init :
  ( MATCH { $1($?); } || MATCH { $? = $1($?); } ) 
  && CHECK(location, "functionName==$1") 
  && CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __TRUE") -> GOTO ReachedBoundary;

STATE USEALL ReachedBoundary :
  TRUE -> ERROR("Outside assumption automaton.");

END AUTOMATON


CONTROL AUTOMATON IngoreFalseAutomaton

INITIAL STATE Init;

STATE USEFIRST Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> STOP;
  TRUE -> GOTO Init;

END AUTOMATON
