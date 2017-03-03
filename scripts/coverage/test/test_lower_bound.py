import unittest
import StringIO
import os
import sys

script_path = os.path.dirname(os.path.realpath(__file__))

import lower_bound_from_cex

class TestLowerBound(unittest.TestCase):
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

class TestFixSingleSpecSafeTrace(TestLowerBound):
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
    MATCH "int x = __VERIFIER_nondet_int();" ->  GOTO ARG2;
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

class TestFixSingleSpecSafeTraceWithAssumptionAutomaton(TestLowerBound):
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
    MATCH "int x = __VERIFIER_nondet_int();" ->  GOTO ARG2;
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

class TestFixCounterexampleSpecsSafeTrace(TestLowerBound):
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

class TestCollectCoverageFrontierTrace(TestLowerBound):
    def test(self):
        fixed_frontier_dir = self.aux_root + '/fixed_frontier_traces/'
        frontier_specs = [fixed_frontier_dir + 'frontierCounterexample.1.spc']
        only_cover_prefix = True
        prune_with_assumption_automaton = False
        assumption_automaton_file = None
        lines_to_cover = set([3,4,5,6,7,8,9,10,14,15,18])
        instance_filename = self.aux_root + '/test1.c'
        time_limit_in_secs = None
        stop_after_error = True
        (covered_lines, not_covered_lines) = lower_bound_from_cex.collect_coverage(
            frontier_specs,
            only_cover_prefix,
            prune_with_assumption_automaton,
            assumption_automaton_file,
            lines_to_cover,
            instance_filename,
            time_limit_in_secs,
            stop_after_error,
            temp_folder=self.temp_folder)
        self.assertEqual(covered_lines, set([3]))
        self.assertEqual(not_covered_lines, set([4,5,6,7,8,9,10,14,15,18]))

class TestCollectCoverageSafeTrace(TestLowerBound):
    def test(self):
        fixed_frontier_dir = self.aux_root + '/fixed_safe_traces/'
        frontier_specs = [fixed_frontier_dir + 'safeCounterexample.1.spc']
        only_cover_prefix = False
        prune_with_assumption_automaton = False
        assumption_automaton_file = None
        lines_to_cover = set([3,4,5,6,7,8,9,10,14,15,18])
        instance_filename = self.aux_root + '/test1.c'
        time_limit_in_secs = None
        stop_after_error = True
        (covered_lines, not_covered_lines) = lower_bound_from_cex.collect_coverage(
            frontier_specs,
            only_cover_prefix,
            prune_with_assumption_automaton,
            assumption_automaton_file,
            lines_to_cover,
            instance_filename,
            time_limit_in_secs,
            stop_after_error,
            temp_folder=self.temp_folder)
        self.assertEqual(covered_lines, set([3,4,14,15,18]))
        self.assertEqual(not_covered_lines, set([5,6,7,8,9,10]))

class TestCollectCoverageSafeTracePruningWithAutomaton(TestLowerBound):
    def test(self):
        fixed_frontier_dir = self.aux_root + '/fixed_safe_traces/'
        frontier_specs = [fixed_frontier_dir + 'safeCounterexample.1.spc']
        only_cover_prefix = False
        prune_with_assumption_automaton = True
        assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        lines_to_cover = set([3,4,5,6,7,8,9,10,14,15,18])
        instance_filename = self.aux_root + '/test1.c'
        time_limit_in_secs = None
        stop_after_error = True
        (covered_lines, not_covered_lines) = lower_bound_from_cex.collect_coverage(
            frontier_specs,
            only_cover_prefix,
            prune_with_assumption_automaton,
            assumption_automaton_file,
            lines_to_cover,
            instance_filename,
            time_limit_in_secs,
            stop_after_error,
            temp_folder=self.temp_folder)
        self.assertEqual(covered_lines, set([3,4,14,15,18]))
        self.assertEqual(not_covered_lines, set([5,6,7,8,9,10]))

from contextlib import contextmanager
@contextmanager
def captured_output():
    new_out, new_err = StringIO.StringIO(), StringIO.StringIO()
    old_out, old_err = sys.stdout, sys.stderr
    try:
        sys.stdout, sys.stderr = new_out, new_err
        yield sys.stdout, sys.stderr
    finally:
        sys.stdout, sys.stderr = old_out, old_err

class TestLowerBoundIntegration(TestLowerBound):
    class Object:
        pass

class TestLowerBoundIntegrationOnlySafe(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        args.coverage_file = self.aux_root + '/coverage.info'
        args.assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        args.instance_filename = self.aux_root + '/test1.c'
        args.safe_traces_dir = self.aux_root + '/safe_traces/'
        args.used_config_file = None
        args.frontier_traces_dir = None
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args)
        
        output = out.getvalue().strip()
        self.assertIn("Total lines to cover: 11", output)
        self.assertIn("Total lines covered: 5", output)

class TestLowerBoundIntegrationSafeAndEmptyFrontier(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        args.coverage_file = self.aux_root + '/coverage.info'
        args.assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        args.instance_filename = self.aux_root + '/test1.c'
        args.safe_traces_dir = self.aux_root + '/safe_traces/'
        args.used_config_file = None
        args.frontier_traces_dir = self.aux_root + '/empty_dir/'
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args)
        
        output = out.getvalue().strip()
        self.assertIn("Total lines to cover: 11", output)
        self.assertIn("Total lines covered: 5", output)

class TestLowerBoundIntegrationOnlyFrontier(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        args.coverage_file = self.aux_root + '/coverage.info'
        args.assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        args.instance_filename = self.aux_root + '/test1.c'
        args.frontier_traces_dir = self.aux_root + '/frontier_traces/'
        args.used_config_file = None
        args.safe_traces_dir = None
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args)
        
        output = out.getvalue().strip()
        self.assertIn("Total lines to cover: 11", output)
        self.assertIn("Total lines covered: 1", output)

class TestLowerBoundIntegrationFrontierAndEmptySafe(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        args.coverage_file = self.aux_root + '/coverage.info'
        args.assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        args.instance_filename = self.aux_root + '/test1.c'
        args.frontier_traces_dir = self.aux_root + '/frontier_traces/'
        args.used_config_file = None
        args.safe_traces_dir = self.aux_root + '/empty_dir/'
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args)
        
        output = out.getvalue().strip()
        self.assertIn("Total lines to cover: 11", output)
        self.assertIn("Total lines covered: 1", output)

class TestLowerBoundIntegrationFrontierAndSafe(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        args.coverage_file = self.aux_root + '/coverage.info'
        args.assumption_automaton_file = self.aux_root + '/assumption_automaton.txt'
        args.instance_filename = self.aux_root + '/test1.c'
        args.frontier_traces_dir = self.aux_root + '/frontier_traces/'
        args.used_config_file = None
        args.safe_traces_dir = self.aux_root + '/safe_traces/'
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args)
        
        output = out.getvalue().strip()
        self.assertIn("Total lines to cover: 11", output)
        self.assertIn("Total lines covered: 5", output)

class TestLowerBoundIntegrationLoops(TestLowerBoundIntegration):
    def test(self):
        args = TestLowerBoundIntegration.Object()
        test_root = self.aux_root + '/loops'
        args.coverage_file = test_root + '/coverage.info'
        args.assumption_automaton_file = test_root + '/assumption_automaton.txt'
        args.instance_filename = test_root + '/test1.c'
        args.frontier_traces_dir = test_root + '/frontier_traces/'
        args.used_config_file = None
        args.safe_traces_dir = test_root + '/safe_traces/'
        args.time_limit_in_secs = None

        with captured_output() as (out, err):
            lower_bound_from_cex.main(args, out)
        
        output = out.getvalue().strip()
        self.assertIn("<Collected coverage> Total # of lines to cover: 11", output)
        self.assertIn("<Collected coverage> Covered with safe traces alone: 8", output)
        self.assertIn("<Collected coverage> Covered with safe or frontier traces (prefix semantics): 10", output)

if __name__ == '__main__':
    unittest.main()
