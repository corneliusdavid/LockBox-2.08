// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Lbkeyed1.pas' rev: 21.00

#ifndef Lbkeyed1HPP
#define Lbkeyed1HPP

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

namespace Lbkeyed1
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmSymmetricKey;
class PASCALIMPLEMENTATION TfrmSymmetricKey : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* btnClose;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TEdit* edtKey;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* Label9;
	Stdctrls::TComboBox* cbxKeySize;
	Stdctrls::TLabel* Label1;
	Stdctrls::TComboBox* cbxKeyType;
	Stdctrls::TButton* btnGenerate;
	Stdctrls::TEdit* edtPassphrase;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall btnGenerateClick(System::TObject* Sender);
	void __fastcall rgKeyTypeChange(System::TObject* Sender);
	void __fastcall rgKeySizeChange(System::TObject* Sender);
	void __fastcall edtPassphraseChange(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmSymmetricKey(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmSymmetricKey(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmSymmetricKey(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmSymmetricKey(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TLbSymmetricKeyEditor;
class PASCALIMPLEMENTATION TLbSymmetricKeyEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TLbSymmetricKeyEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLbSymmetricKeyEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Lbkeyed1 */
using namespace Lbkeyed1;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Lbkeyed1HPP
