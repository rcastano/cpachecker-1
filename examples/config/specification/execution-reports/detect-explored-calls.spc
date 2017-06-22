#include ../AssumptionGuidingAutomaton.spc

CONTROL AUTOMATON ControlAutomatonDetectExploredCalls

// Considers targets every method call that occurs within a region
// already explored by a previous analysis.
// This doesn't detect assertion failures, "ERROR" labels or anything,
// it only serves the purpose of printing traces known to have
// been explored.

INITIAL STATE Init;

STATE USEALL Init :
  ( MATCH { $1($?); } || MATCH { $? = $1($?); } ) 
  && CHECK(location, "functionName==$1") 
  && ! CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> GOTO IsAlreadyExploredCall;

STATE USEALL IsAlreadyExploredCall :
  TRUE -> GOTO Init;
  TRUE -> ERROR("Not an error, trace has been explored by previous analysis.");

END AUTOMATON