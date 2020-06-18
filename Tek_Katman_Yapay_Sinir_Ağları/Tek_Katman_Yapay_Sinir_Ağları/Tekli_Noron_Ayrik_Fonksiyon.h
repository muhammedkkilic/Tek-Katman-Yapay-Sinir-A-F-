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
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Tekli_Noron_Ayrik_Fonksiyon için özet
	/// </summary>
	public ref class Tekli_Noron_Ayrik_Fonksiyon : public System::Windows::Forms::Form
	{
	public:
		Tekli_Noron_Ayrik_Fonksiyon(void)
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
		~Tekli_Noron_Ayrik_Fonksiyon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
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
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;

	private:
		List<Vectorler^>^ input = gcnew List<Vectorler^>();
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(877, 287);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(120, 17);
			this->checkBox1->TabIndex = 36;
			this->checkBox1->Text = L"Ara Aðýrlýklarý Göster";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(202, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"TEKLÝ NÖRON AYRIK AKTÝVASYON FONKSÝYONU";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(868, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Random Doðru";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(763, 344);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(686, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Saykýl Sayýsý :";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(749, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(749, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 30;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(749, 177);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(723, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Z :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(723, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Y :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(723, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"X :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(726, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 55);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Öðren";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::button1_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(763, 129);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 17);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"Yeþil";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(763, 91);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 17);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Kýrmýzý";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(61, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 501);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::pictureBox1_MouseClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(689, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Öðrenme Katsayýsý : ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(798, 51);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 38;
			this->textBox5->Text = L"0.4";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(726, 404);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 49);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Temizle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::button3_Click);
			// 
			// Tekli_Noron_Ayrik_Fonksiyon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 600);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox1);
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
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Tekli_Noron_Ayrik_Fonksiyon";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tekli_Noron_Ayrik_Fonksiyon";
			this->Load += gcnew System::EventHandler(this, &Tekli_Noron_Ayrik_Fonksiyon::Tekli_Noron_Ayrik_Fonksiyon_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void Tekli_Noron_Ayrik_Fonksiyon_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		surface = koordinant_ciz(pictureBox1,surface);
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
    {
		int Height = pictureBox1->Height;
		int Width = pictureBox1->Width;

		int Height_yarim = Height / 2;
		int Width_yarim = Width / 2;


	    int x, y;
	    x = (e->X) - Width_yarim;
	    y = Height_yarim - (e->Y);
	    textBox1->Text = x.ToString();
	    textBox2->Text = y.ToString();
	    textBox3->Text = "1";

		if (radioButton1->Checked)
		{
			Vectorler^ nokta = gcnew Vectorler();
			nokta->koordinatlar(x, y, 1);
			nokta->set_d(1);
			nokta->set_color(Color::Red);
			input->Add(nokta);
			Arti_Ciz(pictureBox1,surface,Color::Red, x, y);

		}
		else if (radioButton2->Checked)
		{
			Vectorler^ nokta = gcnew Vectorler();
			nokta->koordinatlar(x, y, 1);
			nokta->set_d(-1);
			nokta->set_color(Color::Green);
			input->Add(nokta);
			Arti_Ciz(pictureBox1,surface, Color::Green, x, y);
		}
    }
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ayrik_random_dogru_olustur(pictureBox1, agirliklar, 1);
	random_dogru_olustu = true;
	Line_Ciz(pictureBox1, input, agirliklar,1);
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
	if (random_dogru_olustu == false)
	{
		ayrik_random_dogru_olustur(pictureBox1, agirliklar, 1);
		random_dogru_olustu = true;
	}
	egitim_tek_katman_tekli_noron_ayrik(pictureBox1,surface, textBox4, checkBox1, input, agirliklar, learning_rate);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	input->Clear();
	agirliklar->Clear();
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	radioButton1->Select();
	random_dogru_olustu = false;
	surface = gcnew Bitmap(Width, Height);
	surface = koordinant_ciz(pictureBox1,surface);
}
};
}
