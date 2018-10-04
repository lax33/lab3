//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include <conio.h>

#pragma hdrstop

#include "lab3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

double fact;
int k, i ;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Memo1->Clear();
	Edit1->Clear();
}


//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	k = StrToInt(Edit1->Text) *2;
	fact = 1;

	for ((i = 2); i <= k; i++)
	{
	   fact =fact * i;
	}
	Memo1->Clear();
	Memo1->Lines->Add(FloatToStr( fact));
}
//---------------------------------------------------------------------------
