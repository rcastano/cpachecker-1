
// Detects calls for which any possible extension of the trace reaching
// such method call will necessarilly satisfy the specification used
// for the original verification attempt.
// The way to detect the latter is by checking that the assumption
// automaton is in the __TRUE state.

CONTROL AUTOMATON ControlAutomatonDetectSafeCalls

INITIAL STATE Init;

STATE USEALL Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __TRUE") -> ERROR("Safe trace (reaches __TRUE state in the Assumption Automaton).");

END AUTOMATON


CONTROL AUTOMATON IngoreFalseAutomaton

INITIAL STATE Init;

STATE USEFIRST Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> STOP;
  TRUE -> GOTO Init;

END AUTOMATON
