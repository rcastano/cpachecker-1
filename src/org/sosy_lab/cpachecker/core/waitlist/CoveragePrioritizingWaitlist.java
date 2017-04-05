/*
 *  CPAchecker is a tool for configurable software verification.
 *  This file is part of CPAchecker.
 *
 *  Copyright (C) 2007-2014  Dirk Beyer
 *  All rights reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *
 *  CPAchecker web page:
 *    http://cpachecker.sosy-lab.org
 */
package org.sosy_lab.cpachecker.core.waitlist;

import org.sosy_lab.cpachecker.core.interfaces.AbstractState;
import org.sosy_lab.cpachecker.cpa.automaton.AutomatonState;
import org.sosy_lab.cpachecker.util.AbstractStates;

/**
 * Waitlist that attempts to greedily increase coverage.
 *
 * pop() heuristically selects the state with the higher potential coverage.
 * Potential coverage is defined as the number of different lines of code that can be reached
 * by traversing arbitrary edges.
 */
public class CoveragePrioritizingWaitlist extends AbstractSortedWaitlist<Integer> {
  protected CoveragePrioritizingWaitlist(WaitlistFactory pSecondaryStrategy) {
    super(pSecondaryStrategy);
  }

  @Override
  protected Integer getSortKey(AbstractState pState) {
    Integer sortKey = null;
    for (AutomatonState s : AbstractStates.asIterable(pState).filter(AutomatonState.class)) {
      if (s.getOwningAutomaton().getName().contains("AssumptionAutomaton")) {
        s.getCoverageScore();
      }
    }
    return (sortKey != null) ? sortKey : 0;
  }

  public static WaitlistFactory factory(final WaitlistFactory pSecondaryStrategy) {
    return () -> new CoveragePrioritizingWaitlist(pSecondaryStrategy);
  }
}
