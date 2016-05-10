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
package org.sosy_lab.cpachecker.cpa.predicate;

import java.util.ArrayList;
import java.util.List;

import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.core.interfaces.AbstractState;
import org.sosy_lab.cpachecker.core.interfaces.ConfigurableProgramAnalysis;
import org.sosy_lab.cpachecker.core.reachedset.ReachedSet;
import org.sosy_lab.cpachecker.cpa.arg.ARGCPA;
import org.sosy_lab.cpachecker.util.CPAs;
import org.sosy_lab.cpachecker.util.predicates.smt.Solver;

/**
 * Performs refinements against all waiting state.
 */
public class FeasabilityRefiner extends ImpactGlobalRefiner {

  class Pair {
    AbstractState s;
    ReachedSet reached;
  }

  @SuppressWarnings({"unchecked", "rawtypes"})
  public static FeasabilityRefiner create(ConfigurableProgramAnalysis pCpa) throws InvalidConfigurationException {
    PredicateCPA predicateCpa = CPAs.retrieveCPA(pCpa, PredicateCPA.class);
    if (predicateCpa == null) {
      throw new InvalidConfigurationException(ImpactRefiner.class.getSimpleName() + " needs a PredicateCPA");
    }

    return new FeasabilityRefiner(predicateCpa.getConfiguration(),
                                    predicateCpa.getLogger(),
                                    (ARGCPA)pCpa,
                                    predicateCpa.getSolver(),
                                    predicateCpa.getPredicateManager());
  }

  private FeasabilityRefiner(Configuration config, LogManager pLogger,
      ARGCPA pArgCpa,
      Solver pSolver, PredicateAbstractionManager pPredAbsMgr)
          throws InvalidConfigurationException {
    super(config, pLogger, pArgCpa, pSolver, pPredAbsMgr);
    targetExtractor = new TargetExtractor() {
      @Override
      public List<AbstractState> getTargets(ReachedSet pReached) {
        return new ArrayList(pReached.getWaitlist());
      }
    };
  }
}