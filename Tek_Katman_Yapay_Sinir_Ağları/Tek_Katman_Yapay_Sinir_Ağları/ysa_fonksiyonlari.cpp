using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
#include "Vectorler.h"
#include <math.h>
#include "Aktivasyon_Fonksiyonlari.h"
#include "form_fonksiyonlari.h"

#include <ctime>
#include <cstdlib>
void ayrik_random_dogru_olustur(PictureBox^ picturebox, List<Vectorler^>^ agirliklar,int sinif_sayisi)
{
	int Width = picturebox->Width;
	int Height = picturebox->Height;
	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;

	agirliklar->Clear();
	srand(time(NULL));
	float x, y, z;
	for (int secilen_sinif = 1; secilen_sinif <= sinif_sayisi; secilen_sinif++)
	{
		Color color;
		if (secilen_sinif == 1)
		{
			color = Color::Red;
		}
		else if (secilen_sinif == 2)
		{
			color = Color::Green;
		}
		else if (secilen_sinif == 3)
		{
			color = Color::Blue;
		}
		else if (secilen_sinif == 4)
		{
			color = Color::FromArgb(255, 105, 180);
		}
		else if (secilen_sinif == 5)
		{
			color = Color::FromArgb(0, 255, 255);
		}
		else if (secilen_sinif == 6)
		{
			color = Color::FromArgb(255, 255, 0);
		}
		Vectorler^ nesne = gcnew Vectorler();
		nesne->set_d(secilen_sinif);
		x = (0 + (rand() % Height) - Height_yarim);
		y = (0 + (rand() % Height) - Height_yarim);
		z = (0 + (rand() % Height) - Height_yarim);
		nesne->koordinatlar(x, y, z);
		nesne->set_color(color);
		agirliklar->Add(nesne);
	}
}
void surekli_random_dogru_olustur(PictureBox^ picturebox, List<Vectorler^>^ agirliklar, int sinif_sayisi)
{
	int Width = picturebox->Width;
	int Height = picturebox->Height;
	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;

	agirliklar->Clear();
	srand(time(NULL));
	float x, y, z;
	for (int secilen_sinif = 1; secilen_sinif <= sinif_sayisi; secilen_sinif++) 
	{
		Color color;
		if (secilen_sinif == 1)
		{
			color = Color::Red;
		}
		else if (secilen_sinif == 2)
		{
			color = Color::Green;
		}
		else if (secilen_sinif == 3)
		{
			color = Color::Blue;
		}
		else if (secilen_sinif == 4)
		{
			color = Color::FromArgb(255, 105, 180);
		}
		else if (secilen_sinif == 5)
		{
			color = Color::FromArgb(0, 255, 255);
		}
		else if (secilen_sinif == 6)
		{
			color = Color::FromArgb(255, 255, 0);
		}
		Vectorler^ nesne = gcnew Vectorler();
		nesne->set_d(secilen_sinif);
		x = (0 + (rand() % 10) - 5);
		y = (0 + (rand() % 10) - 5);
		z = (0 + (rand() % 10) - 5);
		nesne->koordinatlar(x, y, z);
		nesne->set_color(color);
		agirliklar->Add(nesne);
	}
}
void egitim_tek_katman_tekli_noron_ayrik(PictureBox^ picturebox,Bitmap^ surface,TextBox^ textbox,CheckBox^ checkbox,List<Vectorler^>^ h, List<Vectorler^>^ agirliklar,float learning_rate)
{
	int saykil = 1;
	bool hata = true;
	bool bulundu = false;
	while (hata)
	{
		hata = false;
		int net;
		float toplam = 0;
		for each (Vectorler ^ a in h)
		{
			toplam = 0;
			toplam = agirliklar[0]->get_x() * a->get_x();
			toplam = toplam + agirliklar[0]->get_y() * a->get_y();
			toplam = toplam + agirliklar[0]->get_z() * a->get_z();

			net = sgn(toplam);

			agirliklar[0]->set_x(agirliklar[0]->get_x() + learning_rate * (a->get_d() - net) * (float)a->get_x());
			agirliklar[0]->set_y(agirliklar[0]->get_y() + learning_rate * (a->get_d() - net) * (float)a->get_y());
			agirliklar[0]->set_z(agirliklar[0]->get_z() + learning_rate * (a->get_d() - net) * (float)a->get_z());
		}
		if (checkbox->Checked)
		{
			Line_Ciz(picturebox, h,agirliklar,1);
			picturebox->Update();
		}
		for each (Vectorler ^ b in h)
		{
			float toplam = 0;
			toplam = toplam + b->get_x() * agirliklar[0]->get_x();
			toplam = toplam + b->get_y() * agirliklar[0]->get_y();
			toplam = toplam + b->get_z() * agirliklar[0]->get_z();
			float net;
			net = sgn(toplam);
			if (b->get_d() != net)
			{
				hata = true;
			}
		}
		saykil = saykil + 1;
		textbox->Text = Convert::ToString(saykil);
		textbox->Update();
	}

	Line_Ciz(picturebox, h,agirliklar,1);
	picturebox->Update();
	textbox->Text = Convert::ToString(saykil);
}
void egitim_tek_katman_tekli_noron_surekli(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, TextBox^ textbox2, CheckBox^ checkbox, List<Vectorler^>^ h_orijinal, List<Vectorler^>^ h_normal, List<Vectorler^>^ agirliklar, float learning_rate, float max_error)
{
	Bitmap^ surface2 = surface;
	float E = 0.0;
	int saykil = 1;
	bool hata = true;
	bool bulundu = false;
	while (hata)
	{
		E = 0.0;
		hata = false;
		float net;
		float turev;
		float toplam = 0;
		for each (Vectorler ^ a in h_normal)
		{
			toplam = 0;
			toplam = agirliklar[0]->get_x() * a->get_x();
			toplam = toplam + agirliklar[0]->get_y() * a->get_y();
			toplam = toplam + agirliklar[0]->get_z() * a->get_z();
			net = sigmoid(toplam);
			turev = sigmoid_turev(toplam);

			E = E + (pow((a->get_d() - net), 2)) / 2;

			agirliklar[0]->set_x(agirliklar[0]->get_x() + (learning_rate * (a->get_d() - net) * turev * (float)a->get_x()));
			agirliklar[0]->set_y(agirliklar[0]->get_y() + (learning_rate * (a->get_d() - net) * turev * (float)a->get_y()));
			agirliklar[0]->set_z(agirliklar[0]->get_z() + (learning_rate * (a->get_d() - net) * turev * (float)a->get_z()));
		}
		textbox->Text = Convert::ToString(saykil);
		textbox2->Text = E.ToString();
		textbox->Update();
		textbox2->Update();
		if (checkbox->Checked)
		{
			Line_Ciz(picturebox, h_orijinal,agirliklar,-50);
			picturebox->Update();
		}
		hata = true;
		saykil = saykil + 1;
		if(E < max_error)
		{
			hata = false;
		}
	}
	textbox2->Text = E.ToString();
	Line_Ciz(picturebox, h_orijinal,agirliklar,-50);
	picturebox->Update();
	textbox->Text = Convert::ToString(saykil);
}


void egitim_tek_katman_coklu_noron_ayrik(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox,ComboBox^ combobox, CheckBox^ checkbox, CheckBox^ checkbox2, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar, float learning_rate)
{
	int ornek_sayisi = 0;
	for each (Vectorler ^ a in h)
	{
		ornek_sayisi = ornek_sayisi + 1;
	}
	int class_sayisi = Convert::ToInt32(combobox->SelectedItem);
	float* beklenen_d_ler = new float[ornek_sayisi * class_sayisi]{};
	for (int i = 0; i < (ornek_sayisi * class_sayisi); i++)
	{
		beklenen_d_ler[i] = -1;
	}
	int iterator = 0;
	for each (Vectorler ^ a in h)
	{
		int hangi_class = a->get_d();
		beklenen_d_ler[(hangi_class - 1) * ornek_sayisi + iterator] = 1;
		iterator = iterator + 1;
	}
	int saykil = 0;
	bool hata = true;
	bool bulundu = false;
	int noron_index = 0;

	while (hata)
	{
		hata = false;
		float net;
		float delta_net;
		float toplam;
		float* sonuc = new float[class_sayisi] {};
		float* net_sonuc = new float[class_sayisi] {};

		int dugum_konum = 0;
		for each (Vectorler ^ a in h)
		{
			for (int i = 0; i < class_sayisi; i++)
			{
				toplam = 0;
				toplam = toplam + (agirliklar[i]->get_x() * a->get_x());
				toplam = toplam + (agirliklar[i]->get_y() * a->get_y());
				toplam = toplam + (agirliklar[i]->get_z() * a->get_z());
				sonuc[i] = toplam;
			}
			for (int i = 0; i < class_sayisi; i++)
			{
				net_sonuc[i] = sgn(sonuc[i]);
			}
			for (int i = 0; i < class_sayisi; i++)
			{
				int beklenen_sonuc = beklenen_d_ler[i * ornek_sayisi + dugum_konum];
				int gelen_sonuc = net_sonuc[i];
				if (beklenen_sonuc != gelen_sonuc)
				{
					hata = true;
					agirliklar[i]->set_x( agirliklar[i]->get_x() + (((learning_rate * (beklenen_sonuc - gelen_sonuc)) / 2) * a->get_x()));
					agirliklar[i]->set_y(agirliklar[i]->get_y() + (((learning_rate * (beklenen_sonuc - gelen_sonuc)) / 2) * a->get_y()));
					agirliklar[i]->set_z(agirliklar[i]->get_z() + (((learning_rate * (beklenen_sonuc - gelen_sonuc)) / 2) * a->get_z()));
				}
			}
			if (checkbox2->Checked)
			{
				Bitmap^ surface = gcnew Bitmap(501, 501);
				if (checkbox->Checked)
				{
					Line_Ciz(picturebox, h, agirliklar, 50);

				}
				else
				{
					Line_Ciz(picturebox, h, agirliklar, 1);
				}
			}
			dugum_konum = dugum_konum + 1;
		}
		textbox->Text = Convert::ToString(saykil);
		textbox->Update();
		saykil = saykil + 1;
	}
	textbox->Text = Convert::ToString(saykil);
	if (checkbox->Checked)
	{
		Line_Ciz(picturebox, h, agirliklar, 50);
	}
	else
	{
		Line_Ciz(picturebox, h, agirliklar, 1);
	}
}
void egitim_tek_katman_coklu_noron_surekli(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, TextBox^ textbox2, ComboBox^ combobox, CheckBox^ checkbox, CheckBox^ checkbox2, List<Vectorler^>^ h_orijinal, List<Vectorler^>^ h_normal, List<Vectorler^>^ agirliklar, float learning_rate, float max_error)
{
	int ornek_sayisi = 0;
	for each (Vectorler ^ a in h_normal)
	{
		ornek_sayisi = ornek_sayisi + 1;
	}
	int class_sayisi = Convert::ToInt32(combobox->SelectedItem);

	float* beklenen_d_ler = new float[ornek_sayisi * class_sayisi]{};
	for (int i = 0; i < (ornek_sayisi * class_sayisi); i++)
	{
		beklenen_d_ler[i] = -1;
	}
	int iterator = 0;
	for each (Vectorler ^ a in h_normal)
	{
		int hangi_class = a->get_d();
		beklenen_d_ler[(hangi_class - 1) * ornek_sayisi + iterator] = 1;
		iterator = iterator + 1;
	}
	int saykil = 0;
	bool hata = true;
	bool bulundu = false;
	int noron_index = 0;

	float E;
	while (hata)
	{
		hata = false;
		float net;

		float toplam;
		float* sonuc = new float[class_sayisi] {};
		float* net_sonuc = new float[class_sayisi] {};
		float* delta_net = new float[class_sayisi] {};
		E = 0;
		int dugum_konum = 0;
		for each (Vectorler ^ a in h_normal)
		{

			for (int i = 0; i < class_sayisi; i++)
			{
				toplam = 0;
				toplam = toplam + (agirliklar[i]->get_x() * a->get_x());
				toplam = toplam + (agirliklar[i]->get_y() * a->get_y());
				toplam = toplam + (agirliklar[i]->get_z() * a->get_z());
				sonuc[i] = toplam;
			}
			for (int i = 0; i < class_sayisi; i++)
			{
				net_sonuc[i] = sigmoid(sonuc[i]);
				delta_net[i] = sigmoid_turev(sonuc[i]);
			}
			for (int i = 0; i < class_sayisi; i++)
			{
				int beklenen_sonuc = beklenen_d_ler[i * ornek_sayisi + dugum_konum];
				float gelen_sonuc = net_sonuc[i];
				float turev = delta_net[i];
				agirliklar[i]->set_x(agirliklar[i]->get_x() + (((learning_rate * (beklenen_sonuc - gelen_sonuc))) * turev * a->get_x()));
				agirliklar[i]->set_y(agirliklar[i]->get_y() + (((learning_rate * (beklenen_sonuc - gelen_sonuc))) * turev * a->get_y()));
				agirliklar[i]->set_z(agirliklar[i]->get_z() + (((learning_rate * (beklenen_sonuc - gelen_sonuc))) * turev * a->get_z()));
				E = E + (pow(((float)beklenen_sonuc - gelen_sonuc), 2)) / 2;
			}
			if (checkbox2->Checked)
			{
				Bitmap^ surface = gcnew Bitmap(501, 501);
				Line_Ciz(picturebox, h_orijinal, agirliklar, 50);
			}
			dugum_konum = dugum_konum + 1;
		}
		textbox2->Text = E.ToString();
		textbox->Text = Convert::ToString(saykil);
		textbox->Update();
		textbox2->Update();
		saykil = saykil + 1;
		hata = true;
		if (E < max_error)
		{
			hata = false;
		}
	}
	textbox2->Text = E.ToString();
	textbox->Text = Convert::ToString(saykil);
	for (int i = 1; i <= class_sayisi; i++)
	{
		Line_Ciz(picturebox, h_orijinal, agirliklar, 50);
	}
}