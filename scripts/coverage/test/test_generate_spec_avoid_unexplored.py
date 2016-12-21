import unittest
import StringIO
import os
import sys

script_path = os.path.dirname(os.path.realpath(__file__))

sys.path.insert(0, script_path + '../')
import generate_coverage_spec


class TestAvoidUnexploredSpecGeneration(unittest.TestCase):
    expected_results = (
"""CONTROL AUTOMATON AvoidUnexplored

INITIAL STATE Init;

STATE USEFIRST Init :
  CHECK(AutomatonAnalysis_AssumptionAutomaton, "state == __FALSE") -> STOP;
  TRUE -> GOTO Init;

END AUTOMATON
""")
    def test(self):
        f = StringIO.StringIO()
        generate_coverage_spec.avoid_unexplored_spec(f)
        self.assertMultiLineEqual(f.getvalue(), self.expected_results)


if __name__ == '__main__':
    unittest.main()
