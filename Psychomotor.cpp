//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"
#include <iostream>
#include <string>
#include "Psychomotor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int bulbNumber = 0;
bool isGameOn = false;

int whichLightBulb()
{
 randomize();

 int bulbNumber;

 bulbNumber = random(16)+1;

 return bulbNumber;
}

String failureMessage()
{
  return "Niestety pomy³ka :( \n Naciœnij tutaj i zagraj jeszcze raz!";
}

void sequence()
{

    Application->ProcessMessages(); Sleep(1000);

    Form1->blb1->Picture->LoadFromFile("img/white.bmp");
    Form1->blb2->Picture->LoadFromFile("img/white.bmp");
    Form1->blb3->Picture->LoadFromFile("img/white.bmp");
    Form1->blb4->Picture->LoadFromFile("img/white.bmp");
    Form1->blb5->Picture->LoadFromFile("img/white.bmp");
    Form1->blb6->Picture->LoadFromFile("img/white.bmp");
    Form1->blb7->Picture->LoadFromFile("img/white.bmp");
    Form1->blb8->Picture->LoadFromFile("img/white.bmp");
    Form1->blb9->Picture->LoadFromFile("img/white.bmp");
    Form1->blb10->Picture->LoadFromFile("img/white.bmp");
    Form1->blb11->Picture->LoadFromFile("img/white.bmp");
    Form1->blb12->Picture->LoadFromFile("img/white.bmp");
    Form1->blb13->Picture->LoadFromFile("img/white.bmp");
    Form1->blb14->Picture->LoadFromFile("img/white.bmp");
    Form1->blb15->Picture->LoadFromFile("img/white.bmp");
    Form1->blb16->Picture->LoadFromFile("img/white.bmp");

        Form1->blb1->Enabled=false;
        Form1->blb2->Enabled=false;
        Form1->blb3->Enabled=false;
        Form1->blb4->Enabled=false;
        Form1->blb5->Enabled=false;
        Form1->blb6->Enabled=false;
        Form1->blb7->Enabled=false;
        Form1->blb8->Enabled=false;
        Form1->blb9->Enabled=false;
        Form1->blb10->Enabled=false;
        Form1->blb11->Enabled=false;
        Form1->blb12->Enabled=false;
        Form1->blb13->Enabled=false;
        Form1->blb14->Enabled=false;
        Form1->blb15->Enabled=false;
        Form1->blb16->Enabled=false;

 Form1->Label1->Caption = "Runda za chwilê siê rozpocznie. \n Przygotuj siê!";
    Application->ProcessMessages(); Sleep(3000);

  Form1->Label1->Caption = "Zapamiêtaj, która ¿arówka siê zapali";
    Application->ProcessMessages(); Sleep(2000);

    bulbNumber = whichLightBulb();

    switch(bulbNumber)
       {
          case 1:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr1->Visible = true;
          } break;

          case 2:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr2->Visible = true;
          } break;

          case 3:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr3->Visible = true;
          } break;

          case 4:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr4->Visible = true;
          } break;

          case 5:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr5->Visible = true;
          } break;

          case 6:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr6->Visible = true;
          } break;

          case 7:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr7->Visible = true;
          } break;

          case 8:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr8->Visible = true;
          } break;

          case 9:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr9->Visible = true;
          } break;

          case 10:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr10->Visible = true;
          } break;

          case 11:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr11->Visible = true;
          } break;

          case 12:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr12->Visible = true;
          } break;

          case 13:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr13->Visible = true;
          } break;

          case 14:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr14->Visible = true;
          } break;

          case 15:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr15->Visible = true;
          } break;

          case 16:
          {
          sndPlaySound("snd/SparkleSoundEffect.wav",SND_ASYNC);
          Form1->blbr16->Visible = true;
          } break;
       }//switch

       Application->ProcessMessages(); Sleep(1200);

       Form1->blbr1->Visible = false;
       Form1->blbr2->Visible = false;
       Form1->blbr3->Visible = false;
       Form1->blbr4->Visible = false;
       Form1->blbr5->Visible = false;
       Form1->blbr6->Visible = false;
       Form1->blbr7->Visible = false;
       Form1->blbr8->Visible = false;
       Form1->blbr9->Visible = false;
       Form1->blbr10->Visible = false;
       Form1->blbr11->Visible = false;
       Form1->blbr12->Visible = false;
       Form1->blbr13->Visible = false;
       Form1->blbr14->Visible = false;
       Form1->blbr15->Visible = false;
       Form1->blbr16->Visible = false;
       Application->ProcessMessages(); Sleep(100);

        Form1->blb1->Enabled=true;
        Form1->blb2->Enabled=true;
        Form1->blb3->Enabled=true;
        Form1->blb4->Enabled=true;
        Form1->blb5->Enabled=true;
        Form1->blb6->Enabled=true;
        Form1->blb7->Enabled=true;
        Form1->blb8->Enabled=true;
        Form1->blb9->Enabled=true;
        Form1->blb10->Enabled=true;
        Form1->blb11->Enabled=true;
        Form1->blb12->Enabled=true;
        Form1->blb13->Enabled=true;
        Form1->blb14->Enabled=true;
        Form1->blb15->Enabled=true;
        Form1->blb16->Enabled=true;

        Form1->Label1->Caption = "OdnajdŸ ¿arówkê :)";
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
isGameOn = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender)
{
  if(isGameOn == false)
  {
       isGameOn = true;
       sndPlaySound("snd/start.wav",SND_ASYNC);
       sequence();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb1Click(TObject *Sender)
{    
   if(isGameOn == true)
   {
      if(bulbNumber!=1)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb2Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=2)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb3Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=3)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb4Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=4)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb5Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=5)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb6Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=6)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb7Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=7)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb8Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=8)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb9Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=9)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb10Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=10)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb11Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=11)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb12Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=12)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb13Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=13)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb14Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=14)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb15Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=15)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb16Click(TObject *Sender)
{
   if(isGameOn == true)
   {
      if(bulbNumber!=16)
      {
         Label1->Caption = failureMessage();
         sndPlaySound("snd/gameover.wav",SND_ASYNC);
         isGameOn = false;
      }
      else
      {
         Label1->Caption = "Doskonale!";
         blb1->Picture->LoadFromFile("img/white.bmp");
         sequence();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb1->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
     blb1->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb2->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb2->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb3MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb3->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb3MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb3->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb4MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb4->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb4MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
     blb4->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb5MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb5->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb5MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb5->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb6MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb6->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb6MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb6->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb7MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb7->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb7MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
     blb7->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb8MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb8->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb8MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb8->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb9MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    blb9->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb9MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb9->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb10MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb10->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb10MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb10->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb11MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb11->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb11MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb11->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb12MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb12->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb12MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb12->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb13MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb13->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb13MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb13->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb14MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb14->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb14MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb14->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb15MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb15->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb15MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb15->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb16MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
    blb16->Picture->LoadFromFile("img/red.bmp");
    sndPlaySound("snd/LightOnSoundEffect.wav",SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blb16MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
      blb16->Picture->LoadFromFile("img/white.bmp");
}
//---------------------------------------------------------------------------


