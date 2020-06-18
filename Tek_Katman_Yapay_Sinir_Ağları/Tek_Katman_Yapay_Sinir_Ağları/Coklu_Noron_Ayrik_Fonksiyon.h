#pragma once
#include <windows.h>
#include <math.h>
#include "Vectorler.h"
#include "Aktivasyon_Fonksiyonlari.h"
#include "form_fonksiyonlari.h"
#include "ysa_fonksiyonlari.h"

#include <ctime>
#include <cstdlib>
namespace TekKatmanYapaySinirAðlarý {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Coklu_Noron_Ayrik_Fonksiyon için özet
	/// </summary>
	public ref class Coklu_Noron_Ayrik_Fonksiyon : public System::Windows::Forms::Form
	{
	public:
		Coklu_Noron_Ayrik_Fonksiyon(void)
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
		~Coklu_Noron_Ayrik_Fonksiyon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox2;
	protected:
	private: System::Windows::Forms::Label^ label7;

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

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private:
		List<Vectorler^>^ input = gcnew List<Vectorler^>();
		List<Vectorler^>^ agirliklar = gcnew List<Vectorler^>();

		//int Height = 501;
		//int Width = 501;

		//int koordinant_ekseni_Height = (Height / 2) + 1;
		//int koordinant_ekseni_Width = (Width / 2) + 1;

		//int Height_yarim = Height / 2;
		//int Width_yarim = Width / 2;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(848, 323);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(120, 17);
			this->checkBox2->TabIndex = 56;
			this->checkBox2->Text = L"Ara Aðýrlýklarý Göster";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(192, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(265, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"ÇOKLU NÖRON AYRIK AKTÝVASYON FONKSÝYONU";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(764, 147);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(626, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Örneklerin Sýnýfýný Seçiniz";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(904, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 40);
			this->button3->TabIndex = 51;
			this->button3->Text = L"Ayarlarý Setle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"2", L"3", L"4", L"5", L"6" });
			this->comboBox1->Location = System::Drawing::Point(764, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(649, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Sýnýf Sayýsýný Giriniz :";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(904, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Random Doðru";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(739, 380);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 47;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(662, 383);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Saykýl Sayýsý :";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(785, 262);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 45;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(785, 236);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 44;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(785, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 43;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(759, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Z :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(759, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Y :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(759, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"X :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(702, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 55);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Öðren";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(84, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 501);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::pictureBox1_MouseClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(702, 459);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 46);
			this->button4->TabIndex = 57;
			this->button4->Text = L"Temizle";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(798, 38);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 75;
			this->textBox5->Text = L"0.8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(689, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 13);
			this->label8->TabIndex = 74;
			this->label8->Text = L"Öðrenme Katsayýsý : ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(629, 236);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 76;
			this->checkBox1->Text = L"Normalize";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Coklu_Noron_Ayrik_Fonksiyon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 600);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label7);
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
			this->Name = L"Coklu_Noron_Ayrik_Fonksiyon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Coklu_Noron_Ayrik_Fonksiyon";
			this->Load += gcnew System::EventHandler(this, &Coklu_Noron_Ayrik_Fonksiyon::Coklu_Noron_Ayrik_Fonksiyon_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Coklu_Noron_Ayrik_Fonksiyon_Load(System::Object^ sender, System::EventArgs^ e)
	{
		surface = koordinant_ciz(pictureBox1, surface);
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		int Height = pictureBox1->Height;
		int Width = pictureBox1->Width;

		//int koordinant_ekseni_Height = (Height / 2) + 1;
		//int koordinant_ekseni_Width = (Width / 2) + 1;

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
		input->Add(nokta);
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
	ayrik_random_dogru_olustur(pictureBox1,agirliklar,max);
	random_dogru_olustu = true;
	Line_Ciz(pictureBox1, input, agirliklar, 1);
	pictureBox1->Update();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ gelen_veri = textBox5->Text;
	if (gelen_veri->IndexOf(".") >= 0)
	{
		gelen_veri = gelen_veri->Replace(".", ",");
	}

	float learning_rate = Convert::ToDouble(gelen_veri);
	int max = Convert::ToInt32(comboBox1->SelectedItem);
	if (random_dogru_olustu == false)
	{
		ayrik_random_dogru_olustur(pictureBox1, agirliklar, max);
		random_dogru_olustu = true;
	}
	egitim_tek_katman_coklu_noron_ayrik(pictureBox1, surface, textBox4, comboBox1, checkBox1, checkBox2, input, agirliklar,learning_rate);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	input->Clear();
	agirliklar->Clear();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";

	comboBox1->Enabled = true;
	comboBox1->SelectedIndex = -1;
	button3->Enabled = true;
	comboBox2->Items->Clear();

	surface = gcnew Bitmap(Width, Height);
	surface = koordinant_ciz(pictureBox1, surface);
}


};
}
