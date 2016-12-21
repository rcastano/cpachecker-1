import unittest
import StringIO
import os
import sys

script_path = os.path.dirname(os.path.realpath(__file__))

import generate_coverage_spec


class TestCoverLinesSpecGeneration(unittest.TestCase):
    expected_results = (
"""CONTROL AUTOMATON CoverageAutomaton

INITIAL STATE State0;

STATE USEFIRST State0:
  (
  CHECK("line==1") ||
  CHECK("line==3") ||
  CHECK("line==5") ||
  FALSE) -> GOTO WaitForExit;

STATE USEFIRST WaitForExit:
  MATCH EXIT -> ERROR("Found covering test case");

END AUTOMATON
""")
    def test(self):
        f = StringIO.StringIO()
        lines = [1, 3, 5]
        generate_coverage_spec.gen_spec(f, lines)
        self.assertMultiLineEqual(f.getvalue(), self.expected_results)


if __name__ == '__main__':
    unittest.main()
