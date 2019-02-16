(* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is TurboPower LockBox
 *
 * The Initial Developer of the Original Code is
 * TurboPower Software
 *
 * Portions created by the Initial Developer are Copyright (C) 1997-2002
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * ***** END LICENSE BLOCK ***** *)
{*********************************************************}
{*                  LOCKBOX.INC 2.07                     *}
{*      Copyright (c) 2002 TurboPower Software Co        *}
{*                 All rights reserved.                  *}
{*********************************************************}

{Conditional defines that affect compilation}

{$IFDEF VER80}                { Delphi 1 }
  !!! LockBox 2.0 does not support Delphi 1
{$ENDIF}

{$IFDEF VER93}                { C++ Builder 1 }
  !!! LockBox 2.0 does not support C++Builder 1
{$ENDIF}

{$IFNDEF VER90}               { Delphi 2 }
{$DEFINE VERSION3}            { for Delphi 3.0 or BCB 3.0 or higher }
{$ENDIF}

{$IFDEF VER110}               { C++ Builder 3 }
 {$DEFINE CBuilder}
 {$ObjExportAll On}
{$ENDIF}

{$IFDEF VER125}               { C++ Builder 4 }
 {$DEFINE CBuilder}
 {$ObjExportAll On}
{$ENDIF}

{$IFDEF VER130}               { Delphi 5 & C++ Builder 5 }
 {$IFDEF BCB}                 { C++ Builder 5 }
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VERSION3}
 {$IFNDEF VER100}             { Delphi 3 }
  {$IFNDEF VER110}            { BCB 3 }
   {$DEFINE VERSION4}         { Delphi 4.0 or higher }
  {$ENDIF}
 {$ENDIF}
{$ENDIF}

{$IFDEF VERSION4}
 {$IFNDEF VER120}             { Delphi 4 }
  {$IFNDEF VER125}            { BCB 4 }
   {$DEFINE VERSION5}         { Delphi 5.0 or higher }
  {$ENDIF}
 {$ENDIF}
{$ENDIF}

{$IFDEF VERSION3}
 {$IFNDEF VERSION4}
  {$DEFINE VERSION3ONLY}
 {$ENDIF}
{$ENDIF}

{$IFDEF VERSION3}
  {$IFDEF VER140}
     {$DEFINE VERSION6}         { Delphi 6.0 or higher }
     {$DEFINE USEDESIGNIDE}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER150}               { Delphi 7 }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER170}               { Delphi 2005 }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER180}               { Delphi 2006 and 2007 }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER200}               { Delphi 2009 }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER210}               { Delphi 2010 }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER220}               { Delphi XE }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER230}               { Delphi XE2 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER240}               { Delphi XE3 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER250}               { Delphi XE4 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER260}               { Delphi XE5 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER270}               { Delphi XE6 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER280}               { Delphi XE7 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER290}               { Delphi XE8 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER300}               { Delphi 10 Seattle }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER310}               { Delphi 10.1 Berlin }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER320}               { Delphi 10.2 Tokyo }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{$IFDEF VER330}               { Delphi 10.3 Rio }
  {$DEFINE VERSION6}          { Version 6 or greater }
  {$DEFINE VERSION7}
  {$DEFINE VERSION2005orHigher}
  {$DEFINE DelphiUnicode}
 {$IFDEF BCB}
  {$DEFINE CBuilder}
  {$ObjExportAll On}
 {$ENDIF}
{$ENDIF}

{ determine whether CLX is used, should always be on Linux }
{$IFDEF LINUX}
{$DEFINE UsingCLX }
{$ENDIF LINUX}

{$IFNDEF MSWINDOWS}
{$IFDEF VERSION3}
  {$IFNDEF LINUX}
    {$DEFINE MSWINDOWS}
  {$ENDIF}
{$ENDIF}
{$ENDIF MSWINDOWS}





{$A+} {Word Align Data}
{$Q-} {Overflow Checking}
{$R-} {Range-Checking}
{$S-} {Stack-Overflow Checking}
{$V-} {Var-String Checking}
{$B-} {Complete Boolean Evaluation}
{$I+} {Input/Output-Checking}
{$P+} {Open Parameters}
{$T-} {Typed @ Operator}
{$W-} {Windows Stack Frame}
{$X+} {Extended Syntax}





