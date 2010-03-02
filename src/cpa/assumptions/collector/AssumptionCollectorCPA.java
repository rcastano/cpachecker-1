/*
 *  CPAchecker is a tool for configurable software verification.
 *  This file is part of CPAchecker. 
 *
 *  Copyright (C) 2007-2008  Dirk Beyer and Erkan Keremoglu.
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
 *    http://www.cs.sfu.ca/~dbeyer/CPAchecker/
 */
package cpa.assumptions.collector;

import assumptions.AssumptionSymbolicFormulaManager;
import assumptions.AssumptionWithLocation;
import assumptions.MathsatInvariantSymbolicFormulaManager;
import cfa.objectmodel.CFAFunctionDefinitionNode;

import common.configuration.Configuration;

import cpa.common.LogManager;
import cpa.common.defaults.AbstractSingleWrapperCPA;
import cpa.common.interfaces.AbstractDomain;
import cpa.common.interfaces.AbstractElement;
import cpa.common.interfaces.CPAFactory;
import cpa.common.interfaces.ConfigurableProgramAnalysis;
import cpa.common.interfaces.MergeOperator;
import cpa.common.interfaces.PrecisionAdjustment;
import cpa.common.interfaces.StopOperator;
import cpa.common.interfaces.TransferRelation;
import exceptions.InvalidConfigurationException;

/**
 * CPA used to capture the assumptions that ought to be dumped.
 * 
 * Note that once the CPA algorithm has finished running, a call
 * to dumpInvariants() is needed to process the reachable states
 * and produce the actual invariants.
 *  
 * @author g.theoduloz
 */
public class AssumptionCollectorCPA extends AbstractSingleWrapperCPA {

  private static class AssumptionCollectorCPAFactory extends AbstractSingleWrapperCPAFactory {
    
    @Override
    public ConfigurableProgramAnalysis createInstance() throws InvalidConfigurationException {
      return new AssumptionCollectorCPA(getChild(), getConfiguration(), getLogger());
    }
  }
  
  public static CPAFactory factory() {
    return new AssumptionCollectorCPAFactory();
  }
  
  private final AssumptionCollectorDomain abstractDomain;
  private final MergeOperator mergeOperator;
  private final StopOperator stopOperator;
  private final TransferRelation transferRelation;
  private final AssumptionSymbolicFormulaManager symbolicFormulaManager;
  private final PrecisionAdjustment precisionAdjustment;
  
  private AssumptionCollectorCPA(ConfigurableProgramAnalysis cpa,
            Configuration config, LogManager logger) throws InvalidConfigurationException
  {
    super(cpa);
    symbolicFormulaManager = MathsatInvariantSymbolicFormulaManager.createInstance(config, logger);
    abstractDomain = new AssumptionCollectorDomain(getWrappedCpa().getAbstractDomain());
    mergeOperator = new AssumptionCollectorMerge(getWrappedCpa());
    stopOperator = new AssumptionCollectorStop(getWrappedCpa());
    transferRelation = new AssumptionCollectorTransferRelation(this);
    precisionAdjustment = new AssumptionCollectorPrecisionAdjustment(getWrappedCpa());
  }
  
  public AssumptionSymbolicFormulaManager getSymbolicFormulaManager()
  {
    return symbolicFormulaManager;
  }
  
  @Override
  public AbstractDomain getAbstractDomain() {
    return abstractDomain;
  }

  @Override
  public AbstractElement getInitialElement(CFAFunctionDefinitionNode node) {
    AbstractElement wrappedInitialElement = getWrappedCpa().getInitialElement(node);
    return new AssumptionCollectorElement(wrappedInitialElement, AssumptionWithLocation.TRUE, false);
  }

  @Override
  public MergeOperator getMergeOperator() {
    return mergeOperator;
  }

  @Override
  public PrecisionAdjustment getPrecisionAdjustment() {
    return precisionAdjustment;
  }

  @Override
  public StopOperator getStopOperator() {
    return stopOperator;
  }

  @Override
  public TransferRelation getTransferRelation() {
    return transferRelation;
  }
}
