//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char f1,f2,f3,f4,f5,f6,f7,f8,f9,who;

void check() {

        if ((f1==f2 && f2==f3 && f1!='n') ||
           (f4==f5 && f5==f6 && f4!='n') ||
           (f7==f8 && f8==f9 && f7!='n') ||
           (f1==f4 && f4==f7 && f1!='n') ||
           (f2==f5 && f5==f8 && f2!='n') ||
           (f3==f6 && f6==f9 && f3!='n') ||
           (f1==f5 && f5==f9 && f1!='n') ||
           (f3==f5 && f5==f7 && f3!='n')) {

           char * w;

           if (who=='x') w="O wins!";
           else w="X wins!";

           Application->MessageBoxA(w, "Game over", MB_OK);
           Form1->FormCreate(Application);
        }
}

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

        field1->Enabled=true;
        field2->Enabled=true;
        field3->Enabled=true;
        field4->Enabled=true;
        field5->Enabled=true;
        field6->Enabled=true;
        field7->Enabled=true;
        field8->Enabled=true;
        field9->Enabled=true;
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
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field2Click(TObject *Sender)
{
        if (f2=='n') {
                if (who=='o') {
                        field2->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f2='o';
                }
                else {
                        field2->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f2='x';
                }
                field2->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field3Click(TObject *Sender)
{
        if (f3=='n') {
                if (who=='o') {
                        field3->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f3='o';
                }
                else {
                        field3->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f3='x';
                }
                field3->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field4Click(TObject *Sender)
{
        if (f4=='n') {
                if (who=='o') {
                        field4->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f4='o';
                }
                else {
                        field4->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f4='x';
                }
                field4->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field5Click(TObject *Sender)
{
        if (f5=='n') {
                if (who=='o') {
                        field5->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f5='o';
                }
                else {
                        field5->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f5='x';
                }
                field5->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field6Click(TObject *Sender)
{            
        if (f6=='n') {
                if (who=='o') {
                        field6->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f6='o';
                }
                else {
                        field6->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f6='x';
                }
                field6->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field7Click(TObject *Sender)
{
        if (f7=='n') {
                if (who=='o') {
                        field7->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f7='o';
                }
                else {
                        field7->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f7='x';
                }
                field7->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field8Click(TObject *Sender)
{
        if (f8=='n') {
                if (who=='o') {
                        field8->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f8='o';
                }
                else {
                        field8->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f8='x';
                }
                field8->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::field9Click(TObject *Sender)
{
        if (f9=='n') {
                if (who=='o') {
                        field9->Picture->LoadFromFile("img/o.bmp");
                        turn->Picture->LoadFromFile("img/xsmall.bmp");
                        who='x';
                        f9='o';
                }
                else {
                        field9->Picture->LoadFromFile("img/x.bmp");
                        turn->Picture->LoadFromFile("img/osmall.bmp");
                        who='o';
                        f9='x';
                }
                field9->Enabled=false;
                check();
        }
}
//---------------------------------------------------------------------------
