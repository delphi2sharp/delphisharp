unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Button1: TButton;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

{$I CRC.INC}

implementation

{$R *.dfm}

{$DEFINE CRC_IMPLEMENTATION}
{$I CRC.INC}

procedure TForm1.Button1Click(Sender: TObject);
var
buffer : array[1..9] of byte;

begin

FillChar(buffer, Length(buffer), #0);
StrPCopy(@buffer, 'Testing');
CRC_16( buffer, Length(buffer), CRC_MAKE);

//last two bytes of buffer [checksum] are 45 92

end;

end.
