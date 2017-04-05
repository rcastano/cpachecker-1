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

import com.google.common.collect.Maps;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.regex.Matcher;
import org.sosy_lab.common.configuration.InvalidConfigurationException;

@SuppressFBWarnings(value = "VA_FORMAT_STRING_USES_NEWLINE",
    justification = "consistent Unix-style line endings")
public class Automaton {
  private final String name;
  /* The internal variables used by the actions/ assignments of this automaton.
   * This reference of the Map is unused because the actions/assignments get their reference from the parser.
   */
  private final Map<String, AutomatonVariable> initVars;
  private final List<AutomatonInternalState> states;
  private final AutomatonInternalState initState;

  public Automaton(String pName, Map<String, AutomatonVariable> pVars, List<AutomatonInternalState> pStates,
      String pInitialStateName) throws InvalidAutomatonException {
    this.name = pName;
    this.initVars = pVars;
    this.states = pStates;

    Map<String, AutomatonInternalState> statesMap = Maps.newHashMapWithExpectedSize(pStates.size());
    for (AutomatonInternalState s : pStates) {
      if (statesMap.put(s.getName(), s) != null) {
        throw new InvalidAutomatonException("State " + s.getName() + " exists twice in automaton " + pName);
      }
    }

    initState = statesMap.get(pInitialStateName);
    if (initState == null) {
      throw new InvalidAutomatonException("Inital state " + pInitialStateName + " not found in automaton " + pName);
    }

    // set the FollowStates of all Transitions
    for (AutomatonInternalState s : pStates) {
      s.setFollowStates(statesMap);
    }
  }

  public List<AutomatonInternalState> getStates() {
    return states;
  }

  public String getName() {
    return name;
  }

  public AutomatonInternalState getInitialState() {
    return initState;
  }

  public int getNumberOfStates() {
    return states.size();
  }

  /**
   * Prints the contents of a specification file representing this automaton to the PrintStream.
   * @param pOut the appendable to write to
   */
  public void writeSpecFile(Appendable pOut) throws IOException {
    pOut.append("CONTROL AUTOMATON " + name + "\n");
    pOut.append("INITIAL STATE " + initState.getName() + ";\n");


    for (AutomatonInternalState s : states) {

      pOut.append("STATE ");
      if (!s.isNonDetState()) {
        pOut.append("USEFIRST ");
      }
      pOut.append(s.getName() + " :\n");

      for (AutomatonTransition t : s.getTransitions()) {
        pOut.append(t.toSpecString() + "\n");
      }
      pOut.append("\n");
    }


    pOut.append("END AUTOMATON\n");
  }

  /**
   * Prints the contents of a DOT file representing this automaton to the PrintStream.
   * @param pOut the appendable to write to
   */
  void writeDotFile(Appendable pOut) throws IOException {
    pOut.append("digraph " + name + "{\n");

    boolean errorState = false;
    boolean bottomState = false;

    for (AutomatonInternalState s : states) {
      String color = initState.equals(s) ? "green" : "black";

      pOut.append(formatState(s, color));

      for (AutomatonTransition t : s.getTransitions()) {
        pOut.append(formatTransition(s, t));

        errorState = errorState || t.getFollowState().equals(AutomatonInternalState.ERROR);
        bottomState = bottomState || t.getFollowState().equals(AutomatonInternalState.BOTTOM);
      }
    }

    if (errorState) {
      pOut.append(formatState(AutomatonInternalState.ERROR, "red"));
    }

    if (bottomState) {
      pOut.append(formatState(AutomatonInternalState.BOTTOM, "red"));
    }
    pOut.append("}\n");
  }

  private static String formatState(AutomatonInternalState s, String color) {
    String name = s.getName().replace("_predefinedState_", "");
    String shape = s.getDoesMatchAll() ? "doublecircle" : "circle";
    return String.format("%d [shape=\"" + shape + "\" color=\"%s\" label=\"%s\"]\n", s.getStateId(), color, name);
  }

  private static String formatTransition(AutomatonInternalState sourceState, AutomatonTransition t) {
    return String.format("%d -> %d [label=\"%s\"]\n", sourceState.getStateId(), t.getFollowState().getStateId(), t.toString().replaceAll("\"", Matcher.quoteReplacement("\\\"")));
  }


  public Map<String, AutomatonVariable> getInitialVariables() {
    return initVars;
  }

  /**
   * Assert this automaton fulfills the requirements of an ObserverAutomaton.
   * This means the Automaton does not modify other CPAs (Keyword MODIFY) and does not use the BOTTOM element (Keyword STOP).
   * @throws InvalidConfigurationException if the requirements are not fulfilled
   */
  public void assertObserverAutomaton() throws InvalidConfigurationException {
    for (AutomatonInternalState s : this.states) {
        for (AutomatonTransition t : s.getTransitions()) {
          if (!t.meetsObserverRequirements()) {
            throw new InvalidConfigurationException("The transition " + t
                + " in state \"" + s + "\" is not valid for an ObserverAutomaton.");
          }
        }
      }
    }



  /**
   * Propagates {@link AutomatonInternalState#couldReachTrue} backwards from __TRUE states.
   * Therefore, only states that cannot reach __TRUE will have
   * {@link AutomatonInternalState#couldReachTrue} set to false.
   */
  public void propagateTrueStates() {
    while (true) {
      boolean propagated = false;
      for (AutomatonInternalState s : states) {
        if (!s.couldReachTrue) {
          if (s.getName().equals("__TRUE")) {
            propagated = true;
            s.couldReachTrue = true;
          }
          for (AutomatonTransition t : s.getTransitions()) {
            if (t.getFollowState().couldReachTrue && !t.getTrigger().equals(AutomatonBoolExpr.TRUE)) {
              propagated = true;
              s.couldReachTrue = true;
            }
          }
        }
      }
      if (!propagated) {
        break;
      }
    }
  }

  /**
   * Removes states with {@link AutomatonInternalState#couldReachTrue} set to false.
   * {@link Automaton#propagateTrueStates()} should be called beforehand.
   */
  public void pruneDisconnectedFromTrue() {
    // I don't want to remove all states that cannot reach true because
    // these help prune the search space. However, I want to collapse them.
    // I need to find those states that cannot reach true but are
    // immediate successors of states that can reach true.
    // I'll store these states in "states_to_be_kept".
    HashSet<AutomatonInternalState> states_to_be_kept = new HashSet<>();
    states_to_be_kept.add(AutomatonInternalState.BOTTOM);
    states_to_be_kept.add(AutomatonInternalState.BREAK);
    states_to_be_kept.add(AutomatonInternalState.ERROR);
    states_to_be_kept.add(initState);

    AutomatonInternalState falseState = null;

    for (AutomatonInternalState s : states) {
      if (s.getName().equals("__FALSE")) {
        falseState = s;
      }
      if (!s.couldReachTrue) {
        continue;
      }
      for (AutomatonTransition t : s.getTransitions()) {
        if (!t.getFollowState().couldReachTrue) {
          states_to_be_kept.add(t.getFollowState());
        }
      }
    }

    states_to_be_kept.add(falseState);

    ListIterator<AutomatonInternalState> state_it = states.listIterator();
    while (state_it.hasNext()) {
      final AutomatonInternalState state = state_it.next();
      if (state.couldReachTrue) {
        ListIterator<AutomatonTransition> transition_it = state.getTransitions().listIterator();
        while (transition_it.hasNext()) {
          final AutomatonTransition transition = transition_it.next();
          final AutomatonInternalState succ = transition.getFollowState();
          if (!succ.couldReachTrue && !states_to_be_kept.contains(succ)) {
            transition_it.remove();
          }
        }
      } else {
        if (!states_to_be_kept.contains(state)) {
          state_it.remove();
        } else {
          state.getTransitions().clear();
          AutomatonBoolExpr pTrigger = AutomatonBoolExpr.TRUE;
          List<AutomatonBoolExpr> pAssertions = new ArrayList<>();
          List<AutomatonAction> pActions = new ArrayList<>();
          AutomatonTransition t =
              new AutomatonTransition(
                  pTrigger,
                  pAssertions,
                  pActions,
                  falseState);
          state.getTransitions().add(t);
        }
      }
    }
  }

}
