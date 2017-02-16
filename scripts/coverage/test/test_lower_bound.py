import unittest
import StringIO
import os
import sys

script_path = os.path.dirname(os.path.realpath(__file__))

import lower_bound_from_cex

class TestCoverage(unittest.TestCase):
    aux_root = script_path + '/aux_lower_bound/'
    temp_folder = aux_root + '/temp_folder/'
    def setUp(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            # Directory might not exist
            pass
    def tearDown(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            pass

class TestFixSingleSpecSafeTrace(TestCoverage):
    expected_result = (
"""CONTROL AUTOMATON ErrorPath1

INITIAL STATE ARG0;

STATE USEFIRST ARG0 :
    MATCH "" -> GOTO ARG1;
    TRUE -> STOP;

STATE USEFIRST ARG1 :
    MATCH "int __VERIFIER_nondet_int();" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_0_1 :
    MATCH "int __VERIFIER_nondet_int();" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_1_1 :
    MATCH "int main()" -> GOTO ARG2_2_1;
STATE USEFIRST ARG2_2_1 :
    MATCH "" -> GOTO ARG2_3_1;
STATE USEFIRST ARG2_3_1 :
    MATCH "int x = __VERIFIER_nondet_int();" -> GOTO ARG2_4_1;
STATE USEFIRST ARG2_4_1 :
    MATCH "int x = __VERIFIER_nondet_int();" -> ASSUME {x == (1);} GOTO ARG2;
    TRUE -> STOP;

STATE USEFIRST ARG2 :
    MATCH "[!((x * x) > 3)]" -> GOTO LookingForReturn;
    TRUE -> STOP;

STATE USEFIRST ARG5 :
    TRUE -> STOP;

STATE USEFIRST LookingForReturn :
  MATCH EXIT -> ERROR("Found covering test case");
END AUTOMATON
""")
    def test(self):
        safe_dir = self.aux_root + '/safe_traces/'
        f_out = StringIO.StringIO()
        prune_with_assumption_automaton = False
        with open(safe_dir + 'Counterexample.1.spc') as f_in:
            lower_bound_from_cex.fix_single_spec(
                f_in,
                f_out,
                prune_with_assumption_automaton)
        self.assertMultiLineEqual(f_out.getvalue(), self.expected_result)

class TestFixSingleSpecSafeTraceWithAssumptionAutomaton(TestCoverage):
    expected_result = (
"""CONTROL AUTOMATON ErrorPath1

INITIAL STATE ARG0;

STATE USEFIRST ARG0 :
    MATCH "" -> GOTO ARG1;
    TRUE -> STOP;

STATE USEFIRST ARG1 :
    MATCH "int __VERIFIER_nondet_int();" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_0_1 :
    MATCH "int __VERIFIER_nondet_int();" -> GOTO ARG2_1_1;
STATE USEFIRST ARG2_1_1 :
    MATCH "int main()" -> GOTO ARG2_2_1;
STATE USEFIRST ARG2_2_1 :
    MATCH "" -> GOTO ARG2_3_1;
STATE USEFIRST ARG2_3_1 :
    MATCH "int x = __VERIFIER_nondet_int();" -> GOTO ARG2_4_1;
STATE USEFIRST ARG2_4_1 :
    MATCH "int x = __VERIFIER_nondet_int();" -> ASSUME {x == (1);} GOTO ARG2;
    TRUE -> STOP;

STATE USEFIRST ARG2 :
    MATCH "[!((x * x) > 3)]" -> GOTO LookingForReturn;
    TRUE -> STOP;

STATE USEFIRST ARG5 :
    TRUE -> STOP;

STATE USEFIRST LookingForReturn :
  MATCH EXIT -> ERROR("Found covering test case");
END AUTOMATON
CONTROL AUTOMATON AvoidUnexplored

INITIAL STATE Init;

STATE USEFIRST Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> STOP;
  TRUE -> GOTO Init;

END AUTOMATON
""")
    def test(self):
        safe_dir = self.aux_root + '/safe_traces/'
        f_out = StringIO.StringIO()
        prune_with_assumption_automaton = True
        with open(safe_dir + 'Counterexample.1.spc') as f_in:
            lower_bound_from_cex.fix_single_spec(
                f_in,
                f_out,
                prune_with_assumption_automaton)
        self.assertMultiLineEqual(f_out.getvalue(), self.expected_result)

class TestFixCounterexampleSpecsSafeTrace(TestCoverage):
    def test(self):
        safe_dir = self.aux_root + '/safe_traces/'
        prune_with_assumption_automaton = False
        try:
            os.makedirs(self.temp_folder)
        except:
            raise
        safe_specs = lower_bound_from_cex.fix_counterexample_specs(
            safe_dir,
            "safe",
            self.temp_folder,
            prune_with_assumption_automaton)
        self.assertEqual(len(safe_specs), 1)
        safe_spec = [s for s in safe_specs[0].split('/') if s]
        expected_path = [s for s in (self.temp_folder + 'safeCounterexample.1.spc').split('/') if s]
        self.assertEqual(safe_spec, expected_path)

class TestCollectCoverageFrontierTrace(TestCoverage):
    def test(self):
        fixed_frontier_dir = self.aux_root + '/fixed_frontier_traces/'
        all_cex = fixed_frontier_dir + 'frontierCounterexample.1.spc'
        prune_with_assumption_automaton = False
        try:
            os.makedirs(self.temp_folder)
        except:
            raise
        safe_specs = lower_bound_from_cex.fix_counterexample_specs(
            safe_dir,
            "safe",
            self.temp_folder,
            prune_with_assumption_automaton)
        self.assertEqual(len(safe_specs), 1)
        safe_spec = [s for s in safe_specs[0].split('/') if s]
        expected_path = [s for s in (self.temp_folder + 'safeCounterexample.1.spc').split('/') if s]
        self.assertEqual(safe_spec, expected_path)

if __name__ == '__main__':
    unittest.main()
