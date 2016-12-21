import unittest
import StringIO
import os
import sys

from sets import Set

script_path = os.path.dirname(os.path.realpath(__file__))

import get_lines_from_cex

class TestGetLines(unittest.TestCase):
    temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'

class TestGetLinesInIsolation(TestGetLines):
    def test(self):
        res = get_lines_from_cex.get_lines_from_cex(
            script_path + '/aux_get_lines_from_cex/lines_in_cex.c',
            script_path + '/aux_get_lines_from_cex/Counterexample.1.spc',
            self.temp_folder
        )
        self.assertEqual(Set([2,7]), res)

class TestProcessCounterexamplesSingleCex(TestGetLines):
    def test(self):
        res = get_lines_from_cex.process_counterexamples(
            script_path + '/aux_get_lines_from_cex/lines_in_cex.c',
            script_path + '/aux_get_lines_from_cex/',
            self.temp_folder
        )
        self.assertEqual(Set([2,7]), res)

class TestProcessCounterexamplesMultipleCex(TestGetLines):
    def test(self):
        res = get_lines_from_cex.process_counterexamples(
            script_path + '/aux_get_lines_from_cex/multiple_cex/multiple_cex.c',
            script_path + '/aux_get_lines_from_cex/multiple_cex',
            self.temp_folder
        )
        self.assertEqual(Set([10,11,12,16,17,18,20,21]), res)

if __name__ == '__main__':
    unittest.main()
