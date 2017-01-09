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
package org.sosy_lab.cpachecker.cmdline;

import java.io.IOException;
import java.io.Writer;
import java.nio.charset.Charset;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Collection;
import org.sosy_lab.common.ShutdownNotifier;
import org.sosy_lab.common.configuration.Configuration;
import org.sosy_lab.common.configuration.ConfigurationBuilder;
import org.sosy_lab.common.configuration.InvalidConfigurationException;
import org.sosy_lab.common.io.MoreFiles;
import org.sosy_lab.common.log.LogManager;
import org.sosy_lab.cpachecker.cfa.CFA;
import org.sosy_lab.cpachecker.cfa.CFACreator;
import org.sosy_lab.cpachecker.cfa.CProgramScope;
import org.sosy_lab.cpachecker.cfa.Language;
import org.sosy_lab.cpachecker.cfa.parser.Scope;
import org.sosy_lab.cpachecker.cfa.types.MachineModel;
import org.sosy_lab.cpachecker.cpa.automaton.Automaton;
import org.sosy_lab.cpachecker.exceptions.ParserException;

public class CPAMain2 {

  @SuppressWarnings("resource") // We don't close LogManager
  public static void main(String[] args) throws InvalidConfigurationException, IOException, ParserException, InterruptedException {
    if (args.length == 0) {
      System.err.println("Enter Automaton file name required.");
      System.err.println("Aborting.");
      return ;
    }
    String filename = args[1];
    Path pInputFile = Paths.get(filename);

    ConfigurationBuilder builder = Configuration.builder();
    builder.copyFrom(Configuration.defaultConfiguration())
      .setOption("cfa.export", "false")
      .setOption("cfa.exportPerFunction", "false")
      .setOption("cfa.callgraph.export", "false");

    Configuration config = builder.build();
    LogManager pLogger = LogManager.createNullLogManager();
    MachineModel pMachine = MachineModel.LINUX32;
    ShutdownNotifier shutdownNotifier = ShutdownNotifier.createDummy();
    CFACreator cfaCreator = new CFACreator(config, pLogger, shutdownNotifier);

    ArrayList<String> filenames = new ArrayList<>();
    filenames.add(args[0]);
    CFA cfa = cfaCreator.parseFileAndCreateCFA(filenames);
    Scope scope = new CProgramScope(cfa, pLogger);
    Language pLanguage = Language.C;
    Collection<Automaton> automata =
        org.sosy_lab.cpachecker.cpa.automaton.AutomatonParser.parseAutomatonFile(
            pInputFile,
            config,
            pLogger,
            pMachine,
            scope,
            pLanguage);
    for (Automaton automaton : automata) {
      automaton.propagateTrueStates();
      automaton.pruneDisconnectedFromTrue();
      try (Writer w = MoreFiles.openOutputFile(Paths.get(filename + ".pruned"), Charset.defaultCharset())) {
        automaton.writeSpecFile(w);
      }
    }

  }

  private CPAMain2() { } // prevent instantiation

}