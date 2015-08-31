// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Lbkeyed2.pas' rev: 21.00

#ifndef Lbkeyed2HPP
#define Lbkeyed2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Tabnotbk.hpp>	// Pascal unit
#include <Designintf.hpp>	// Pascal unit
#include <Designeditors.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Lbkeyed2
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmRSAKeys;
class PASCALIMPLEMENTATION TfrmRSAKeys : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* btnClose;
	Stdctrls::TLabel* Label4;
	Stdctrls::TEdit* edtModulus;
	Stdctrls::TLabel* Label5;
	Stdctrls::TEdit* edtPublicExponent;
	Stdctrls::TLabel* Label6;
	Stdctrls::TEdit* edtPrivateExponent;
	Extctrls::TBevel* Bevel1;
	Comctrls::TStatusBar* StatusBar1;
	Stdctrls::TLabel* Label9;
	Stdctrls::TComboBox* cbxKeySize;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label8;
	Stdctrls::TEdit* edtIterations;
	Stdctrls::TButton* btnGenerate;
	Stdctrls::TButton* btnClear;
	void __fastcall btnGenRSAKeysClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall btnCloseClick(System::TObject* Sender);
	void __fastcall btnClearClick(System::TObject* Sender);
	
private:
	bool FAbort;
	void __fastcall RSACallback(bool &Abort);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmRSAKeys(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmRSAKeys(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmRSAKeys(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmRSAKeys(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TLbRSAKeyEditor;
class PASCALIMPLEMENTATION TLbRSAKeyEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TLbRSAKeyEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLbRSAKeyEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Lbkeyed2 */
using namespace Lbkeyed2;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Lbkeyed2HPP
