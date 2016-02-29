CONTROL AUTOMATON ControlAutomatonTest

// Considers targets every method call that occurs within a region
// already explored by a previous analysis.
// This doesn't detect assertion failures, "ERROR" labels or anything,
// it only serves the purpose of printing traces known to have
// been explored.

INITIAL STATE Init;

STATE USEALL Init :
  IS_CALL && ! CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> GOTO IsAlreadyExploredCall;

STATE USEALL IsAlreadyExploredCall :
  TRUE -> GOTO Init;
  TRUE -> ERROR("No error, trace has been explored by previous analysis.");

END AUTOMATON
