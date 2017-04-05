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
package org.sosy_lab.cpachecker.cpa.automaton;

import java.util.List;
import java.util.Map;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.cfa.model.CFAEdge;
import org.sosy_lab.cpachecker.core.interfaces.AbstractState;

public class OnlyCFAEdgeAutomatonExpressionArguments extends AutomatonExpressionArguments {
  public OnlyCFAEdgeAutomatonExpressionArguments(CFAEdge e) {
    super(null, null, null, e, null);
  }
  @Override
  void setAutomatonVariables(Map<String, AutomatonVariable> pAutomatonVariables) {
    throw new UnsupportedOperationException();
  }
  @Override
  Map<String, AutomatonVariable> getAutomatonVariables() {
    throw new UnsupportedOperationException();
  }
  @Override
  List<AbstractState> getAbstractStates() {
    throw new UnsupportedOperationException();
  }

  @Override
  LogManager getLogger() {
    throw new UnsupportedOperationException();
  }
  @Override
  void appendToLogMessage(String message) {
    throw new UnsupportedOperationException();
  }
  @Override
  void appendToLogMessage(int message) {
    throw new UnsupportedOperationException();
  }
  @Override
  String getLogMessage() {
    throw new UnsupportedOperationException();
  }
  @Override
  public void clearLogMessage() {
    throw new UnsupportedOperationException();
  }
  @Override
  void clearTransitionVariables() {
    throw new UnsupportedOperationException();
  }
  @Override
  String getTransitionVariable(int key) {
    throw new UnsupportedOperationException();
  }
  @Override
  void putTransitionVariable(int key, String value) {
    throw new UnsupportedOperationException();
  }

  @Override
  String replaceVariables(String pSourceString) {
    throw new UnsupportedOperationException();
  }
  @Override
  public AutomatonState getState() {
    throw new UnsupportedOperationException();
  }
  @Override
  public Map<Integer, String> getTransitionVariables() {
    throw new UnsupportedOperationException();
  }

  @Override
  public void putTransitionVariables(Map<Integer, String> pTransitionVariables) {
    throw new UnsupportedOperationException();
  }
}
