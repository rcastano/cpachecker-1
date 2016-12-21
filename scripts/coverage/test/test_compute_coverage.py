import unittest
import StringIO
import os
import sys

from sets import Set

script_path = os.path.dirname(os.path.realpath(__file__))

import compute_coverage

class TestCoverage(unittest.TestCase):
    temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'
    def setUp(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            # Directory might not exist
            pass
#        self.temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'
#        os.makedirs(self.temp_folder)
#
    def tearDown(self):
        import shutil
        try:
            shutil.rmtree(self.temp_folder)
        except:
            # Directory might not exist
            pass

class TestCoverageSomeReachableStoppingAfterError(TestCoverage):
    stop_after_error = True
    def test(self):
        lines_to_cover = Set([2,3,10,11,12,13,15,16,17,18,20,21,24])

        (lines_covered, lines_not_covered) = compute_coverage.compute_coverage(
            script_path + '/aux_get_lines_from_cex/multiple_cex/tweakedAA.txt',
            lines_to_cover,
            script_path + '/aux_get_lines_from_cex/multiple_cex/multiple_cex.c',
            self.stop_after_error,
            self.temp_folder
        )
        self.assertEqual(lines_covered, Set([10,11,12,16,17,18,20,21]))
        self.assertEqual(lines_covered.union(lines_not_covered), lines_to_cover)
        self.assertEqual(lines_covered.intersection(lines_not_covered), Set())

class TestCoverageSomeReachableFindingMultipleCex(TestCoverageSomeReachableStoppingAfterError):
    stop_after_error = False

class TestCoverageUnreachable(TestCoverage):
    def test(self):
        lines_to_cover = Set([2,3,10,11,12,13,14,16,19,20,22])
        (lines_covered, lines_not_covered) = compute_coverage.compute_coverage(
            script_path + '/aux_get_lines_from_cex/aa_only_infeasible.txt',
            lines_to_cover,
            script_path + '/aux_get_lines_from_cex/aa_only_infeasible.c',
            False,
            self.temp_folder
        )
        self.assertEqual(lines_covered, Set())
        self.assertEqual(lines_covered.union(lines_not_covered), lines_to_cover)
        self.assertEqual(lines_covered.intersection(lines_not_covered), Set())

if __name__ == '__main__':
    unittest.main()
