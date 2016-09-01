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
package org.sosy_lab.cpachecker.cfa.postprocessing.function;

import com.google.common.base.Verify;

import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.cfa.CFACreationUtils;
import org.sosy_lab.cpachecker.cfa.CParser;
import org.sosy_lab.cpachecker.cfa.CProgramScope;
import org.sosy_lab.cpachecker.cfa.MutableCFA;
import org.sosy_lab.cpachecker.cfa.ast.AFunctionDeclaration;
import org.sosy_lab.cpachecker.cfa.ast.FileLocation;
import org.sosy_lab.cpachecker.cfa.ast.c.CAssignment;
import org.sosy_lab.cpachecker.cfa.ast.c.CDeclaration;
import org.sosy_lab.cpachecker.cfa.ast.c.CExpression;
import org.sosy_lab.cpachecker.cfa.ast.c.CExpressionAssignmentStatement;
import org.sosy_lab.cpachecker.cfa.ast.c.CIdExpression;
import org.sosy_lab.cpachecker.cfa.ast.c.CInitializerExpression;
import org.sosy_lab.cpachecker.cfa.ast.c.CIntegerLiteralExpression;
import org.sosy_lab.cpachecker.cfa.ast.c.CLeftHandSide;
import org.sosy_lab.cpachecker.cfa.ast.c.CReturnStatement;
import org.sosy_lab.cpachecker.cfa.ast.c.CStatement;
import org.sosy_lab.cpachecker.cfa.ast.c.CVariableDeclaration;
import org.sosy_lab.cpachecker.cfa.model.AReturnStatementEdge;
import org.sosy_lab.cpachecker.cfa.model.BlankEdge;
import org.sosy_lab.cpachecker.cfa.model.CFAEdge;
import org.sosy_lab.cpachecker.cfa.model.CFANode;
import org.sosy_lab.cpachecker.cfa.model.FunctionEntryNode;
import org.sosy_lab.cpachecker.cfa.model.FunctionExitNode;
import org.sosy_lab.cpachecker.cfa.model.c.CAssumeEdge;
import org.sosy_lab.cpachecker.cfa.model.c.CDeclarationEdge;
import org.sosy_lab.cpachecker.cfa.model.c.CLabelNode;
import org.sosy_lab.cpachecker.cfa.model.c.CReturnStatementEdge;
import org.sosy_lab.cpachecker.cfa.model.c.CStatementEdge;
import org.sosy_lab.cpachecker.cfa.parser.Scope;
import org.sosy_lab.cpachecker.cfa.types.MachineModel;
import org.sosy_lab.cpachecker.cfa.types.c.CStorageClass;
import org.sosy_lab.cpachecker.cfa.types.c.CType;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Optional;
import java.util.Queue;
import java.util.Set;
import java.util.logging.Level;


/******************************************************************+
 * UniqueReturnWithLabel
 *
 * Using uniqueReturnWithLabel, every method has a unique return
 * which is immediately preceded by the label return_<method_name>,
 * where <method_name> is replaced by the name of the method.
 * Furthermore, the return statement will be exactly
 * "return ret_value_<method_name>;" except when the method is void.
 */
public class UniqueReturnWithLabel {
  private final LogManager logger;
  private Configuration config;
  private MachineModel machine;

  public UniqueReturnWithLabel(LogManager pLogger, Configuration pConfig, MachineModel pMachine) throws InvalidConfigurationException {
    config = pConfig;

    logger = pLogger;
    machine = pMachine;
  }

  private List<CFAEdge> edgesLeadingToFunctionExit(final MutableCFA cfa, String function) {
    Queue<CFANode> q = new LinkedList<>();
    Set<CFANode> visited = new HashSet<>();
    q.add(cfa.getFunctionHead(function));

    List<CFAEdge> returnStatementEdges = new LinkedList<>();
    while (!q.isEmpty()) {
      CFANode current = q.peek();
      q.remove();

      for (int i = 0; i < current.getNumLeavingEdges(); ++i) {
        CFAEdge edge = current.getLeavingEdge(i);
        if (edge.getSuccessor() instanceof FunctionExitNode) {
          // Don't follow return statement edges, because they leave the function.
          returnStatementEdges.add(edge);
        }
        else {
          CFANode succ = edge.getSuccessor();
          if (!visited.contains(succ)) {
            q.add(succ);
            visited.add(succ);
          }
        }
      }
    }

    return returnStatementEdges;
  }
  public void createUniqueReturnWithLabel(final MutableCFA cfa) throws Exception {
    CParser parser = CParser.Factory.getParser(config, logger, CParser.Factory.getOptions(config), machine);

    for (final String function : cfa.getAllFunctionNames()) {
      final AFunctionDeclaration functionDef = cfa.getFunctionHead(function).getFunctionDefinition();

      Scope scope = new CProgramScope(cfa, logger);
      List<CFAEdge> returnEdges = edgesLeadingToFunctionExit(cfa, function);
      if (returnEdges.isEmpty()) {
        logger.log(Level.INFO, "There are no control flow edges leaving from method '" + function + "'.");
        continue;
      }

      // Cannot fail, by definition of the edges returned.
      FunctionExitNode exitNode = (FunctionExitNode) returnEdges.get(0).getSuccessor();

      String functionReturnType = functionDef.getType().getReturnType().toString();
      String new_ret_variable = "ret_value_" + function;
      CDeclaration new_ret_variable_decl = null;

      if (!functionReturnType.equals("void")) {
        for (CFAEdge e : returnEdges) {
          Verify.verify(
              e instanceof AReturnStatementEdge,
              "Not yet supporting non-void methods (" + function + ") with no explicit return expression.");
        }
        assert cfa.getFunctionHead(function).getNumLeavingEdges() == 1;
        FunctionEntryNode entryNode = cfa.getFunctionHead(function);
        final CFANode dummy = new CFANode(function);
        cfa.addNode(dummy);
        final CFAEdge firstEdge = entryNode.getLeavingEdge(0);
        final CFANode succ = entryNode.getLeavingEdge(0).getSuccessor();
        succ.removeEnteringEdge(firstEdge);
        entryNode.removeLeavingEdge(firstEdge);
        CFAEdge newEdge = createOldEdgeWithNewNodes(entryNode, dummy, firstEdge);
        CFACreationUtils.addEdgeUnconditionallyToCFA(newEdge);

        new_ret_variable_decl =
            new CVariableDeclaration(
                FileLocation.DUMMY,
                false,
                CStorageClass.AUTO,
                (CType) functionDef.getType().getReturnType(),
                new_ret_variable,
                new_ret_variable /* origName */,
                new_ret_variable /* qualifiedName */,
                new CInitializerExpression(
                    FileLocation.DUMMY,
                    CIntegerLiteralExpression.ZERO));

        // TODO(rcastano) check if first parameter is ok, not sure what's expected
        String rawSignature = functionReturnType + " " + new_ret_variable + ";";
        CFAEdge ret_var_decl_edge =
            new CDeclarationEdge(rawSignature, FileLocation.DUMMY, dummy, succ, new_ret_variable_decl);
        CFACreationUtils.addEdgeUnconditionallyToCFA(ret_var_decl_edge);
      }


      // Create a trailing exit section at the end of the method:
      // unique_return_<method_name>:
      //   return ret_value_<method_name>;
      //
      // The CFANode corresponding to the head of this section is <labelNode>.
      String labelStr = "unique_return_" + function;
      final CFANode labelNode = new CLabelNode(function, labelStr);
      CVariableDeclaration builtin_ret_var = null;
      if (!functionReturnType.equals("void")) {
        cfa.getFunctionHead(function).getReturnVariable().isPresent();
        builtin_ret_var = (CVariableDeclaration) cfa.getFunctionHead(function).getReturnVariable().get();
      }

      StringBuilder rawReturnStatement = new StringBuilder();
      rawReturnStatement.append(labelStr + ": ");
      rawReturnStatement.append("return ");
      if (!functionReturnType.equals("void")) {
        rawReturnStatement.append(new_ret_variable);
      }
      rawReturnStatement.append(";");

      java.util.Optional<CAssignment> assignment_expr = java.util.Optional.empty();
      java.util.Optional<CExpression> var_expr = java.util.Optional.empty();
      if (!functionReturnType.equals("void")) {
        // Return statements need an assignment to a builtin return variable
        var_expr = Optional.of(new CIdExpression(FileLocation.DUMMY, new_ret_variable_decl));
        CLeftHandSide leftHandSide = new CIdExpression(FileLocation.DUMMY, builtin_ret_var);
        assignment_expr = java.util.Optional.of(new CExpressionAssignmentStatement(FileLocation.DUMMY, leftHandSide, var_expr.get()));
      }
      CReturnStatement returnRawAST = new org.sosy_lab.cpachecker.cfa.ast.c.CReturnStatement(FileLocation.DUMMY, var_expr, assignment_expr);

      final CFAEdge endEdge =
          new CReturnStatementEdge(
              rawReturnStatement.toString(),
              returnRawAST,
              FileLocation.DUMMY,
              labelNode,
              exitNode);
      cfa.addNode(labelNode);
      CFACreationUtils.addEdgeUnconditionallyToCFA(endEdge);

      for (CFAEdge edge: returnEdges) {
        edge.getPredecessor().removeLeavingEdge(edge);
        edge.getSuccessor().removeEnteringEdge(edge);
        /* <nodeBeforeGoto> is assigned different values depending on
         * whether the return type is void */
        CFANode nodeBeforeGoto = null;
        if (!functionReturnType.equals("void")) {
          nodeBeforeGoto = new CFANode(function);
          cfa.addNode(nodeBeforeGoto);

          CExpression expr = (CExpression) ((AReturnStatementEdge) edge).getExpression().get();

          CStatement statement =
              new CExpressionAssignmentStatement(
                  edge.getFileLocation(),
                  new CIdExpression(FileLocation.DUMMY, new_ret_variable_decl),
                  expr);
          // TODO(rcastano): Check whether the first parameter is ok.
          String rawSignature = new_ret_variable + "=" + expr.toString() + ";";
          CFAEdge assignment_edge =
              new CStatementEdge(
                  rawSignature,
                  statement,
                  edge.getFileLocation(),
                  edge.getPredecessor(),
                  nodeBeforeGoto);
          CFACreationUtils.addEdgeUnconditionallyToCFA(assignment_edge);
        } else
        {
          nodeBeforeGoto = edge.getPredecessor();
        }
        CFAEdge newEdge =
            new BlankEdge(
                "Goto: " + labelStr, edge.getFileLocation(), nodeBeforeGoto, labelNode, "unique-return-goto");
        CFACreationUtils.addEdgeUnconditionallyToCFA(newEdge);
      }
    }
  }

  // Copied from NullPointerChecks
  private static CFAEdge createOldEdgeWithNewNodes(CFANode predecessor, CFANode successor, CFAEdge edge) {
    switch (edge.getEdgeType()) {
    case AssumeEdge:
      return new CAssumeEdge(edge.getRawStatement(), edge.getFileLocation(),
                             predecessor, successor, ((CAssumeEdge)edge).getExpression(),
                             ((CAssumeEdge)edge).getTruthAssumption());
    case ReturnStatementEdge:
      return new CReturnStatementEdge(edge.getRawStatement(),
                                      ((CReturnStatementEdge)edge).getRawAST().get(),
                                      edge.getFileLocation(), predecessor,
                                      ((CReturnStatementEdge)edge).getSuccessor());
    case StatementEdge:
      return new CStatementEdge(edge.getRawStatement(), ((CStatementEdge)edge).getStatement(),
                                edge.getFileLocation(), predecessor, successor);
    case DeclarationEdge:
      return new CDeclarationEdge(edge.getRawStatement(), edge.getFileLocation(),
                                  predecessor, successor,
                                  ((CDeclarationEdge)edge).getDeclaration());
    case BlankEdge:
      return new BlankEdge(edge.getRawStatement(), edge.getFileLocation(),
                                  predecessor, successor,
                                  ((BlankEdge)edge).getDescription());
    case CallToReturnEdge:
      throw new AssertionError();
    default:

      throw new AssertionError("more edge types valid than expected, more work to do here: " + edge.getEdgeType());
    }
  }
}

