#include ../AssumptionGuidingAutomaton.spc

// Detects method/function
// calls that had not been reached by a previous analysis.
// The way to detect the latter is by checking that the assumption
// automaton is in the __FALSE state.

CONTROL AUTOMATON ControlAutomatonDetectUnexploredCalls

INITIAL STATE Init;

STATE USEALL Init :
  ( MATCH { $1($?); } || MATCH { $? = $1($?); } ) 
  && CHECK(location, "functionName==$1") 
  && CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> GOTO ReachedBoundary;

STATE USEALL ReachedBoundary :
  TRUE -> ERROR("Outside assumption automaton.");

END AUTOMATON
