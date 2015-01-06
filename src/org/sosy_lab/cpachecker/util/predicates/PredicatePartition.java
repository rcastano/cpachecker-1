/*
 * CPAchecker is a tool for configurable software verification.
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
package org.sosy_lab.cpachecker.util.predicates;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

import org.sosy_lab.common.Pair;
import org.sosy_lab.cpachecker.util.predicates.interfaces.view.FormulaManagerView;

/**
 * The class <code>PredicatePartition</code> represents a partition of predicates that are similar to each other.
 * Two predicates are similar if they have at least one variable in common.
 * <p/>
 * It is used by the {@link AbstractionManager} to generate a variable ordering for BDDs where a BDD variable
 * represents
 * a predicate.
 */
public class PredicatePartition {
  private static int partitionCounter = 0;
  private final int partitionID = partitionCounter++;
  private final FormulaManagerView fmgr;
  private ArrayList<AbstractionPredicate> predicates;
  // mapping varID -> predicate in partition
  private HashMap<Integer, AbstractionPredicate> varIDToPredicate;
  private ArrayList<ArrayList<Integer>> similarityRelation = new ArrayList<>();
  private Solver solver;

  public PredicatePartition(FormulaManagerView fmgr, Solver solver) {
    this.fmgr = fmgr;
    this.solver = solver;
    predicates = new ArrayList<>();
    varIDToPredicate = new HashMap<>();
    similarityRelation = new ArrayList<>();
  }

  /**
   * Inserts a new predicate in the partition using a certain insertion method.
   *
   * @param newPred the predicate that should be inserted.
   */
  public void insertPredicate(AbstractionPredicate newPred) {
    insertPredicateByImplication(newPred);
    // insertPredicateBySimilarity(newPred);
  }

  /**
   * Insertion method of hagenhoff
   *
   * @param newPred
   */
  private void insertPredicateByImplication(AbstractionPredicate newPred) {
    // solver does hashing
    // find highest position in order where all predicates that imply newPred are on the left and all predicates that are implied by newPred are on the right
    int highestImplier = -1;
    int lowestImplied = -1;
    for (int i = 0; i < predicates.size(); i++) {
      AbstractionPredicate oldPred = predicates.get(i).getSymbolicAtom();
      try {
        if (solver.implies(oldPred, newPred)) {
       // TODO exception handling
          highestImplier = i;
        }
        if (solver.implies(newPred, oldPred)) {
          lowestImplied = i;
          break;
        }

      }

    }
  }

  /**
   * Insertion method of scheffel.
   *
   * Inserts a new predicate next to the predicate of the partition that is most similar to the new one.
   *
   * @param newPred the new predicate that should be inserted.
   */
  private void insertPredicateBySimilarity(AbstractionPredicate newPred) {
    // first update the predicate similarities
    updatePredicateSimilarities(newPred);

    // calculate the predicate that is most similar to the new one
    ArrayList<Integer> similarities = similarityRelation.get(newPred.getVariableNumber());
    ArrayList<Integer> similaritiesSortedHighLow = new ArrayList<>(similarities);
    Collections.sort(similaritiesSortedHighLow, Collections.reverseOrder());
    AbstractionPredicate mostSimilarPredicate = varIDToPredicate.get(similaritiesSortedHighLow.get(0));
    int indexSimilarPred = predicates.indexOf(mostSimilarPredicate);

    // the new predicate is inserted before the most similar if it contains more variables else it's the other way round
    if (fmgr.extractVariableNames(mostSimilarPredicate.getSymbolicAtom()).size() <
        fmgr.extractVariableNames(newPred.getSymbolicAtom()).size()) {
      predicates.add(indexSimilarPred, newPred);
    } else {
      predicates.add(indexSimilarPred + 1, newPred);
    }

    varIDToPredicate.put(newPred.getVariableNumber(), newPred);
  }

  /**
   * Calculates the similarity of the new predicate and old predicates in the partition and updates the similarity
   * relationship.
   *
   * @param newPredicate the new predicated that arrived.
   */
  private void updatePredicateSimilarities(AbstractionPredicate newPredicate) {
    int numberOfPredicates = similarityRelation.size();
    ArrayList<Integer> similarities = new ArrayList<>(numberOfPredicates);
    Set<String> varsInNewPred = fmgr.extractVariableNames(newPredicate.getSymbolicAtom());

    // calculate for each of the old predicates the number of variables the old and the new predicate have in common
    for (AbstractionPredicate predInPartition : predicates) {
      Set<String> varsInPrevPred = fmgr.extractVariableNames(predInPartition.getSymbolicAtom());
      int index = predInPartition.getVariableNumber();
      // the similarity is equal to the number of variables the predicates have in common
      varsInPrevPred.retainAll(varsInNewPred);
      Integer similarity = varsInPrevPred.size();
      ArrayList<Integer> similaritiesPrevPred = similarityRelation.get(index);
      similaritiesPrevPred.add(similarity);
      similarities.add(index, similarity);
    }

    similarities.add(0);
    similarityRelation.add(similarities);
  }

  // @TODO: Hier muss überlegt werden wie gemerged wird. Ggf. ist die updatePartitions Methode des AbstractionManagers
  // anzupassen.
  public PredicatePartition merge(PredicatePartition newPreds) {
    if (this.partitionID != newPreds.getPartitionID()) {
      // 1. Für Implikationen wohl interessant: Werden Partionen einfach zusammengefügt und dann wird das neue Prädikat an
      // der richtigen Stelle eingefügt?
      // 2. Für Similarities interessant: Soll das neue Prädikat zwischen zwei Partionen eingefügt werden?
    }

    return this;
  }

  public int getPartitionID() {
    return partitionID;
  }

  public ArrayList<AbstractionPredicate> getPredicates() {
    return predicates;
  }
}