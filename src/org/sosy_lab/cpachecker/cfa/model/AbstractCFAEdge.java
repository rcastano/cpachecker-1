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
package org.sosy_lab.cpachecker.cfa.model;


import static com.google.common.base.Preconditions.checkNotNull;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Queue;

import org.sosy_lab.cpachecker.cfa.ast.AAstNode;
import org.sosy_lab.cpachecker.cfa.ast.FileLocation;

import com.google.common.base.Optional;
import com.google.common.base.Preconditions;

import de.uni_freiburg.informatik.ultimate.smtinterpol.util.ArrayQueue;

public abstract class AbstractCFAEdge implements CFAEdge {

  private final CFANode predecessor;
  private final CFANode successor;
  private final String rawStatement;
  private final FileLocation fileLocation;

  public AbstractCFAEdge(String pRawStatement, FileLocation pFileLocation,
      CFANode pPredecessor, CFANode pSuccessor) {

    Preconditions.checkNotNull(pRawStatement);
    Preconditions.checkNotNull(pPredecessor);
    Preconditions.checkNotNull(pSuccessor);

    predecessor = pPredecessor;
    successor = pSuccessor;
    rawStatement = pRawStatement;
    fileLocation = checkNotNull(pFileLocation);
  }

  @Override
  public CFANode getPredecessor() {
    return predecessor;
  }

  @Override
  public CFANode getSuccessor() {
    return successor;
  }

  @Override
  public String getRawStatement() {
    return rawStatement;
  }

  @Override
  public Optional<? extends AAstNode> getRawAST() {
    return Optional.absent();
  }

  @Override
  public String getDescription() {
    return getCode();
  }

  @Override
  public int getLineNumber() {
    return fileLocation.getStartingLineNumber();
  }

  @Override
  public FileLocation getFileLocation() {
    return fileLocation;
  }

  @Override
  public int hashCode() {
    return 31 * predecessor.hashCode() + successor.hashCode();
  }

  @Override
  public boolean equals(Object pOther) {
    if (!(pOther instanceof AbstractCFAEdge)) {
      return false;
    }

    AbstractCFAEdge otherEdge = (AbstractCFAEdge) pOther;

    if ((otherEdge.predecessor != predecessor)
        || (otherEdge.successor != successor)) {
      return false;
    }

    return true;
  }

  @Override
  public String toString() {
    return getFileLocation() + ":\t" + getPredecessor() + " -{" +
        getDescription().replaceAll("\n", " ") +
        "}-> " + getSuccessor();
  }


  @Override
  public String callTrace() {
    HashMap<CFANode,CFAEdge> next = new HashMap<>();
    HashSet<CFANode> added = new HashSet<>();
    Queue<CFANode> q = new ArrayQueue();
    q.add(this.getPredecessor());
    CFANode start = null;
    CFANode end = this.getSuccessor();
    while (!q.isEmpty()) {
      CFANode current = q.remove();
      if (current.getNumEnteringEdges() == 0) {
        start = current;
      }
      for (int i = 0; i < current.getNumEnteringEdges(); ++i) {
        if (!added.contains(current.getEnteringEdge(i).getPredecessor())) {
          q.add(current.getEnteringEdge(i).getPredecessor());
          next.put(current.getEnteringEdge(i).getPredecessor(), current.getEnteringEdge(i));
          added.add(current.getEnteringEdge(i).getPredecessor());
        }
      }
    }
    CFANode current = start;
    if (current == null) {
      return "";
    }
    StringBuilder b = new StringBuilder();
    while(next.get(current) != null) {
      if (next.get(current).getEdgeType() == CFAEdgeType.FunctionCallEdge) {
        System.out.println(next.get(current).getCode() + ", ");
        b.append(next.get(current).getCode() + ", ");
      }
      current = next.get(current).getSuccessor();
      if (current.equals(end)) {
        break;
      }
    }
    return b.toString();
  }
}
