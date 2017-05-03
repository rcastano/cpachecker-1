
import benchexec.result as result
import benchexec.tools.cpachecker as cpachecker
import benchexec.tools.template

import os

class Tool(benchexec.tools.template.BaseTool):
    def executable(self):
        return os.path.join(os.path.dirname(os.path.realpath(__file__)),
                os.path.pardir, os.path.pardir, 'coverage',
        'generate_trace_population.py')

    def name(self):
        return 'CoverageTraversal'

    def determine_result(self, returncode, returnsignal, output, isTimeout):
        cpachecker_tool = cpachecker.Tool()
        res_cpachecker = cpachecker_tool.determine_result(
                returncode, returnsignal, output, isTimeout)
        res = res_cpachecker
        if res_cpachecker == result.RESULT_FALSE_REACH:
            for line in output:
                if 'Found covering test case' in line:
                    res = result.RESULT_UNKNOWN

        return res
    
    def get_value_from_output(self, lines, identifier):
        # search for the text in output and get its value,
        # stop after the first line, that contains the searched text
        for line in lines:
            if identifier in line:
                startPosition = line.find(':') + 1
                endPosition = line.find('(', startPosition) # bracket maybe not found -> (-1)
                if (endPosition == -1):
                    return line[startPosition:].strip()
                else:
                    return line[startPosition: endPosition].strip()
        return None
