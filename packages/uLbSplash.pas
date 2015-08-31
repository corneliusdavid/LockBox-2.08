unit uLbSplash;

interface

procedure RegisterSplashScreen;
procedure RegisterAboutBox;


implementation

uses
  SysUtils, Windows, ToolsAPI, DesignIntf, Graphics;

{$I ..\source\LockBox.inc}

{$IFDEF VERSION2005orHigher}

{$R LbBitmap.res}

resourcestring
  ComponentPkgName = 'LockBox 2.07';
  ComponentPkgLic = 'Open Sourced by Turbo Power Software';
  ComponentPkgDesc = 'Encryption, Decryption, and Hashing functions';

var
  AboutBoxServices : IOTAAboutBoxServices = nil;
  AboutBoxIndex : Integer = 0;

procedure RegisterSplashScreen;
var
  Bmp: TBitmap;
begin
  Bmp := TBitmap.Create;
  Bmp.LoadFromResourceName( HInstance, 'TPLOCKBOX' );

  try
    ForceDemandLoadState(dlDisable);
    SplashScreenServices.AddPluginBitmap(ComponentPkgName, Bmp.Handle, False,
                                         ComponentPkgLic, ComponentPkgDesc);
  finally
    Bmp.Free;
  end;
end;

procedure RegisterAboutBox;
begin
  Supports(BorlandIDEServices,IOTAAboutBoxServices, AboutBoxServices);
  AboutBoxIndex := AboutBoxServices.AddPluginInfo(ComponentPkgName,
                                                  ComponentPkgDesc,
                                                  LoadBitmap(HInstance, 'TPLOCKBOX'),
                                                  False,
                                                  ComponentPkgLic);
end;

procedure UnregisterAboutBox;
begin
  if (AboutBoxIndex <> 0) and Assigned(AboutBoxServices) then begin
    AboutBoxServices.RemovePluginInfo(AboutBoxIndex);
    AboutBoxIndex := 0;
    AboutBoxServices := nil;
  end;
end;
{$ENDIF}

end.
