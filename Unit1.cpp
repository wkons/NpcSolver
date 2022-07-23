//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include "MTrand.hpp"

MTRand *rnd;

Graphics::TBitmap *bmp;

char *buf;

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  // Инициализация генератора случайных чисел и графики

  rnd = new MTRand();

  bmp = new Graphics::TBitmap();

  bmp->Width=100;//SZ_X;

  bmp->Height=100;//SZ_Y;

  bmp->PixelFormat = pf24bit;

  DoubleBuffered=1;

  // Инициализация буфера сети

  buf=(char*)malloc(100*100);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  delete bmp, rnd;

  free(buf);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormPaint(TObject *Sender)
{
/*
  for (int i=0;i<SZ_Y;i++)
  {
	unsigned char *b=(unsigned char*)bmp->ScanLine[i];

	for (int j=0;j<SZ_X;j++)
	{
	  if (buf[i*SZ_Y+j])
	  {
		b[j*3+0]=128;
		b[j*3+1]=255;
		b[j*3+2]=128;
	  }
	  else
	  {
		b[j*3+0]=0;
		b[j*3+1]=0;
		b[j*3+2]=0;
	  }
	}
  }

  TRect r;

  r.top=PaintBox1->Top;

  r.left=PaintBox1->Left;

  r.bottom=PaintBox1->Top+PaintBox1->Height;

  r.right=PaintBox1->Left+PaintBox1->Width;

  Canvas->Pen->Color=clRed;

  Canvas->Rectangle(r.left-1,r.top-1,r.right+1,r.bottom+1);

  Canvas->StretchDraw(r,bmp);
*/
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
  int size=10;

  for (int i=0;i<size;i++)
  {

  }
}
//---------------------------------------------------------------------------

