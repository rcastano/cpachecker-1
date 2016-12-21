import unittest
import StringIO
import os
import sys

from sets import Set

script_path = os.path.dirname(os.path.realpath(__file__))

import compute_coverage

class TestCoverage(unittest.TestCase):
    temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'
#    def setUp(self):
#        self.temp_folder = script_path + '/aux_get_lines_from_cex/temp_folder/'
#        os.makedirs(self.temp_folder)
#
#    def tearDown(self):
#        import shutil
#        shutil.rmtree(self.temp_folder)

    def test(self):
        lines_to_cover = Set([2,3,10,11,12,13,15,16,17,18,20,21,24])
        (lines_covered, lines_not_covered) = compute_coverage.compute_coverage(
            script_path + '/aux_get_lines_from_cex/multiple_cex/tweakedAA.txt',
            lines_to_cover,
            script_path + '/aux_get_lines_from_cex/multiple_cex/multiple_cex.c',
            self.temp_folder
        )
        self.assertEqual(Set([10,11,12,16,17,18,20,21]), lines_covered)
        self.assertEqual(lines_covered.union(lines_not_covered), lines_to_cover)
        self.assertEqual(lines_covered.intersection(lines_not_covered), Set())

if __name__ == '__main__':
    unittest.main()
