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

import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.cpachecker.cfa.CFA;
import org.sosy_lab.cpachecker.core.interfaces.AbstractState;
import org.sosy_lab.cpachecker.core.reachedset.ReachedSet;

import scala.UninitializedFieldError;


public class GlobalConfig {

  static Configuration config;
  static CFA cfa;
  static ReachedSet reachedSet;
  static AbstractState state;

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
}
