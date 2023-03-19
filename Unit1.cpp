//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        char f1,f2,f3,f4,f5,f6,f7,f8,f9,who;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        field1->Picture->LoadFromFile("img/nothing.bmp");
        field2->Picture->LoadFromFile("img/nothing.bmp");
        field3->Picture->LoadFromFile("img/nothing.bmp");
        field4->Picture->LoadFromFile("img/nothing.bmp");
        field5->Picture->LoadFromFile("img/nothing.bmp");
        field6->Picture->LoadFromFile("img/nothing.bmp");
        field7->Picture->LoadFromFile("img/nothing.bmp");
        field8->Picture->LoadFromFile("img/nothing.bmp");
        field9->Picture->LoadFromFile("img/nothing.bmp");
        turn->Picture->LoadFromFile("img/osmall.bmp");

        f1='n'; f2='n'; f3='n';
        f4='n'; f5='n'; f6='n';
        f7='n'; f8='n'; f9='n';

        who='o';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field1Click(TObject *Sender)
{
        if (f1=='n') {
                if (who=='o') {
                        field1->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f1='o';
                }
                else {
                        field1->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f1='x';
                }
                field1->Enabled=false;
        }
}
//---------------------------------------------------------------------------
