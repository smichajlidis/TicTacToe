//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *field1;
        TImage *field2;
        TImage *field3;
        TImage *field4;
        TImage *field5;
        TImage *field6;
        TImage *field7;
        TImage *field8;
        TImage *field9;
        TLabel *Label1;
        TImage *turn;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall field1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 