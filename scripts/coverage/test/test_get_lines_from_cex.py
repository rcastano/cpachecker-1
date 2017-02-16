import unittest
import StringIO
import os
import sys

script_path = os.path.dirname(os.path.realpath(__file__))

import get_lines_from_cex

class TestGetLines(unittest.TestCase):
    temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'

    def setUp(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            # Directory might not exist, ignore
            pass

    def tearDown(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            # Directory might not exist
            pass

class TestGetLinesInIsolation(TestGetLines):
    def test(self):
        res = get_lines_from_cex.get_lines_from_cex(
            script_path + '/aux_get_lines_from_cex/Counterexample.1.coverage-info',
            self.temp_folder
        )
        self.assertEqual(set([2,7]), res)

class TestProcessCounterexamplesSingleCex(TestGetLines):
    def test(self):
        res = get_lines_from_cex.process_counterexamples(
            script_path + '/aux_get_lines_from_cex/lines_in_cex.c',
            script_path + '/aux_get_lines_from_cex/',
            only_cover_prefix=False,
            temp_folder=self.temp_folder
        )
        self.assertEqual(set([2,7]), res)

class TestProcessCounterexamplesMultipleCex(TestGetLines):
    def test(self):
        res = get_lines_from_cex.process_counterexamples(
            script_path + '/aux_get_lines_from_cex/multiple_cex/multiple_cex.c',
            script_path + '/aux_get_lines_from_cex/multiple_cex',
            only_cover_prefix=False,
            temp_folder=self.temp_folder
        )
        self.assertEqual(set([10,11,12,16,17,18,20,21]), res)

if __name__ == '__main__':
    unittest.main()
