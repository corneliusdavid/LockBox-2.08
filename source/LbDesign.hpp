// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Lbdesign.pas' rev: 21.00

#ifndef LbdesignHPP
#define LbdesignHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Shellapi.hpp>	// Pascal unit
#include <Designintf.hpp>	// Pascal unit
#include <Designeditors.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Lbdesign
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TLbAboutForm;
class PASCALIMPLEMENTATION TLbAboutForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* Panel1;
	Extctrls::TBevel* Bevel2;
	Extctrls::TImage* Image1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* lblVersion;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* lblWeb;
	Stdctrls::TLabel* Label9;
	Stdctrls::TLabel* Label10;
	Stdctrls::TLabel* Label11;
	Stdctrls::TLabel* Label12;
	Stdctrls::TButton* Button1;
	Extctrls::TPanel* Panel2;
	Stdctrls::TLabel* lblNews;
	Stdctrls::TLabel* Label2;
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall lblWebClick(System::TObject* Sender);
	void __fastcall lblNewsClick(System::TObject* Sender);
	void __fastcall lblWebMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall lblWebMouseUp(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall lblUpdateClick(System::TObject* Sender);
	void __fastcall lblLiveClick(System::TObject* Sender);
	void __fastcall lblWebMouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
	void __fastcall Panel2MouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
	void __fastcall FormMouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TLbAboutForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TLbAboutForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TLbAboutForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLbAboutForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


class DELPHICLASS TLbVersionProperty;
class PASCALIMPLEMENTATION TLbVersionProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TLbVersionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TLbVersionProperty(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TLbAboutForm* LbAboutForm;
extern PACKAGE void __fastcall Register(void);

}	/* namespace Lbdesign */
using namespace Lbdesign;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// LbdesignHPP
