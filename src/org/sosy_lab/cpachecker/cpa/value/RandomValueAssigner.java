/*
 * CPAchecker is a tool for configurable software verification.
 *  This file is part of CPAchecker.
 *
 *  Copyright (C) 2007-2015  Dirk Beyer
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
package org.sosy_lab.cpachecker.cpa.value;

import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.configuration.Option;
import org.sosy_lab.common.configuration.Options;
import org.sosy_lab.cpachecker.cfa.types.Type;
import org.sosy_lab.cpachecker.cfa.types.c.CArrayType;
import org.sosy_lab.cpachecker.cfa.types.c.CComplexType;
import org.sosy_lab.cpachecker.cfa.types.c.CCompositeType;
import org.sosy_lab.cpachecker.cfa.types.c.CElaboratedType;
import org.sosy_lab.cpachecker.cfa.types.c.CPointerType;
import org.sosy_lab.cpachecker.cfa.types.c.CType;
import org.sosy_lab.cpachecker.cfa.types.c.CTypedefType;
import org.sosy_lab.cpachecker.cfa.types.c.CVoidType;
import org.sosy_lab.cpachecker.cfa.types.java.JSimpleType;
import org.sosy_lab.cpachecker.cfa.types.java.JType;
import org.sosy_lab.cpachecker.cpa.value.symbolic.type.SymbolicIdentifier;
import org.sosy_lab.cpachecker.cpa.value.symbolic.type.SymbolicValueFactory;
import org.sosy_lab.cpachecker.cpa.value.type.NumericValue;
import org.sosy_lab.cpachecker.exceptions.UnrecognizedCCodeException;
import org.sosy_lab.cpachecker.util.globalinfo.GlobalInfo;
import org.sosy_lab.cpachecker.util.states.MemoryLocation;
import org.sosy_lab.cpachecker.util.states.MemoryLocationValueHandler;

/**
 * This class allows assignment of new {@link SymbolicIdentifier}s
 * to {@link MemoryLocation}s of {@link ValueAnalysisState} object.
 * If property <code>cpa.value.symbolic.useSymbolicValues</code> is set to <code>false</code>,
 * memory locations passed to {@link #handle} will just be removed from the state.
 */
@Options(prefix="cpa.value.nondetAsRandom")
public class RandomValueAssigner implements MemoryLocationValueHandler {

  @Option(secure=true,
      description="Use random values. This allows tracking of non-deterministic values."
          + " Random values make the analysis unsound, only useful for bug finding.")
  private boolean useRandomValues = false;

  @Option(description="Whether to handle non-deterministic pointers with random values.")
  private boolean handlePointers = true;

  @Option(
      secure=true,
      description = "Seed used for Value Analysis when using random number for nondeterminism.")
  public Long randomSeed = null;

  /**
   * Creates a new <code>SymbolicValueAssigner</code> object with the given configuration.
   *
   * @param pConfig the configuration to use
   * @throws InvalidConfigurationException thrown by {@link Configuration#inject}
   */
  public RandomValueAssigner(Configuration pConfig) throws InvalidConfigurationException {
    pConfig.inject(this);
    GlobalInfo.setSeed(randomSeed);
  }


  /**
   * Assigns new symbolic identifiers or removes the memory location from the state, depending on
   * {@link #useSymbolicValues}.
   * If <code>true</code> and the variable is neither a struct nor an array, a new symbolic
   * identifier is assigned to the variable at the given memory location. If the variable is a
   * struct or array, behaviour is defined by {@link #handleStructs} and {@link #handleArrays}.
   *
   *
   * @param pVarLocation the memory location of the variable to handle
   * @param pVarType the type of th evariable
   * @param pState the {@link ValueAnalysisState} to use.
   *    Value assignments will happen in this state
   * @param pValueVisitor a value visitor for possibly needed evaluations or computations
   * @throws UnrecognizedCCodeException thrown if a {@link MemoryLocation} can't be evaluated
   */
  @Override
  public void handle(MemoryLocation pVarLocation, Type pVarType,
      ValueAnalysisState pState, ExpressionValueVisitor pValueVisitor)
      throws UnrecognizedCCodeException {

    if (isEligibleForRandomValue(pVarType)) {
      assignNewSymbolicIdentifier(pState, pVarLocation, pVarType, pValueVisitor);

    } else {
      throw new UnsupportedOperationException();
      // pState.forget(pVarLocation);
    }
  }


  /**
   * Assigns a new symbolic identifier to the variable at the given memory location. If the variable
   * is a struct, behaviour depends on {@link #handleStructs}. If <code>true</code>, all members
   * of the struct will get a distinct {@link SymbolicIdentifier}. Otherwise, the variable will
   * not be handled.
   *
   * @param pState the state to use for assignments
   * @param pVarLocation the memory location of the variable
   * @param pVarType the type of the variable
   * @param pValueVisitor value visitor for evaluating the memory location of struct members
   * @throws UnrecognizedCCodeException thrown if a memory location can't be evaluated
   */
  private void assignNewSymbolicIdentifier(ValueAnalysisState pState,
      MemoryLocation pVarLocation,
      Type pVarType, ExpressionValueVisitor pValueVisitor) throws UnrecognizedCCodeException {

    if (pVarType instanceof JType) {
       addSymbolicTracking(pState, pVarLocation, (JType) pVarType);

    } else {
      assert pVarType instanceof CType : "Unhandled type " + pVarType;

      addSymbolicTracking(pState, pVarLocation, (CType) pVarType, pValueVisitor);
    }
  }


  private void addSymbolicTracking(ValueAnalysisState pState,
      MemoryLocation pVarLocation, JType pVarType) {

    if (pVarType instanceof JSimpleType) {
       assignRandomValue(pState, pVarLocation, pVarType);

    } else {
      pState.forget(pVarLocation);
    }
  }

  private void addSymbolicTracking(ValueAnalysisState pState,
      MemoryLocation pVarLocation, CType pVarType, ExpressionValueVisitor pValueVisitor)
      throws UnrecognizedCCodeException {

    final CType canonicalType = pVarType.getCanonicalType();

    if (canonicalType instanceof CCompositeType) {
       throw new UnsupportedOperationException();

    } else if (canonicalType instanceof CArrayType) {
      throw new UnsupportedOperationException();

    } else if (canonicalType instanceof CElaboratedType) {
      throw new UnsupportedOperationException();
    } else {
       assignRandomValue(pState, pVarLocation, canonicalType);
    }
  }

  private void assignRandomValue(ValueAnalysisState pState,
      MemoryLocation pVarLocation, Type pVarType) {

    SymbolicValueFactory factory = SymbolicValueFactory.getInstance();
    NumericValue newValue = new NumericValue(GlobalInfo.nextInt());

    pState.assignConstant(pVarLocation, newValue, pVarType);
  }


  private boolean isEligibleForRandomValue(Type pDeclarationType) {
    if (!useRandomValues) {
      return false;
    }

    if (pDeclarationType instanceof CType) {
      CType canonicalType = ((CType) pDeclarationType).getCanonicalType();

      if (canonicalType instanceof CComplexType) {
        return false;

      } else {
        return (!(canonicalType instanceof CPointerType) || handlePointers)
            && !(canonicalType instanceof CVoidType || canonicalType instanceof CTypedefType);
      }

    } else {
      return true;
    }
  }
}
