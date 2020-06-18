#pragma once
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Collections::Generic;
Bitmap^ koordinant_ciz(PictureBox^ picturebox, Bitmap^ surface);
void Arti_Ciz(PictureBox^ picturebox,Bitmap^ surface, Color renk, int x, int y);
//void Line_Ciz(PictureBox^ picturebox,  Bitmap^ surface, List<Vectorler^>^ h, Color color, int W1, int W2, int W3);
void Line_Ciz(PictureBox^ picturebox, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar,float carpan);