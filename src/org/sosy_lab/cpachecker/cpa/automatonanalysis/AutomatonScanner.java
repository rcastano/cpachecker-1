/* The following code was generated by JFlex 1.4.3 on 17.06.10 13:33 */

package org.sosy_lab.cpachecker.cpa.automatonanalysis;

import java.io.FileReader;
import java.io.File;
import java_cup.runtime.*;
import org.sosy_lab.common.Files;
import org.sosy_lab.common.configuration.Configuration;
import java.io.FileNotFoundException;
@SuppressWarnings(value = { "all" })

/**
 * This class is a scanner generated by 
 * <a href="http://www.jflex.de/">JFlex</a> 1.4.3
 * on 17.06.10 13:33 from the specification file
 * <tt>D:/Meine Dateien/Uni/Vorlesungen 0910/Software Analyse/CPA/CPAchecker/src/org/sosy_lab/cpachecker/cpa/automatonanalysis/Scanner.jflex</tt>
 */
class AutomatonScanner implements java_cup.runtime.Scanner, AutomatonSym {

  /** This character denotes the end of file */
  public static final int YYEOF = -1;

  /** initial size of the lookahead buffer */
  private static final int ZZ_BUFFERSIZE = 16384;

  /** lexical states */
  public static final int STRING = 2;
  public static final int YYINITIAL = 0;
  public static final int SQUAREEXPR = 6;
  public static final int CURLYEXPR = 4;

  /**
   * ZZ_LEXSTATE[l] is the state in the DFA for the lexical state l
   * ZZ_LEXSTATE[l+1] is the state in the DFA for the lexical state l
   *                  at the beginning of a line
   * l is of the form l = 2*k, k a non negative integer
   */
  private static final int ZZ_LEXSTATE[] = { 
     0,  0,  1,  1,  2,  2,  3, 3
  };

  /** 
   * Translates characters to character classes
   */
  private static final String ZZ_CMAP_PACKED = 
    "\11\7\1\3\1\2\1\0\1\3\1\1\16\7\4\0\1\3\1\65"+
    "\1\62\1\12\1\6\1\0\1\67\1\0\1\24\1\25\1\5\1\71"+
    "\1\0\1\26\1\0\1\4\1\10\11\11\1\23\1\22\1\0\1\66"+
    "\1\27\2\0\1\30\1\40\1\44\1\37\1\36\1\52\1\54\1\50"+
    "\1\46\1\6\1\51\1\45\1\34\1\35\1\33\1\47\1\6\1\42"+
    "\1\41\1\32\1\31\1\43\2\6\1\53\1\6\1\64\1\72\1\74"+
    "\1\0\1\6\1\0\1\60\1\6\1\15\1\20\1\21\1\57\2\6"+
    "\1\13\2\6\1\16\1\6\1\14\3\6\1\56\1\61\1\55\1\17"+
    "\5\6\1\63\1\70\1\73\1\0\41\7\2\0\4\6\4\0\1\6"+
    "\2\0\1\7\7\0\1\6\4\0\1\6\5\0\27\6\1\0\37\6"+
    "\1\0\u013f\6\31\0\162\6\4\0\14\6\16\0\5\6\11\0\1\6"+
    "\21\0\130\7\5\0\23\7\12\0\1\6\13\0\1\6\1\0\3\6"+
    "\1\0\1\6\1\0\24\6\1\0\54\6\1\0\46\6\1\0\5\6"+
    "\4\0\202\6\1\0\4\7\3\0\105\6\1\0\46\6\2\0\2\6"+
    "\6\0\20\6\41\0\46\6\2\0\1\6\7\0\47\6\11\0\21\7"+
    "\1\0\27\7\1\0\3\7\1\0\1\7\1\0\2\7\1\0\1\7"+
    "\13\0\33\6\5\0\3\6\15\0\4\7\14\0\6\7\13\0\32\6"+
    "\5\0\13\6\16\7\7\0\12\7\4\0\2\6\1\7\143\6\1\0"+
    "\1\6\10\7\1\0\6\7\2\6\2\7\1\0\4\7\2\6\12\7"+
    "\3\6\2\0\1\6\17\0\1\7\1\6\1\7\36\6\33\7\2\0"+
    "\3\6\60\0\46\6\13\7\1\6\u014f\0\3\7\66\6\2\0\1\7"+
    "\1\6\20\7\2\0\1\6\4\7\3\0\12\6\2\7\2\0\12\7"+
    "\21\0\3\7\1\0\10\6\2\0\2\6\2\0\26\6\1\0\7\6"+
    "\1\0\1\6\3\0\4\6\2\0\1\7\1\6\7\7\2\0\2\7"+
    "\2\0\3\7\11\0\1\7\4\0\2\6\1\0\3\6\2\7\2\0"+
    "\12\7\4\6\15\0\3\7\1\0\6\6\4\0\2\6\2\0\26\6"+
    "\1\0\7\6\1\0\2\6\1\0\2\6\1\0\2\6\2\0\1\7"+
    "\1\0\5\7\4\0\2\7\2\0\3\7\13\0\4\6\1\0\1\6"+
    "\7\0\14\7\3\6\14\0\3\7\1\0\11\6\1\0\3\6\1\0"+
    "\26\6\1\0\7\6\1\0\2\6\1\0\5\6\2\0\1\7\1\6"+
    "\10\7\1\0\3\7\1\0\3\7\2\0\1\6\17\0\2\6\2\7"+
    "\2\0\12\7\1\0\1\6\17\0\3\7\1\0\10\6\2\0\2\6"+
    "\2\0\26\6\1\0\7\6\1\0\2\6\1\0\5\6\2\0\1\7"+
    "\1\6\6\7\3\0\2\7\2\0\3\7\10\0\2\7\4\0\2\6"+
    "\1\0\3\6\4\0\12\7\1\0\1\6\20\0\1\7\1\6\1\0"+
    "\6\6\3\0\3\6\1\0\4\6\3\0\2\6\1\0\1\6\1\0"+
    "\2\6\3\0\2\6\3\0\3\6\3\0\10\6\1\0\3\6\4\0"+
    "\5\7\3\0\3\7\1\0\4\7\11\0\1\7\17\0\11\7\11\0"+
    "\1\6\7\0\3\7\1\0\10\6\1\0\3\6\1\0\27\6\1\0"+
    "\12\6\1\0\5\6\4\0\7\7\1\0\3\7\1\0\4\7\7\0"+
    "\2\7\11\0\2\6\4\0\12\7\22\0\2\7\1\0\10\6\1\0"+
    "\3\6\1\0\27\6\1\0\12\6\1\0\5\6\2\0\1\7\1\6"+
    "\7\7\1\0\3\7\1\0\4\7\7\0\2\7\7\0\1\6\1\0"+
    "\2\6\4\0\12\7\22\0\2\7\1\0\10\6\1\0\3\6\1\0"+
    "\27\6\1\0\20\6\4\0\6\7\2\0\3\7\1\0\4\7\11\0"+
    "\1\7\10\0\2\6\4\0\12\7\22\0\2\7\1\0\22\6\3\0"+
    "\30\6\1\0\11\6\1\0\1\6\2\0\7\6\3\0\1\7\4\0"+
    "\6\7\1\0\1\7\1\0\10\7\22\0\2\7\15\0\60\6\1\7"+
    "\2\6\7\7\4\0\10\6\10\7\1\0\12\7\47\0\2\6\1\0"+
    "\1\6\2\0\2\6\1\0\1\6\2\0\1\6\6\0\4\6\1\0"+
    "\7\6\1\0\3\6\1\0\1\6\1\0\1\6\2\0\2\6\1\0"+
    "\4\6\1\7\2\6\6\7\1\0\2\7\1\6\2\0\5\6\1\0"+
    "\1\6\1\0\6\7\2\0\12\7\2\0\2\6\42\0\1\6\27\0"+
    "\2\7\6\0\12\7\13\0\1\7\1\0\1\7\1\0\1\7\4\0"+
    "\2\7\10\6\1\0\42\6\6\0\24\7\1\0\2\7\4\6\4\0"+
    "\10\7\1\0\44\7\11\0\1\7\71\0\42\6\1\0\5\6\1\0"+
    "\2\6\1\0\7\7\3\0\4\7\6\0\12\7\6\0\6\6\4\7"+
    "\106\0\46\6\12\0\51\6\7\0\132\6\5\0\104\6\5\0\122\6"+
    "\6\0\7\6\1\0\77\6\1\0\1\6\1\0\4\6\2\0\7\6"+
    "\1\0\1\6\1\0\4\6\2\0\47\6\1\0\1\6\1\0\4\6"+
    "\2\0\37\6\1\0\1\6\1\0\4\6\2\0\7\6\1\0\1\6"+
    "\1\0\4\6\2\0\7\6\1\0\7\6\1\0\27\6\1\0\37\6"+
    "\1\0\1\6\1\0\4\6\2\0\7\6\1\0\47\6\1\0\23\6"+
    "\16\0\11\7\56\0\125\6\14\0\u026c\6\2\0\10\6\12\0\32\6"+
    "\5\0\113\6\3\0\3\6\17\0\15\6\1\0\4\6\3\7\13\0"+
    "\22\6\3\7\13\0\22\6\2\7\14\0\15\6\1\0\3\6\1\0"+
    "\2\7\14\0\64\6\40\7\3\0\1\6\3\0\2\6\1\7\2\0"+
    "\12\7\41\0\3\7\2\0\12\7\6\0\130\6\10\0\51\6\1\7"+
    "\126\0\35\6\3\0\14\7\4\0\14\7\12\0\12\7\36\6\2\0"+
    "\5\6\u038b\0\154\6\224\0\234\6\4\0\132\6\6\0\26\6\2\0"+
    "\6\6\2\0\46\6\2\0\6\6\2\0\10\6\1\0\1\6\1\0"+
    "\1\6\1\0\1\6\1\0\37\6\2\0\65\6\1\0\7\6\1\0"+
    "\1\6\3\0\3\6\1\0\7\6\3\0\4\6\2\0\6\6\4\0"+
    "\15\6\5\0\3\6\1\0\7\6\17\0\4\7\32\0\5\7\20\0"+
    "\2\6\23\0\1\6\13\0\4\7\6\0\6\7\1\0\1\6\15\0"+
    "\1\6\40\0\22\6\36\0\15\7\4\0\1\7\3\0\6\7\27\0"+
    "\1\6\4\0\1\6\2\0\12\6\1\0\1\6\3\0\5\6\6\0"+
    "\1\6\1\0\1\6\1\0\1\6\1\0\4\6\1\0\3\6\1\0"+
    "\7\6\3\0\3\6\5\0\5\6\26\0\44\6\u0e81\0\3\6\31\0"+
    "\11\6\6\7\1\0\5\6\2\0\5\6\4\0\126\6\2\0\2\7"+
    "\2\0\3\6\1\0\137\6\5\0\50\6\4\0\136\6\21\0\30\6"+
    "\70\0\20\6\u0200\0\u19b6\6\112\0\u51a6\6\132\0\u048d\6\u0773\0\u2ba4\6"+
    "\u215c\0\u012e\6\2\0\73\6\225\0\7\6\14\0\5\6\5\0\1\6"+
    "\1\7\12\6\1\0\15\6\1\0\5\6\1\0\1\6\1\0\2\6"+
    "\1\0\2\6\1\0\154\6\41\0\u016b\6\22\0\100\6\2\0\66\6"+
    "\50\0\15\6\3\0\20\7\20\0\4\7\17\0\2\6\30\0\3\6"+
    "\31\0\1\6\6\0\5\6\1\0\207\6\2\0\1\7\4\0\1\6"+
    "\13\0\12\7\7\0\32\6\4\0\1\6\1\0\32\6\12\0\132\6"+
    "\3\0\6\6\2\0\6\6\2\0\6\6\2\0\3\6\3\0\2\6"+
    "\3\0\2\6\22\0\3\7\4\0";

  /** 
   * Translates characters to character classes
   */
  private static final char [] ZZ_CMAP = zzUnpackCMap(ZZ_CMAP_PACKED);

  /** 
   * Translates DFA states to action switch labels.
   */
  private static final int [] ZZ_ACTION = zzUnpackAction();

  private static final String ZZ_ACTION_PACKED_0 =
    "\4\0\1\1\2\2\1\1\1\3\2\4\1\1\1\5"+
    "\1\6\1\7\1\10\1\11\20\3\1\12\1\13\1\14"+
    "\1\15\1\16\2\1\1\17\1\20\1\21\1\22\1\20"+
    "\1\22\1\23\1\20\1\22\1\24\3\0\1\25\12\3"+
    "\1\26\13\3\1\27\1\30\1\31\1\32\1\33\1\34"+
    "\1\35\1\36\1\37\1\40\1\2\3\0\7\3\1\41"+
    "\16\3\2\0\2\3\1\42\5\3\1\43\1\3\1\44"+
    "\7\3\1\45\1\3\1\0\3\3\1\46\2\3\1\47"+
    "\1\50\1\3\1\51\1\52\1\53\1\3\1\54\1\55"+
    "\1\0\1\3\1\56\1\3\1\57\1\60\2\3\1\0"+
    "\2\3\1\61\1\62\1\0\1\3\1\63\1\64\1\65";

  private static int [] zzUnpackAction() {
    int [] result = new int[168];
    int offset = 0;
    offset = zzUnpackAction(ZZ_ACTION_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackAction(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }


  /** 
   * Translates a state to a row index in the transition table
   */
  private static final int [] ZZ_ROWMAP = zzUnpackRowMap();

  private static final String ZZ_ROWMAP_PACKED_0 =
    "\0\0\0\75\0\172\0\267\0\364\0\u0131\0\364\0\u016e"+
    "\0\u01ab\0\364\0\u01e8\0\u0225\0\364\0\364\0\364\0\364"+
    "\0\u0262\0\u029f\0\u02dc\0\u0319\0\u0356\0\u0393\0\u03d0\0\u040d"+
    "\0\u044a\0\u0487\0\u04c4\0\u0501\0\u053e\0\u057b\0\u05b8\0\u05f5"+
    "\0\u0632\0\364\0\364\0\364\0\u066f\0\u06ac\0\u06e9\0\u0726"+
    "\0\364\0\u0763\0\364\0\u07a0\0\u07dd\0\u081a\0\364\0\u0857"+
    "\0\u0894\0\364\0\u08d1\0\u090e\0\u094b\0\364\0\u0988\0\u09c5"+
    "\0\u0a02\0\u0a3f\0\u0a7c\0\u0ab9\0\u0af6\0\u0b33\0\u0b70\0\u0bad"+
    "\0\u01ab\0\u0bea\0\u0c27\0\u0c64\0\u0ca1\0\u0cde\0\u0d1b\0\u0d58"+
    "\0\u0d95\0\u0dd2\0\u0e0f\0\u0e4c\0\364\0\364\0\364\0\364"+
    "\0\364\0\364\0\364\0\364\0\364\0\364\0\u08d1\0\u0e89"+
    "\0\u0ec6\0\u0f03\0\u0f40\0\u0f7d\0\u0fba\0\u0ff7\0\u1034\0\u1071"+
    "\0\u10ae\0\u01ab\0\u10eb\0\u1128\0\u1165\0\u11a2\0\u11df\0\u121c"+
    "\0\u1259\0\u1296\0\u12d3\0\u1310\0\u134d\0\u138a\0\u13c7\0\u1404"+
    "\0\u1441\0\u147e\0\u14bb\0\u14f8\0\u01ab\0\u1535\0\u1572\0\u15af"+
    "\0\u15ec\0\u1629\0\u01ab\0\u1666\0\u01ab\0\u16a3\0\u16e0\0\u171d"+
    "\0\u175a\0\u1797\0\u17d4\0\u1811\0\u01ab\0\u184e\0\u188b\0\u18c8"+
    "\0\u1905\0\u1942\0\u01ab\0\u197f\0\u19bc\0\u01ab\0\u01ab\0\u19f9"+
    "\0\u01ab\0\u01ab\0\u01ab\0\u1a36\0\u01ab\0\u01ab\0\u1a73\0\u1ab0"+
    "\0\u01ab\0\u1aed\0\u01ab\0\u01ab\0\u1b2a\0\u1b67\0\u1ba4\0\u1be1"+
    "\0\u1c1e\0\u01ab\0\u01ab\0\u1c5b\0\u1c98\0\u01ab\0\u1c5b\0\u01ab";

  private static int [] zzUnpackRowMap() {
    int [] result = new int[168];
    int offset = 0;
    offset = zzUnpackRowMap(ZZ_ROWMAP_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackRowMap(String packed, int offset, int [] result) {
    int i = 0;  /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int high = packed.charAt(i++) << 16;
      result[j++] = high | packed.charAt(i++);
    }
    return j;
  }

  /** 
   * The transition table of the DFA
   */
  private static final int [] ZZ_TRANS = zzUnpackTrans();

  private static final String ZZ_TRANS_PACKED_0 =
    "\1\5\1\6\2\7\1\10\1\5\1\11\1\5\1\12"+
    "\1\13\1\14\7\11\1\15\1\16\1\17\1\20\1\21"+
    "\1\5\1\22\1\11\1\23\1\24\1\25\1\26\1\27"+
    "\1\30\1\11\1\31\2\11\1\32\1\33\1\34\1\35"+
    "\2\11\1\36\1\11\1\37\1\40\1\11\1\41\2\11"+
    "\1\42\1\43\1\44\1\45\1\46\1\47\1\50\1\51"+
    "\3\5\1\52\2\5\57\52\1\53\7\52\1\54\2\52"+
    "\1\55\2\5\67\55\1\56\1\57\1\55\1\60\2\5"+
    "\67\60\1\61\1\60\1\62\77\0\1\7\76\0\1\63"+
    "\1\64\75\0\4\11\1\0\7\11\6\0\32\11\23\0"+
    "\2\13\76\0\1\65\110\0\1\66\53\0\4\11\1\0"+
    "\7\11\6\0\1\11\1\67\7\11\1\70\20\11\21\0"+
    "\4\11\1\0\7\11\6\0\12\11\1\71\17\11\21\0"+
    "\4\11\1\0\7\11\6\0\10\11\1\72\21\11\21\0"+
    "\4\11\1\0\7\11\6\0\1\73\2\11\1\74\26\11"+
    "\21\0\4\11\1\0\7\11\6\0\3\11\1\75\26\11"+
    "\21\0\4\11\1\0\7\11\6\0\5\11\1\76\4\11"+
    "\1\77\1\100\16\11\21\0\4\11\1\0\7\11\6\0"+
    "\3\11\1\101\26\11\21\0\4\11\1\0\7\11\6\0"+
    "\2\11\1\102\27\11\21\0\4\11\1\0\7\11\6\0"+
    "\3\11\1\103\14\11\1\104\11\11\21\0\4\11\1\0"+
    "\7\11\6\0\1\105\2\11\1\106\26\11\21\0\4\11"+
    "\1\0\7\11\6\0\5\11\1\107\24\11\21\0\4\11"+
    "\1\0\7\11\6\0\12\11\1\110\17\11\21\0\4\11"+
    "\1\0\7\11\6\0\1\111\31\11\21\0\4\11\1\0"+
    "\7\11\6\0\3\11\1\112\26\11\21\0\4\11\1\0"+
    "\7\11\6\0\26\11\1\113\3\11\21\0\4\11\1\0"+
    "\7\11\6\0\30\11\1\114\1\11\101\0\1\115\74\0"+
    "\1\116\75\0\1\117\75\0\1\120\4\0\1\52\2\0"+
    "\57\52\1\0\7\52\1\0\2\52\14\0\1\121\40\0"+
    "\1\122\1\123\3\0\1\124\12\0\1\55\2\0\67\55"+
    "\2\0\1\55\14\0\1\121\40\0\1\122\1\123\14\0"+
    "\1\125\1\0\1\60\2\0\67\60\1\0\1\60\15\0"+
    "\1\121\40\0\1\122\1\123\15\0\1\126\1\63\1\127"+
    "\1\7\72\63\5\130\1\131\67\130\14\0\1\132\66\0"+
    "\4\11\1\0\7\11\6\0\2\11\1\133\27\11\21\0"+
    "\4\11\1\0\7\11\6\0\11\11\1\134\20\11\21\0"+
    "\4\11\1\0\7\11\6\0\1\11\1\135\30\11\21\0"+
    "\4\11\1\0\7\11\6\0\11\11\1\136\20\11\21\0"+
    "\4\11\1\0\7\11\6\0\2\11\1\137\27\11\21\0"+
    "\4\11\1\0\7\11\6\0\7\11\1\140\22\11\21\0"+
    "\4\11\1\0\7\11\6\0\5\11\1\141\24\11\21\0"+
    "\4\11\1\0\7\11\6\0\7\11\1\142\22\11\21\0"+
    "\4\11\1\0\7\11\6\0\12\11\1\143\17\11\21\0"+
    "\4\11\1\0\7\11\6\0\1\144\31\11\21\0\4\11"+
    "\1\0\7\11\6\0\1\145\2\11\1\146\26\11\21\0"+
    "\4\11\1\0\7\11\6\0\5\11\1\147\24\11\21\0"+
    "\4\11\1\0\7\11\6\0\6\11\1\150\23\11\21\0"+
    "\4\11\1\0\7\11\6\0\10\11\1\151\21\11\21\0"+
    "\4\11\1\0\7\11\6\0\14\11\1\152\15\11\21\0"+
    "\4\11\1\0\7\11\6\0\16\11\1\153\13\11\21\0"+
    "\4\11\1\0\7\11\6\0\16\11\1\154\13\11\21\0"+
    "\4\11\1\0\7\11\6\0\15\11\1\155\14\11\21\0"+
    "\4\11\1\0\7\11\6\0\2\11\1\156\27\11\21\0"+
    "\4\11\1\0\4\11\1\157\2\11\6\0\32\11\21\0"+
    "\4\11\1\0\3\11\1\160\3\11\6\0\32\11\13\0"+
    "\5\130\1\161\67\130\4\0\1\7\1\131\104\0\1\162"+
    "\65\0\4\11\1\0\7\11\6\0\3\11\1\163\26\11"+
    "\21\0\4\11\1\0\7\11\6\0\6\11\1\164\23\11"+
    "\21\0\4\11\1\0\7\11\6\0\6\11\1\165\23\11"+
    "\21\0\4\11\1\0\7\11\6\0\6\11\1\166\23\11"+
    "\21\0\4\11\1\0\7\11\6\0\14\11\1\167\15\11"+
    "\21\0\4\11\1\0\7\11\6\0\16\11\1\170\13\11"+
    "\21\0\4\11\1\0\7\11\6\0\7\11\1\171\22\11"+
    "\21\0\4\11\1\0\7\11\6\0\3\11\1\172\26\11"+
    "\21\0\4\11\1\0\7\11\6\0\15\11\1\173\14\11"+
    "\21\0\4\11\1\0\7\11\6\0\2\11\1\174\27\11"+
    "\21\0\4\11\1\0\7\11\6\0\17\11\1\175\12\11"+
    "\21\0\4\11\1\0\7\11\6\0\2\11\1\176\27\11"+
    "\21\0\4\11\1\0\7\11\6\0\14\11\1\177\15\11"+
    "\21\0\4\11\1\0\7\11\6\0\6\11\1\200\23\11"+
    "\21\0\4\11\1\0\7\11\6\0\1\201\31\11\21\0"+
    "\4\11\1\0\7\11\6\0\2\11\1\202\27\11\21\0"+
    "\4\11\1\0\7\11\6\0\5\11\1\203\24\11\21\0"+
    "\4\11\1\0\7\11\6\0\11\11\1\204\20\11\21\0"+
    "\4\11\1\0\7\11\6\0\3\11\1\205\26\11\21\0"+
    "\4\11\1\0\6\11\1\165\6\0\32\11\21\0\4\11"+
    "\1\0\7\11\6\0\31\11\1\206\13\0\4\130\1\7"+
    "\1\161\67\130\16\0\1\207\64\0\4\11\1\0\7\11"+
    "\6\0\4\11\1\210\25\11\21\0\4\11\1\0\7\11"+
    "\6\0\12\11\1\211\17\11\21\0\4\11\1\0\7\11"+
    "\6\0\12\11\1\212\17\11\21\0\4\11\1\0\7\11"+
    "\6\0\20\11\1\213\11\11\21\0\4\11\1\0\7\11"+
    "\6\0\22\11\1\214\7\11\21\0\4\11\1\0\7\11"+
    "\6\0\6\11\1\215\23\11\21\0\4\11\1\0\7\11"+
    "\6\0\12\11\1\216\17\11\21\0\4\11\1\0\7\11"+
    "\6\0\6\11\1\217\23\11\21\0\4\11\1\0\7\11"+
    "\6\0\12\11\1\220\17\11\21\0\4\11\1\0\7\11"+
    "\6\0\21\11\1\221\10\11\21\0\4\11\1\0\7\11"+
    "\6\0\15\11\1\222\14\11\21\0\4\11\1\0\7\11"+
    "\6\0\15\11\1\223\14\11\21\0\4\11\1\0\7\11"+
    "\6\0\16\11\1\224\13\11\21\0\4\11\1\0\7\11"+
    "\6\0\2\11\1\225\27\11\21\0\4\11\1\0\7\11"+
    "\6\0\6\11\1\226\23\11\21\0\4\11\1\0\6\11"+
    "\1\226\6\0\32\11\32\0\1\227\63\0\4\11\1\0"+
    "\7\11\6\0\1\230\31\11\21\0\4\11\1\0\7\11"+
    "\6\0\2\11\1\231\27\11\21\0\4\11\1\0\7\11"+
    "\6\0\13\11\1\232\16\11\21\0\4\11\1\0\7\11"+
    "\6\0\23\11\1\233\6\11\21\0\4\11\1\0\7\11"+
    "\6\0\2\11\1\234\27\11\21\0\4\11\1\0\7\11"+
    "\6\0\3\11\1\235\26\11\21\0\4\11\1\0\7\11"+
    "\6\0\1\236\31\11\33\0\1\237\62\0\4\11\1\0"+
    "\7\11\6\0\2\11\1\240\27\11\21\0\4\11\1\0"+
    "\7\11\6\0\6\11\1\241\23\11\21\0\4\11\1\0"+
    "\7\11\6\0\15\11\1\242\14\11\21\0\4\11\1\0"+
    "\7\11\6\0\15\11\1\243\14\11\34\0\1\244\61\0"+
    "\4\11\1\0\7\11\6\0\3\11\1\245\26\11\21\0"+
    "\4\11\1\0\7\11\6\0\12\11\1\246\17\11\13\0"+
    "\2\247\1\0\72\247\6\0\4\11\1\0\7\11\6\0"+
    "\5\11\1\250\24\11\13\0";

  private static int [] zzUnpackTrans() {
    int [] result = new int[7381];
    int offset = 0;
    offset = zzUnpackTrans(ZZ_TRANS_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackTrans(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      value--;
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }


  /* error codes */
  private static final int ZZ_UNKNOWN_ERROR = 0;
  private static final int ZZ_NO_MATCH = 1;
  private static final int ZZ_PUSHBACK_2BIG = 2;

  /* error messages for the codes above */
  private static final String ZZ_ERROR_MSG[] = {
    "Unkown internal scanner error",
    "Error: could not match input",
    "Error: pushback value was too large"
  };

  /**
   * ZZ_ATTRIBUTE[aState] contains the attributes of state <code>aState</code>
   */
  private static final int [] ZZ_ATTRIBUTE = zzUnpackAttribute();

  private static final String ZZ_ATTRIBUTE_PACKED_0 =
    "\4\0\1\11\1\1\1\11\2\1\1\11\2\1\4\11"+
    "\21\1\3\11\4\1\1\11\1\1\1\11\3\1\1\11"+
    "\2\1\1\11\3\0\1\11\26\1\12\11\1\1\3\0"+
    "\26\1\2\0\24\1\1\0\17\1\1\0\7\1\1\0"+
    "\4\1\1\0\4\1";

  private static int [] zzUnpackAttribute() {
    int [] result = new int[168];
    int offset = 0;
    offset = zzUnpackAttribute(ZZ_ATTRIBUTE_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackAttribute(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }

  /** the input device */
  private java.io.Reader zzReader;

  /** the current state of the DFA */
  private int zzState;

  /** the current lexical state */
  private int zzLexicalState = YYINITIAL;

  /** this buffer contains the current text to be matched and is
      the source of the yytext() string */
  private char zzBuffer[] = new char[ZZ_BUFFERSIZE];

  /** the textposition at the last accepting state */
  private int zzMarkedPos;
  
  /** the current text position in the buffer */
  private int zzCurrentPos;

  /** startRead marks the beginning of the yytext() string in the buffer */
  private int zzStartRead;

  /** endRead marks the last character in the buffer, that has been read
      from input */
  private int zzEndRead;

  /** number of newlines encountered up to the start of the matched text */
  private int yyline;

  /** the number of characters up to the start of the matched text */
  private int yychar;

  /**
   * the number of characters from the last newline up to the start of the 
   * matched text
   */
  private int yycolumn;

  /** 
   * zzAtBOL == true <=> the scanner is currently at the beginning of a line
   */
  private boolean zzAtBOL = true;

  /** zzAtEOF == true <=> the scanner is at the EOF */
  private boolean zzAtEOF;

  /** denotes if the user-EOF-code has already been executed */
  private boolean zzEOFDone;

  /** the stack of open (nested) input streams to read from */
  private java.util.Stack zzStreams = new java.util.Stack();

  /**
   * inner class used to store info for nested
   * input streams
   */
  private static final class ZzFlexStreamInfo {
    java.io.Reader zzReader;
    int zzEndRead;
    int zzStartRead;
    int zzCurrentPos;
    int zzMarkedPos;
    int yyline;
    int yycolumn;
    char [] zzBuffer;
    boolean zzAtEOF;
    boolean zzEOFDone;

    /** sets all values stored in this class */
    ZzFlexStreamInfo(java.io.Reader zzReader, int zzEndRead, int zzStartRead,
                  int zzCurrentPos, int zzMarkedPos, 
                  char [] zzBuffer, boolean zzAtEOF, int yyline, int yycolumn) {
      this.zzReader      = zzReader;
      this.zzEndRead     = zzEndRead;
      this.zzStartRead   = zzStartRead;
      this.zzCurrentPos  = zzCurrentPos;
      this.zzMarkedPos   = zzMarkedPos;
      this.zzBuffer      = zzBuffer;
      this.zzAtEOF       = zzAtEOF;
      this.zzEOFDone     = zzEOFDone;
      this.yyline         = yyline;
      this.yycolumn       = yycolumn;
    }
  }

  /* user code: */
  private StringBuilder string = new StringBuilder();
  private SymbolFactory sf;
  private Configuration config;

   public AutomatonScanner(java.io.InputStream r, Configuration config, SymbolFactory sf){
	this(r);
	this.sf = sf;
	this.config = config;
  }
  public int getLine() {
     return this.yyline;
   }
   public int getColumn() {
     return this.yycolumn;
   }
   
   private File getFile(String pYytext) throws FileNotFoundException {
  	assert pYytext.startsWith("#include ");
  	String fileName = pYytext.replaceFirst("#include ", "").trim();
  	if (config != null && config.getRootDirectory() != null) {
  	  fileName = config.getRootDirectory() + fileName;
  	}
  	System.out.println("File to be included: " + fileName);
  	File file = new File(fileName);
  	Files.checkReadableFile(file);
  	return file;
  }
  
  private Symbol symbol(String name, int sym) {
    return  sf.newSymbol(name, sym);
  }
  private Symbol symbol(String name, int sym, Object val) {
    return  sf.newSymbol(name, sym, val);
  }
  
  private void error(String message) {
    System.out.println("Error at line "+(yyline+1)+", column "+(yycolumn+1)+" : "+message);
  }


  /**
   * Creates a new scanner
   * There is also a java.io.InputStream version of this constructor.
   *
   * @param   in  the java.io.Reader to read input from.
   */
  AutomatonScanner(java.io.Reader in) {
    this.zzReader = in;
  }

  /**
   * Creates a new scanner.
   * There is also java.io.Reader version of this constructor.
   *
   * @param   in  the java.io.Inputstream to read input from.
   */
  AutomatonScanner(java.io.InputStream in) {
    this(new java.io.InputStreamReader(in));
  }

  /** 
   * Unpacks the compressed character translation table.
   *
   * @param packed   the packed character translation table
   * @return         the unpacked character translation table
   */
  private static char [] zzUnpackCMap(String packed) {
    char [] map = new char[0x10000];
    int i = 0;  /* index in packed string  */
    int j = 0;  /* index in unpacked array */
    while (i < 1790) {
      int  count = packed.charAt(i++);
      char value = packed.charAt(i++);
      do map[j++] = value; while (--count > 0);
    }
    return map;
  }


  /**
   * Refills the input buffer.
   *
   * @return      <code>false</code>, iff there was new input.
   * 
   * @exception   java.io.IOException  if any I/O-Error occurs
   */
  private boolean zzRefill() throws java.io.IOException {

    /* first: make room (if you can) */
    if (zzStartRead > 0) {
      System.arraycopy(zzBuffer, zzStartRead,
                       zzBuffer, 0,
                       zzEndRead-zzStartRead);

      /* translate stored positions */
      zzEndRead-= zzStartRead;
      zzCurrentPos-= zzStartRead;
      zzMarkedPos-= zzStartRead;
      zzStartRead = 0;
    }

    /* is the buffer big enough? */
    if (zzCurrentPos >= zzBuffer.length) {
      /* if not: blow it up */
      char newBuffer[] = new char[zzCurrentPos*2];
      System.arraycopy(zzBuffer, 0, newBuffer, 0, zzBuffer.length);
      zzBuffer = newBuffer;
    }

    /* finally: fill the buffer with new input */
    int numRead = zzReader.read(zzBuffer, zzEndRead,
                                            zzBuffer.length-zzEndRead);

    if (numRead > 0) {
      zzEndRead+= numRead;
      return false;
    }
    // unlikely but not impossible: read 0 characters, but not at end of stream
    if (numRead == 0) {
      int c = zzReader.read();
      if (c == -1) {
        return true;
      } else {
        zzBuffer[zzEndRead++] = (char) c;
        return false;
      }     
    }
    
    // numRead < 0) 
    return true;
  }

    
  /**
   * Closes the input stream.
   */
  public final void yyclose() throws java.io.IOException {
    zzAtEOF = true;            /* indicate end of file */
    zzEndRead = zzStartRead;  /* invalidate buffer    */

    if (zzReader != null)
      zzReader.close();
  }


  /**
   * Stores the current input stream on a stack, and
   * reads from a new stream. Lexical state, line,
   * char, and column counting remain untouched.
   *
   * The current input stream can be restored with
   * yypopstream (usually in an <<EOF>> action).
   *
   * @param reader the new input stream to read from
   *
   * @see #yypopStream()
   */
  public final void yypushStream(java.io.Reader reader) {
    zzStreams.push(
      new ZzFlexStreamInfo(zzReader, zzEndRead, zzStartRead, zzCurrentPos,
                        zzMarkedPos, zzBuffer, zzAtEOF,
                        yyline, yycolumn)
    );
    zzAtEOF  = false;
    zzBuffer = new char[ZZ_BUFFERSIZE];
    zzReader = reader;
    zzEndRead = zzStartRead = 0;
    zzCurrentPos = zzMarkedPos = 0;
    yyline = yycolumn = 0;
  }
    

  /**
   * Closes the current input stream and continues to
   * read from the one on top of the stream stack. 
   *
   * @throws java.util.EmptyStackException
   *         if there is no further stream to read from.
   *
   * @throws java.io.IOException
   *         if there was an error in closing the stream.
   *
   * @see #yypushStream(java.io.Reader)
   */
  public final void yypopStream() throws java.io.IOException {
    zzReader.close();
    ZzFlexStreamInfo s = (ZzFlexStreamInfo) zzStreams.pop();
    zzBuffer      = s.zzBuffer;
    zzReader      = s.zzReader;
    zzEndRead     = s.zzEndRead;
    zzStartRead   = s.zzStartRead;
    zzCurrentPos  = s.zzCurrentPos;
    zzMarkedPos   = s.zzMarkedPos ;
    zzAtEOF       = s.zzAtEOF;
    zzEOFDone     = s.zzEOFDone;
    yyline         = s.yyline;
    yycolumn       = s.yycolumn;
  }


  /**
   * Returns true iff there are still streams left 
   * to read from on the stream stack.
   */
  public final boolean yymoreStreams() {
    return !zzStreams.isEmpty();
  }


  /**
   * Resets the scanner to read from a new input stream.
   * Does not close the old reader.
   *
   * All internal variables are reset, the old input stream 
   * <b>cannot</b> be reused (internal buffer is discarded and lost).
   * Lexical state is set to <tt>ZZ_INITIAL</tt>.
   *
   * @param reader   the new input stream 
   *
   * @see #yypushStream(java.io.Reader)
   * @see #yypopStream()
   */
  public final void yyreset(java.io.Reader reader) {
    zzReader = reader;
    zzAtBOL  = true;
    zzAtEOF  = false;
    zzEOFDone = false;
    zzEndRead = zzStartRead = 0;
    zzCurrentPos = zzMarkedPos = 0;
    yyline = yychar = yycolumn = 0;
    zzLexicalState = YYINITIAL;
  }


  /**
   * Returns the current lexical state.
   */
  public final int yystate() {
    return zzLexicalState;
  }


  /**
   * Enters a new lexical state
   *
   * @param newState the new lexical state
   */
  public final void yybegin(int newState) {
    zzLexicalState = newState;
  }


  /**
   * Returns the text matched by the current regular expression.
   */
  public final String yytext() {
    return new String( zzBuffer, zzStartRead, zzMarkedPos-zzStartRead );
  }


  /**
   * Returns the character at position <tt>pos</tt> from the 
   * matched text. 
   * 
   * It is equivalent to yytext().charAt(pos), but faster
   *
   * @param pos the position of the character to fetch. 
   *            A value from 0 to yylength()-1.
   *
   * @return the character at position pos
   */
  public final char yycharat(int pos) {
    return zzBuffer[zzStartRead+pos];
  }


  /**
   * Returns the length of the matched text region.
   */
  public final int yylength() {
    return zzMarkedPos-zzStartRead;
  }


  /**
   * Reports an error that occured while scanning.
   *
   * In a wellformed scanner (no or only correct usage of 
   * yypushback(int) and a match-all fallback rule) this method 
   * will only be called with things that "Can't Possibly Happen".
   * If this method is called, something is seriously wrong
   * (e.g. a JFlex bug producing a faulty scanner etc.).
   *
   * Usual syntax/scanner level error handling should be done
   * in error fallback rules.
   *
   * @param   errorCode  the code of the errormessage to display
   */
  private void zzScanError(int errorCode) {
    String message;
    try {
      message = ZZ_ERROR_MSG[errorCode];
    }
    catch (ArrayIndexOutOfBoundsException e) {
      message = ZZ_ERROR_MSG[ZZ_UNKNOWN_ERROR];
    }

    throw new Error(message);
  } 


  /**
   * Pushes the specified amount of characters back into the input stream.
   *
   * They will be read again by then next call of the scanning method
   *
   * @param number  the number of characters to be read again.
   *                This number must not be greater than yylength()!
   */
  public void yypushback(int number)  {
    if ( number > yylength() )
      zzScanError(ZZ_PUSHBACK_2BIG);

    zzMarkedPos -= number;
  }


  /**
   * Contains user EOF-code, which will be executed exactly once,
   * when the end of file is reached
   */
  private void zzDoEOF() throws java.io.IOException {
    if (!zzEOFDone) {
      zzEOFDone = true;
      yyclose();
    }
  }


  /**
   * Resumes scanning until the next regular expression is matched,
   * the end of input is encountered or an I/O-Error occurs.
   *
   * @return      the next token
   * @exception   java.io.IOException  if any I/O-Error occurs
   */
  public java_cup.runtime.Symbol next_token() throws java.io.IOException {
    int zzInput;
    int zzAction;

    int [] zzTransL = ZZ_TRANS;
    int [] zzRowMapL = ZZ_ROWMAP;
    int [] zzAttrL = ZZ_ATTRIBUTE;

    while (true) {
      // cached fields:
      int zzCurrentPosL;
      int zzMarkedPosL = zzMarkedPos;
      int zzEndReadL = zzEndRead;
      char [] zzBufferL = zzBuffer;
      char [] zzCMapL = ZZ_CMAP;

      boolean zzR = false;
      for (zzCurrentPosL = zzStartRead; zzCurrentPosL < zzMarkedPosL;
                                                             zzCurrentPosL++) {
        switch (zzBufferL[zzCurrentPosL]) {
        case '\u000B':
        case '\u000C':
        case '\u0085':
        case '\u2028':
        case '\u2029':
          yyline++;
          yycolumn = 0;
          zzR = false;
          break;
        case '\r':
          yyline++;
          yycolumn = 0;
          zzR = true;
          break;
        case '\n':
          if (zzR)
            zzR = false;
          else {
            yyline++;
            yycolumn = 0;
          }
          break;
        default:
          zzR = false;
          yycolumn++;
        }
      }

      if (zzR) {
        // peek one character ahead if it is \n (if we have counted one line too much)
        boolean zzPeek;
        if (zzMarkedPosL < zzEndReadL)
          zzPeek = zzBufferL[zzMarkedPosL] == '\n';
        else if (zzAtEOF)
          zzPeek = false;
        else {
          boolean eof = zzRefill();
          zzEndReadL = zzEndRead;
          zzMarkedPosL = zzMarkedPos;
          zzBufferL = zzBuffer;
          if (eof) 
            zzPeek = false;
          else 
            zzPeek = zzBufferL[zzMarkedPosL] == '\n';
        }
        if (zzPeek) yyline--;
      }
      zzAction = -1;

      zzCurrentPosL = zzCurrentPos = zzStartRead = zzMarkedPosL;
  
      zzState = ZZ_LEXSTATE[zzLexicalState];


      zzForAction: {
        while (true) {
    
          if (zzCurrentPosL < zzEndReadL)
            zzInput = zzBufferL[zzCurrentPosL++];
          else if (zzAtEOF) {
            zzInput = YYEOF;
            break zzForAction;
          }
          else {
            // store back cached positions
            zzCurrentPos  = zzCurrentPosL;
            zzMarkedPos   = zzMarkedPosL;
            boolean eof = zzRefill();
            // get translated positions and possibly new buffer
            zzCurrentPosL  = zzCurrentPos;
            zzMarkedPosL   = zzMarkedPos;
            zzBufferL      = zzBuffer;
            zzEndReadL     = zzEndRead;
            if (eof) {
              zzInput = YYEOF;
              break zzForAction;
            }
            else {
              zzInput = zzBufferL[zzCurrentPosL++];
            }
          }
          int zzNext = zzTransL[ zzRowMapL[zzState] + zzCMapL[zzInput] ];
          if (zzNext == -1) break zzForAction;
          zzState = zzNext;

          int zzAttributes = zzAttrL[zzState];
          if ( (zzAttributes & 1) == 1 ) {
            zzAction = zzState;
            zzMarkedPosL = zzCurrentPosL;
            if ( (zzAttributes & 8) == 8 ) break zzForAction;
          }

        }
      }

      // store back cached position
      zzMarkedPos = zzMarkedPosL;

      switch (zzAction < 0 ? zzAction : ZZ_ACTION[zzAction]) {
        case 53: 
          { return symbol("AUTOMATON", AutomatonSym.AUTOMATON);
          }
        case 54: break;
        case 2: 
          { /* ignore */
          }
        case 55: break;
        case 19: 
          { yybegin(YYINITIAL); 
                                   return symbol("CURLYEXPR", AutomatonSym.CURLYEXPR, 
                                   string.toString());
          }
        case 56: break;
        case 50: 
          { return symbol("INITIAL", AutomatonSym.INITIAL);
          }
        case 57: break;
        case 6: 
          { return symbol(":", AutomatonSym.COLON);
          }
        case 58: break;
        case 39: 
          { return symbol("ERROR", AutomatonSym.ERROR);
          }
        case 59: break;
        case 13: 
          { return symbol("!", AutomatonSym.EXCLAMATION);
          }
        case 60: break;
        case 23: 
          { return symbol("!=", AutomatonSym.NEQ);
          }
        case 61: break;
        case 28: 
          { string.append('\t');
          }
        case 62: break;
        case 26: 
          { return symbol("||", AutomatonSym.OR);
          }
        case 63: break;
        case 10: 
          { string.setLength(0); yybegin(STRING);
          }
        case 64: break;
        case 20: 
          { yybegin(YYINITIAL); 
                                   return symbol("CURLYEXPR", AutomatonSym.SQUAREEXPR, 
                                   string.toString());
          }
        case 65: break;
        case 40: 
          { return symbol("STATE", AutomatonSym.STATE);
          }
        case 66: break;
        case 34: 
          { return symbol("TRUE", AutomatonSym.TRUE);
          }
        case 67: break;
        case 9: 
          { return symbol("-", AutomatonSym.MINUS);
          }
        case 68: break;
        case 30: 
          { string.append('"');
          }
        case 69: break;
        case 18: 
          { string.append('\\');
          }
        case 70: break;
        case 48: 
          { return symbol("NONDET", AutomatonSym.NONDET);
          }
        case 71: break;
        case 36: 
          { return symbol("STOP", AutomatonSym.STOP);
          }
        case 72: break;
        case 51: 
          { return symbol("OBSERVER", AutomatonSym.OBSERVER);
          }
        case 73: break;
        case 29: 
          { string.append('\r');
          }
        case 74: break;
        case 5: 
          { return symbol(";", AutomatonSym.SEMICOLON);
          }
        case 75: break;
        case 43: 
          { return symbol("LOCAL", AutomatonSym.LOCAL);
          }
        case 76: break;
        case 8: 
          { return symbol(")", AutomatonSym.CLOSE_BRACKETS);
          }
        case 77: break;
        case 38: 
          { return symbol("MATCH", AutomatonSym.MATCH);
          }
        case 78: break;
        case 11: 
          { string.setLength(0); yybegin(CURLYEXPR);
          }
        case 79: break;
        case 24: 
          { return symbol("==", AutomatonSym.EQEQ);
          }
        case 80: break;
        case 49: 
          { return symbol("CONTROL", AutomatonSym.CONTROL);
          }
        case 81: break;
        case 42: 
          { return symbol("LABEL", AutomatonSym.LABEL);
          }
        case 82: break;
        case 21: 
          { return symbol("->", AutomatonSym.ARROW);
          }
        case 83: break;
        case 45: 
          { return symbol("FALSE", AutomatonSym.FALSE);
          }
        case 84: break;
        case 25: 
          { return symbol("&&", AutomatonSym.AND);
          }
        case 85: break;
        case 1: 
          { error("Fallback error"); throw new Error("Illegal character <"+
                                                    yytext()+">");
          }
        case 86: break;
        case 41: 
          { return symbol("EVAL", AutomatonSym.CHECK);
          }
        case 87: break;
        case 4: 
          { return symbol("INT", AutomatonSym.INTEGER_LITERAL, yytext());
          }
        case 88: break;
        case 32: 
          { string.append(']');
          }
        case 89: break;
        case 17: 
          { yybegin(YYINITIAL); 
                                   return symbol("STRING", AutomatonSym.STRING_LITERAL, 
                                   string.toString());
          }
        case 90: break;
        case 22: 
          { return symbol("DO", AutomatonSym.DO);
          }
        case 91: break;
        case 52: 
          { yypushStream(new FileReader(getFile(yytext())));
          }
        case 92: break;
        case 47: 
          { return symbol("MODIFY", AutomatonSym.MODIFY);
          }
        case 93: break;
        case 15: 
          { return symbol("+", AutomatonSym.PLUS);
          }
        case 94: break;
        case 31: 
          { string.append('}');
          }
        case 95: break;
        case 7: 
          { return symbol("(", AutomatonSym.OPEN_BRACKETS);
          }
        case 96: break;
        case 12: 
          { string.setLength(0); yybegin(SQUAREEXPR);
          }
        case 97: break;
        case 27: 
          { string.append('\n');
          }
        case 98: break;
        case 3: 
          { return symbol("ID", AutomatonSym.IDENTIFIER, yytext());
          }
        case 99: break;
        case 35: 
          { return symbol("EVAL", AutomatonSym.EVAL);
          }
        case 100: break;
        case 37: 
          { return symbol("GOTO", AutomatonSym.GOTO);
          }
        case 101: break;
        case 46: 
          { return symbol("ASSERT", AutomatonSym.ASS);
          }
        case 102: break;
        case 14: 
          { return symbol("=", AutomatonSym.EQ);
          }
        case 103: break;
        case 16: 
          { string.append( yytext() );
          }
        case 104: break;
        case 44: 
          { return symbol("PRINT", AutomatonSym.PRINT);
          }
        case 105: break;
        case 33: 
          { return symbol("LABEL", AutomatonSym.END);
          }
        case 106: break;
        default: 
          if (zzInput == YYEOF && zzStartRead == zzCurrentPos) {
            zzAtEOF = true;
            zzDoEOF();
              {
                if (yymoreStreams()) yypopStream(); else return symbol("EOF", AutomatonSym.EOF);
              }
          } 
          else {
            zzScanError(ZZ_NO_MATCH);
          }
      }
    }
  }


}
