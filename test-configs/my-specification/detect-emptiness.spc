#include ../specification/default.spc

// Detects both errors as defined in default.spc and method/function
// calls that had not been reached by a previous analysis.
// The way to detect the latter is by checking that the assumption
// automaton is in the __FALSE state.

CONTROL AUTOMATON ControlAutomatonTest

INITIAL STATE Init;

STATE USEALL Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> ERROR("Outside assumption automaton.");

END AUTOMATON
