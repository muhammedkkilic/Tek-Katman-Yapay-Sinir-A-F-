using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "Vectorler.h"
#include <math.h>
Bitmap^ koordinant_ciz(PictureBox^ picturebox,Bitmap^ surface)
{
	int Width = picturebox->Width;
	int Height = picturebox->Height;
	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;
	surface = gcnew Bitmap(Width,Height);
	picturebox->Image = surface;
	Graphics^ g;
	g = Graphics::FromImage(surface);
	Pen^ color = gcnew Pen(Color::Black);
	g->DrawLine(color, 0, (int)Height_yarim, Width, (int)Height_yarim);
	g->DrawLine(color, Width_yarim, 0, Width_yarim, Height);
	return surface;
}
void Arti_Ciz(PictureBox^ picturebox,Bitmap^ surface,Color renk,int x, int y)
{
	int Width = picturebox->Width;
	int Height = picturebox->Height;
	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;

	int row, column, row_limit, column_limit;
	row = (Height_yarim - y) - 5;
	row_limit = (Height_yarim - y) + 5;
	column = (x + Width_yarim) - 5;
	column_limit = (x + Width_yarim) + 5;
	//Bitmap^ surface = gcnew Bitmap(Width, Height);
	picturebox->Image = surface;
	Graphics^ g;
	g = Graphics::FromImage(surface);
	
	Pen^ color = gcnew Pen(renk);
	g->DrawLine(color, x + (int)Width_yarim, row, x + (int)Width_yarim, row_limit);
	g->DrawLine(color, column, Height_yarim - y, column_limit, Height_yarim - y);
}
//void Line_Ciz(PictureBox^ picturebox, List<Vectorler^>^ h,Color renk, int W1, int W2, int W3)
void Line_Ciz(PictureBox^ picturebox, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar,float carpan)
{
	
	int Width = picturebox->Width;
	int Height = picturebox->Height;
	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;


	Bitmap^ surface = gcnew Bitmap(Width, Height);
	surface = koordinant_ciz(picturebox,surface);
	//picturebox->Image = surface;
	Graphics^ g;
	g = Graphics::FromImage(surface);

	int row, column, row_limit, column_limit;
	for each (Vectorler ^ nokta in h)
	{
		Arti_Ciz(picturebox, surface, nokta->get_color(), nokta->get_x(), nokta->get_y());
	}
	//MessageBox::Show(Convert::ToString(agirliklar->Count));
	for each (Vectorler ^ agirlik in agirliklar)
	{
		//Arti_Ciz(picturebox, surface, nokta->get_color(), nokta->get_x(), nokta->get_y());
		Pen^ color = gcnew Pen(agirlik->get_color());
		int W1 = agirlik->get_x();
		int W2 = agirlik->get_y();
		int W3 = agirlik->get_z()*carpan;
		float y_denklem1, y_denklem2;
		float x_denklem1, x_denklem2;
		int x1, y1, x2, y2;
		if (W1 == 0 && W2 == 0)
		{
			return;
		}
		if (W1 == 0 || W2 == 0)
		{
			if (W1 == 0)
			{
				y1 = (-W3) / W2;
				y2 = (-W3) / W2;
				x1 = Width_yarim;
				x2 = -Width_yarim;
			}
			if (W2 == 0)
			{
				x1 = (-W3) / W1;
				x2 = (-W3) / W1;
				y1 = Height_yarim;
				y2 = -Height_yarim;
			}
		}
		else
		{
			y_denklem1 = (-W3 - (W1 * (Width_yarim))) / W2;
			y_denklem2 = (-W3 - (W1 * (-Width_yarim))) / W2;
			x_denklem1 = (-W2 * (Height_yarim)-W3) / W1;
			x_denklem2 = (-W2 * (-Height_yarim) - W3) / W1;

			bool nokta1_bulundu = false;
			if (fabs(y_denklem1) <= Height_yarim)
			{
				x1 = Width_yarim;
				y1 = y_denklem1;
				nokta1_bulundu = true;
			}
			if (fabs(y_denklem2) <= Height_yarim)
			{
				if (nokta1_bulundu == true)
				{
					x2 = -Width_yarim;
					y2 = y_denklem2;
				}
				else
				{
					x1 = -Width_yarim;
					y1 = y_denklem2;
					nokta1_bulundu = true;
				}
			}
			if (fabs(x_denklem1) <= Width_yarim)
			{
				if (nokta1_bulundu == true)
				{
					x2 = x_denklem1;
					y2 = Height_yarim;
				}
				else
				{
					x1 = x_denklem1;
					y1 = Height_yarim;
					nokta1_bulundu = true;
				}
			}
			if (fabs(x_denklem2) <= Width_yarim)
			{
				if (nokta1_bulundu == true)
				{
					x2 = x_denklem2;
					y2 = -Height_yarim;
				}
				else
				{
					x1 = x_denklem2;
					y1 = -Height_yarim;
					nokta1_bulundu = true;
				}
			}
		}
		int koordinant_ekseni_Height = (Height / 2) + 1;
		int koordinant_ekseni_Width = (Width / 2) + 1;

		x1 = x1 + koordinant_ekseni_Width;
		y1 = koordinant_ekseni_Height - y1;
		x2 = x2 + koordinant_ekseni_Width;
		y2 = koordinant_ekseni_Height - y2;
		g->DrawLine(color, x1, y1, x2, y2);
		
	}
	picturebox->Update();
}