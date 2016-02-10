/*
 *  CPAchecker is a tool for configurable software verification.
 *  This file is part of CPAchecker.
 *
 *  Copyright (C) 2007-2016  Dirk Beyer
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
package org.sosy_lab.cpachecker.core;

import java.util.Set;

import org.sosy_lab.common.ShutdownNotifier;
import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.cfa.CFA;
import org.sosy_lab.cpachecker.core.algorithm.counterexamplecheck.CBMCChecker;
import org.sosy_lab.cpachecker.core.algorithm.counterexamplecheck.CounterexampleChecker;
import org.sosy_lab.cpachecker.core.interfaces.AbstractState;
import org.sosy_lab.cpachecker.core.interfaces.ConfigurableProgramAnalysis;
import org.sosy_lab.cpachecker.core.reachedset.ReachedSet;
import org.sosy_lab.cpachecker.cpa.arg.ARGPath;
import org.sosy_lab.cpachecker.cpa.arg.ARGState;
import org.sosy_lab.cpachecker.exceptions.CPAException;

import scala.UninitializedFieldError;


public class GlobalConfig {

  static Configuration config;
  static CFA cfa;
  static ReachedSet reachedSet;
  static AbstractState state;
  private static ARGPath path;
  private static String filename;
  private static ShutdownNotifier shutdownNotifier;
  private static ConfigurableProgramAnalysis cpa;

  static CounterexampleChecker createChecker(Configuration config, LogManager logger, CFA cfa) {
    // TODO(rcastano): support other kinds of checkers.
    try {
      if (logger == null) {
        // TODO(rcastano): This is a hack, I'm just trying to avoid null dereferences,
        // but I'm not sure how logging works.
        logger = new org.sosy_lab.common.log.BasicLogManager(config);
      }

      // TODO(rcastano): Try this cex checker. My first try didn't work out.
      // It just doesn't seem to implement the same interface, checkCounterexample relies on
      // an indirect cpa.getCounterexamples() method which I'm not sure how to hack.
      // Worst case I could just copy-paste some of the code, but it runs CPAchecker internally,
      // so I might end up spending more time than I should.
      // return new CounterexampleCPAChecker(config, logger, GlobalConfig.getNotifier(), cfa, null, (ARGCPA) GlobalConfig.getCPA());
      return new CBMCChecker(config, logger, cfa);
    } catch (InvalidConfigurationException e) {
      // TODO(rcastano): this is awful. Find out how to handle this exception.
      e.printStackTrace();
    }
    return null;
  }

  /*
   * Returns whether the target state is reachable from start by only visiting states within statesOnPath
   */
  public static boolean checkCounterexample(ARGState start, ARGState target, Set<ARGState> statesOnPath, LogManager pLogger) {

    // Saving flag to restore later.
    boolean savedCheckAsTarget = target.checkAsTarget();
    target.setCheckAsTarget(true);
    boolean is_feasible = false;
    try {
      is_feasible =
          GlobalConfig.getChecker(pLogger).
          checkCounterexample(
              start,
              target /* errorState */,
              statesOnPath);
    } catch (CPAException | InterruptedException e) {
      // TODO Auto-generated catch block
      e.printStackTrace();
    } finally {
      // restore original flag value
      target.setCheckAsTarget(savedCheckAsTarget);
    }

    return is_feasible;
  }
  static Configuration createConfig() {
    return Configuration.defaultConfiguration();
  }

  // static Algorithm algorithm;
  // static ConfigurableProgramAnalysis pCpa;
  static LogManager logger;
  // static ShutdownNotifier pShutdownNotifier;
  // static String filename;
  static CounterexampleChecker checker;

  public static CounterexampleChecker getChecker(LogManager pLogger) {
    initialize(pLogger);
    return checker;
  }
  static void initialize(LogManager pLogger) {
    if (checker == null) {
      logger = pLogger;
      checker = createChecker(config, logger, cfa);
    }
  }

  public static void setConfig(Configuration pConfig) {
    config = pConfig;
  }

  public static void setCFA(CFA pCfa) {
    cfa = pCfa;
  }

  public static Configuration getConfig() {
    if (config == null) {
      throw new UninitializedFieldError("Global Configuration not yet initialized");
    }
    return config;
  }
  public static CFA getCFA() {
    if (cfa == null) {
      throw new UninitializedFieldError("Global CFA not yet initialized");
    }
    return cfa;
  }

  public static void setReachedSet(ReachedSet pReachedSet) {
    reachedSet = pReachedSet;
  }

  public static void setCurrentState(AbstractState pState) {
    state = pState;
  }

  public static ReachedSet getReachedSet() {
    return reachedSet;
  }

  public static AbstractState getCurrentState() {
    return state;
  }

  public static void setFilename(String pProgramDenotation) {
    filename = pProgramDenotation;
  }

  public static String getFilename() {
    return filename;
  }

  public static void setNotifier(ShutdownNotifier pShutdownNotifier) {
    shutdownNotifier = pShutdownNotifier;
  }

  public static ShutdownNotifier getNotifier() {
    return shutdownNotifier;
  }

  public static void setCPA(ConfigurableProgramAnalysis pCpa) {
    cpa = pCpa;
  }

  public static ConfigurableProgramAnalysis getCPA() {
    return cpa;
  }
}
