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
package org.sosy_lab.cpachecker.core.algorithm;

import java.io.IOException;
import java.util.Collection;
import java.util.logging.Level;
import org.sosy_lab.common.ShutdownNotifier;
import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.configuration.Option;
import org.sosy_lab.common.configuration.Options;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.cfa.CFA;
import org.sosy_lab.cpachecker.core.interfaces.AbstractState;
import org.sosy_lab.cpachecker.core.interfaces.ConfigurableProgramAnalysis;
import org.sosy_lab.cpachecker.core.interfaces.StateSpacePartition;
import org.sosy_lab.cpachecker.core.interfaces.Statistics;
import org.sosy_lab.cpachecker.core.interfaces.StatisticsProvider;
import org.sosy_lab.cpachecker.core.reachedset.ReachedSet;
import org.sosy_lab.cpachecker.cpa.arg.ARGCPA;
import org.sosy_lab.cpachecker.cpa.arg.ARGState;
import org.sosy_lab.cpachecker.cpa.predicate.PredicateAbstractState;
import org.sosy_lab.cpachecker.cpa.predicate.PredicateCPA;
import org.sosy_lab.cpachecker.exceptions.CPAEnabledAnalysisPropertyViolationException;
import org.sosy_lab.cpachecker.exceptions.CPAException;
import org.sosy_lab.cpachecker.util.AbstractStates;
import org.sosy_lab.cpachecker.util.CPAs;
import org.sosy_lab.cpachecker.util.ci.CustomInstructionApplications;
import org.sosy_lab.cpachecker.util.ci.CustomInstructionApplications.CustomInstructionApplicationBuilder;
import org.sosy_lab.cpachecker.util.ci.CustomInstructionApplications.CustomInstructionApplicationBuilder.CIDescriptionType;
import org.sosy_lab.cpachecker.util.ci.CustomInstructionRequirementsExtractor;


@Options(prefix="custominstructions")
public class CustomInstructionRequirementsExtractingAlgorithm implements Algorithm, StatisticsProvider {

  private final Algorithm analysis;
  private final LogManager logger;
  private final ShutdownNotifier shutdownNotifier;

  private final ConfigurableProgramAnalysis cpa;
  private final CustomInstructionApplicationBuilder ciasBuilder;
  private final CustomInstructionRequirementsExtractor ciExtractor;

  @Option(secure = true,
      description = "Specifies the mode how custom instruction applications in program are identified.")
  private CIDescriptionType mode = CIDescriptionType.OPERATOR;

  /**
   * Constructor of CustomInstructionRequirementsExtractingAlgorithm
   * @param analysisAlgorithm Algorithm
   * @param cpa ConfigurableProgramAnalysis
   * @param config Configuration
   * @param logger LogManager
   * @param sdNotifier ShutdownNotifier
   * @throws InvalidConfigurationException if the given Path not exists
   */
  public CustomInstructionRequirementsExtractingAlgorithm(final Algorithm analysisAlgorithm,
      final ConfigurableProgramAnalysis cpa, final Configuration config, final LogManager logger,
      final ShutdownNotifier sdNotifier, final CFA cfa) throws InvalidConfigurationException {

    config.inject(this);

    analysis = analysisAlgorithm;
    this.logger = logger;
    this.shutdownNotifier = sdNotifier;
    this.cpa = cpa;

    if (!(cpa instanceof ARGCPA)) {
      throw new InvalidConfigurationException("The given cpa " + cpa + "is not an instance of ARGCPA");
    }

    ciasBuilder = CustomInstructionApplicationBuilder.getBuilder(mode, config, logger, sdNotifier, cfa);
    ciExtractor = new CustomInstructionRequirementsExtractor(config, logger, sdNotifier, cpa);

    Class<? extends AbstractState> requirementsStateClass = ciExtractor.getRequirementsStateClass();
    try {
      if (AbstractStates.extractStateByType(cpa.getInitialState(cfa.getMainFunction(), StateSpacePartition.getDefaultPartition()),
                                            requirementsStateClass) == null) {
        throw new InvalidConfigurationException(requirementsStateClass + "is not an abstract state.");
      }
    } catch (InterruptedException e) {
      throw new InvalidConfigurationException(requirementsStateClass + "initial state computation did not finish in time");
    }
  }

  @Override
  public AlgorithmStatus run(ReachedSet pReachedSet) throws CPAException, InterruptedException,
      CPAEnabledAnalysisPropertyViolationException {

    logger.log(Level.INFO, "Get custom instruction applications in program.");

    CustomInstructionApplications cia = null;
    try {
      cia = ciasBuilder.identifyCIApplications();
    } catch (IOException e) {
      logger.log(Level.SEVERE, "Detecting the custom instruction applications in program failed.", e);
      return AlgorithmStatus.UNSOUND_AND_PRECISE;
    }

    if (ciExtractor.getRequirementsStateClass().equals(PredicateAbstractState.class)) {
      PredicateCPA predCPA = CPAs.retrieveCPA(cpa, PredicateCPA.class);
      if (predCPA == null) {
        logger.log(Level.SEVERE,
            "Cannot find PredicateCPA in CPA configuration but it is required to set abstraction nodes");
        return AlgorithmStatus.UNSOUND_AND_PRECISE;
      }
      predCPA.changeExplicitAbstractionNodes(cia.getStartAndEndLocationsOfCIApplications());
    }

    shutdownNotifier.shutdownIfNecessary();
    logger.log(Level.INFO, "Start analysing to compute requirements.");

    AlgorithmStatus status = analysis.run(pReachedSet);

    // analysis was unsound
    if (!status.isSound()) {
      logger.log(Level.SEVERE, "Do not extract requirements since analysis failed.");
      return status;
    }

    shutdownNotifier.shutdownIfNecessary();
    logger.log(Level.INFO, "Start extracting requirements for applied custom instructions");

    ciExtractor.extractRequirements((ARGState)pReachedSet.getFirstState(), cia);
    return status;
  }

  @Override
  public void collectStatistics(Collection<Statistics> pStatsCollection) {
    if (analysis instanceof StatisticsProvider) {
      ((StatisticsProvider) analysis).collectStatistics(pStatsCollection);
    }
  }
}