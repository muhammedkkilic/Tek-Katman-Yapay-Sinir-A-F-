#pragma once
#include <windows.h>
#include <math.h>
#include "Vectorler.h"
#include "Aktivasyon_Fonksiyonlari.h"
#include "form_fonksiyonlari.h"
#include "ysa_fonksiyonlari.h"
namespace TekKatmanYapaySinirAðlarý {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Coklu_Noron_Surekli_Fonksiyon için özet
	/// </summary>
	public ref class Coklu_Noron_Surekli_Fonksiyon : public System::Windows::Forms::Form
	{
	public:
		Coklu_Noron_Surekli_Fonksiyon(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Coklu_Noron_Surekli_Fonksiyon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;

	private:
		List<Vectorler^>^ input_orijinal = gcnew List<Vectorler^>();
		List<Vectorler^>^ input_normal = gcnew List<Vectorler^>();

		List<Vectorler^>^ agirliklar = gcnew List<Vectorler^>();

		bool random_dogru_olustu = false;
		Bitmap^ surface;
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(853, 360);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(120, 17);
			this->checkBox2->TabIndex = 76;
			this->checkBox2->Text = L"Ara Aðýrlýklarý Göster";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(745, 455);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 75;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(668, 458);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 74;
			this->label8->Text = L"E :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(206, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(279, 13);
			this->label7->TabIndex = 73;
			this->label7->Text = L"ÇOKLU NÖRON SÝGMOÝD AKTÝVASYON FONKSÝYONU";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(618, 252);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 72;
			this->checkBox1->Text = L"Normalize";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::checkBox1_CheckedChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(760, 184);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 71;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(622, 187);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 13);
			this->label6->TabIndex = 70;
			this->label6->Text = L"Örneklerin Sýnýfýný Seçiniz";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(900, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 40);
			this->button3->TabIndex = 69;
			this->button3->Text = L"Ayarlarý Setle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"2", L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(760, 119);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 68;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(645, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Sýnýf Sayýsýný Giriniz :";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(900, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 66;
			this->button2->Text = L"Random Doðru";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(745, 417);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 65;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(668, 420);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Saykýl Sayýsý :";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(783, 299);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 63;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(783, 273);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 62;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(783, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(757, 302);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Z :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(757, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Y :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(757, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 58;
			this->label1->Text = L"X :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(708, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 55);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Öðren";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(82, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 501);
			this->pictureBox1->TabIndex = 56;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::pictureBox1_MouseClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(717, 497);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 51);
			this->button4->TabIndex = 77;
			this->button4->Text = L"Temizle";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(792, 64);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 81;
			this->textBox7->Text = L"0.01";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(683, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 13);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Maximum Error : ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(792, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 79;
			this->textBox6->Text = L"0.1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(683, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 13);
			this->label10->TabIndex = 78;
			this->label10->Text = L"Öðrenme Katsayýsý : ";
			// 
			// Coklu_Noron_Surekli_Fonksiyon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 600);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Coklu_Noron_Surekli_Fonksiyon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Coklu_Noron_Surekli_Fonksiyon";
			this->Load += gcnew System::EventHandler(this, &Coklu_Noron_Surekli_Fonksiyon::Coklu_Noron_Surekli_Fonksiyon_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void Coklu_Noron_Surekli_Fonksiyon_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		surface = koordinant_ciz(pictureBox1, surface);
	}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	int Height = pictureBox1->Height;
	int Width = pictureBox1->Width;

	int koordinant_ekseni_Height = (Height / 2) + 1;
	int koordinant_ekseni_Width = (Width / 2) + 1;

	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;

	int x, y;
	x = (e->X) - Width_yarim;
	y = Height_yarim - (e->Y);
	textBox1->Text = x.ToString();
	textBox2->Text = y.ToString();
	textBox3->Text = "1";

	int secilen_sinif = Convert::ToInt32(comboBox2->SelectedItem);
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
	Vectorler^ nokta = gcnew Vectorler();
	nokta->set_d(secilen_sinif);
	nokta->koordinatlar(x, y, 1);
	nokta->set_color(color);
	input_orijinal->Add(nokta);
	Arti_Ciz(pictureBox1, surface, color, x, y);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int max = Convert::ToInt32(comboBox1->SelectedItem);
	for (int i = 1; i <= max; i++)
	{
		comboBox2->Items->Add(i);
	}
	comboBox1->Enabled = false;
	button3->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int max = Convert::ToInt32(comboBox1->SelectedItem);
	surekli_random_dogru_olustur(pictureBox1, agirliklar, max);
	random_dogru_olustu = true;
	Line_Ciz(pictureBox1, input_orijinal, agirliklar, 50);
	pictureBox1->Update();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	surface = gcnew Bitmap(Width, Height);
	surface = koordinant_ciz(pictureBox1, surface);
	int Height = pictureBox1->Height;
	int Width = pictureBox1->Width;

	int Height_yarim = Height / 2;
	int Width_yarim = Width / 2;

	int koordinant_ekseni_Height = (Height_yarim)+1;
	int koordinant_ekseni_Width = (Width_yarim)+1;

	for each (Vectorler ^ p in input_orijinal)
	{
		float x1 = p->get_x();
		float y1 = p->get_y();
		int eski_x1 = x1;
		int eski_y1 = y1;
		float uzaklik = sqrt(x1 * x1 + y1 * y1);
		x1 = (x1 / koordinant_ekseni_Width);
		y1 = (y1 / koordinant_ekseni_Height);
		Vectorler^ nesne = gcnew Vectorler();
		nesne->koordinatlar(x1, y1, 1);
		nesne->set_d(p->get_d());
		nesne->set_color(p->get_color());
		input_normal->Add(nesne);
		int x = x1 * 50;
		int y = y1 * 50;
		p->set_x(x);
		p->set_y(y);
		Arti_Ciz(pictureBox1, surface, p->get_color(), x, y);
	}
	checkBox1->Enabled = false;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ gelen_veri = textBox6->Text;
	if (gelen_veri->IndexOf(".") >= 0)
	{
		gelen_veri = gelen_veri->Replace(".", ",");
	}

	float learning_rate = Convert::ToDouble(gelen_veri);
	gelen_veri = textBox7->Text;
	if (gelen_veri->IndexOf(".") >= 0)
	{
		gelen_veri = gelen_veri->Replace(".", ",");
	}
	float max_error = Convert::ToDouble(gelen_veri);
	int max = Convert::ToInt32(comboBox1->SelectedItem);
	if (checkBox1->Checked == false)
	{
		MessageBox::Show("Lütfen Normalizasyon Yapýnýz");
		return;
	}
	if (random_dogru_olustu == false)
	{
		ayrik_random_dogru_olustur(pictureBox1, agirliklar, max);
		random_dogru_olustu = true;
	}
	egitim_tek_katman_coklu_noron_surekli(pictureBox1, surface, textBox4, textBox5, comboBox1, checkBox1, checkBox2, input_orijinal, input_normal, agirliklar, learning_rate,max_error);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	input_orijinal->Clear();
	input_normal->Clear();
	agirliklar->Clear();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";

	comboBox1->Enabled = true;
	comboBox1->SelectedIndex = -1;
	button3->Enabled = true;
	comboBox2->Items->Clear();
	surface = gcnew Bitmap(Width, Height);
	surface = koordinant_ciz(pictureBox1, surface);
	checkBox1->Checked = false;
	checkBox1->Enabled = true;
}
};
}
