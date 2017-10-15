/*
 *  CPAchecker is a tool for configurable software verification.
 *  This file is part of CPAchecker.
 *
 *  Copyright (C) 2007-2017  Dirk Beyer
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
package org.sosy_lab.cpachecker.util.variableClassification;

import com.google.common.collect.HashMultimap;
import com.google.common.collect.Multimap;
import com.google.common.collect.Sets;
import java.io.Serializable;
import java.math.BigInteger;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import org.sosy_lab.cpachecker.cfa.model.CFAEdge;
import org.sosy_lab.cpachecker.util.Pair;

/**
 * A Partition is a Wrapper for a Collection of vars, values and edges. The Partitions are disjunct,
 * so no variable and no edge is in 2 Partitions.
 */
public class Partition implements Serializable {

  private static final long serialVersionUID = 1L;

  private final Set<String> vars = new HashSet<>();
  private final Set<BigInteger> values = Sets.newTreeSet();
  private final Multimap<CFAEdge, Integer> edges = HashMultimap.create();

  private final Map<String, Partition> varToPartition;
  private final Map<Pair<CFAEdge, Integer>, Partition> edgeToPartition;

  Partition(
      Map<String, Partition> varToPartition,
      Map<Pair<CFAEdge, Integer>, Partition> edgeToPartition) {
    this.varToPartition = varToPartition;
    this.edgeToPartition = edgeToPartition;
  }

  public Set<String> getVars() {
    return vars;
  }

  public Set<BigInteger> getValues() {
    return values;
  }

  public Multimap<CFAEdge, Integer> getEdges() {
    return edges;
  }

  /** adds the var to the partition and also to the global set of all vars. */
  void add(String var) {
    vars.add(var);
    varToPartition.put(var, this);
  }

  void addValues(Set<BigInteger> newValues) {
    values.addAll(newValues);
  }

  void addEdge(CFAEdge edge, int index) {
    edges.put(edge, index);
    edgeToPartition.put(Pair.of(edge, index), this);
  }

  /** copies all data from other to current partition */
  void merge(Partition other) {
    assert this.varToPartition == other.varToPartition;

    this.vars.addAll(other.vars);
    this.values.addAll(other.values);
    this.edges.putAll(other.edges);

    // update mapping of vars
    for (String var : other.vars) {
      varToPartition.put(var, this);
    }

    // update mapping of edges
    for (Entry<CFAEdge, Integer> edge : other.edges.entries()) {
      edgeToPartition.put(Pair.of(edge.getKey(), edge.getValue()), this);
    }
  }

  @Override
  public boolean equals(Object other) {
    if (other instanceof Partition) {
      Partition p = (Partition) other;
      return this.vars == p.vars;
    } else {
      return false;
    }
  }

  @Override
  public int hashCode() {
    return vars.hashCode();
  }

  @Override
  public String toString() {
    return vars.toString() + " --> " + Arrays.toString(values.toArray());
  }
}