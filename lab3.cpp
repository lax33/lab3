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

double fact, rez, x, a, b, h ;
int k, i, j ;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Memo1->Clear();
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
}


//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	k = StrToInt(Edit1->Text);
	fact = 1;
	rez = 1;

	for(x=a; x<=b; x+h )
	{

		for (i = 1; i <= k; i++)
		{
			for (j = 1; j <= k*2; j++)
			{
				fact =fact * j;
			}

			rez =rez + pow(x, 2*i)/fact;
		}

		Memo1->Lines->Add("При X =" + FloatToStr( x) + "  " +  FloatToStr( rez));
	}



}
//---------------------------------------------------------------------------
