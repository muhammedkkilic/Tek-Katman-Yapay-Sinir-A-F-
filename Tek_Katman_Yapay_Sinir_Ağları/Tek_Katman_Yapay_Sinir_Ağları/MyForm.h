#pragma once
#include "Ana_Sayfa.h"
#include "Tekli_Noron_Ayrik_Fonksiyon.h"
#include "Tekli_Noron_Surekli_Fonksiyon.h"
#include "Coklu_Noron_Ayrik_Fonksiyon.h"
#include "Coklu_Noron_Surekli_Fonksiyon.h"
namespace TekKatmanYapaySinirA�lar� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm i�in �zet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ trainingToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ tekliN�ronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tekliN�ronAyr�kFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tekliN�ronS�rekliFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �okluN�ronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �okluN�ronAyr�kFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �okluN�ronS�rekliFonksiyonToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ giri�ToolStripMenuItem;



	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
		///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->giri�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliN�ronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliN�ronAyr�kFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliN�ronS�rekliFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�okluN�ronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�okluN�ronAyr�kFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�okluN�ronS�rekliFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->trainingToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1062, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// trainingToolStripMenuItem
			// 
			this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->giri�ToolStripMenuItem,
					this->tekliN�ronToolStripMenuItem, this->�okluN�ronToolStripMenuItem
			});
			this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			this->trainingToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->trainingToolStripMenuItem->Text = L"Training";
			// 
			// giri�ToolStripMenuItem
			// 
			this->giri�ToolStripMenuItem->Name = L"giri�ToolStripMenuItem";
			this->giri�ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->giri�ToolStripMenuItem->Text = L"Giri�";
			this->giri�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::giri�ToolStripMenuItem_Click);
			// 
			// tekliN�ronToolStripMenuItem
			// 
			this->tekliN�ronToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tekliN�ronAyr�kFonksiyonToolStripMenuItem,
					this->tekliN�ronS�rekliFonksiyonToolStripMenuItem
			});
			this->tekliN�ronToolStripMenuItem->Name = L"tekliN�ronToolStripMenuItem";
			this->tekliN�ronToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tekliN�ronToolStripMenuItem->Text = L"Tekli N�ron";
			// 
			// tekliN�ronAyr�kFonksiyonToolStripMenuItem
			// 
			this->tekliN�ronAyr�kFonksiyonToolStripMenuItem->Name = L"tekliN�ronAyr�kFonksiyonToolStripMenuItem";
			this->tekliN�ronAyr�kFonksiyonToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->tekliN�ronAyr�kFonksiyonToolStripMenuItem->Text = L"Tekli N�ron Ayr�k Fonksiyon";
			this->tekliN�ronAyr�kFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tekliN�ronAyr�kFonksiyonToolStripMenuItem_Click);
			// 
			// tekliN�ronS�rekliFonksiyonToolStripMenuItem
			// 
			this->tekliN�ronS�rekliFonksiyonToolStripMenuItem->Name = L"tekliN�ronS�rekliFonksiyonToolStripMenuItem";
			this->tekliN�ronS�rekliFonksiyonToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->tekliN�ronS�rekliFonksiyonToolStripMenuItem->Text = L"Tekli N�ron S�rekli Fonksiyon";
			this->tekliN�ronS�rekliFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tekliN�ronS�rekliFonksiyonToolStripMenuItem_Click);
			// 
			// �okluN�ronToolStripMenuItem
			// 
			this->�okluN�ronToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�okluN�ronAyr�kFonksiyonToolStripMenuItem,
					this->�okluN�ronS�rekliFonksiyonToolStripMenuItem
			});
			this->�okluN�ronToolStripMenuItem->Name = L"�okluN�ronToolStripMenuItem";
			this->�okluN�ronToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�okluN�ronToolStripMenuItem->Text = L"�oklu N�ron";
			// 
			// �okluN�ronAyr�kFonksiyonToolStripMenuItem
			// 
			this->�okluN�ronAyr�kFonksiyonToolStripMenuItem->Name = L"�okluN�ronAyr�kFonksiyonToolStripMenuItem";
			this->�okluN�ronAyr�kFonksiyonToolStripMenuItem->Size = System::Drawing::Size(237, 22);
			this->�okluN�ronAyr�kFonksiyonToolStripMenuItem->Text = L"�oklu N�ron Ayr�k Fonksiyon";
			this->�okluN�ronAyr�kFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�okluN�ronAyr�kFonksiyonToolStripMenuItem_Click);
			// 
			// �okluN�ronS�rekliFonksiyonToolStripMenuItem
			// 
			this->�okluN�ronS�rekliFonksiyonToolStripMenuItem->Name = L"�okluN�ronS�rekliFonksiyonToolStripMenuItem";
			this->�okluN�ronS�rekliFonksiyonToolStripMenuItem->Size = System::Drawing::Size(237, 22);
			this->�okluN�ronS�rekliFonksiyonToolStripMenuItem->Text = L"�oklu N�ron S�rekli Fonksiyon";
			this->�okluN�ronS�rekliFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�okluN�ronS�rekliFonksiyonToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 600);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Yapay Sinir A�lar�";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:System::Void Formlar�_Kontrol_Et_Kapat()
	{
		if (Application::OpenForms["Ana_Sayfa"])
		{
			Application::OpenForms["Ana_Sayfa"]->Close();
		}
		if (Application::OpenForms["Tekli_Noron_Ayrik_Fonksiyon"])
		{
			Application::OpenForms["Tekli_Noron_Ayrik_Fonksiyon"]->Close();
		}
		if (Application::OpenForms["Tekli_Noron_Surekli_Fonksiyon"])
		{
			Application::OpenForms["Tekli_Noron_Surekli_Fonksiyon"]->Close();
		}
		if (Application::OpenForms["Coklu_Noron_Ayrik_Fonksiyon"])
		{
			Application::OpenForms["Coklu_Noron_Ayrik_Fonksiyon"]->Close();
		}
		if (Application::OpenForms["Coklu_Noron_Surekli_Fonksiyon"])
		{
			Application::OpenForms["Coklu_Noron_Surekli_Fonksiyon"]->Close();
		}
	}
	private: System::Void tekliN�ronAyr�kFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Formlar�_Kontrol_Et_Kapat();
		if (!Application::OpenForms["Tekli_Noron_Ayrik_Fonksiyon"])
		{
			Tekli_Noron_Ayrik_Fonksiyon^ tekli_noron_ayrik_fonksiyon = gcnew Tekli_Noron_Ayrik_Fonksiyon();
			tekli_noron_ayrik_fonksiyon->MdiParent = this;
			tekli_noron_ayrik_fonksiyon->Left = 0;
			tekli_noron_ayrik_fonksiyon->Top = 0;
			Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
			recNew = this->ClientRectangle;
			recNew->Height -= 30;
			recNew->Width -= 5;
			tekli_noron_ayrik_fonksiyon->Size = recNew->Size;
			tekli_noron_ayrik_fonksiyon->Show();
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Application::OpenForms["Ana_Sayfa"])
		{
			Ana_Sayfa^ ana_sayfa = gcnew Ana_Sayfa();
			ana_sayfa->MdiParent = this;
			ana_sayfa->Left = 0;
			ana_sayfa->Top = 0;
			Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
			recNew = this->ClientRectangle;
			recNew->Height -= 30;
			recNew->Width -= 5;
			ana_sayfa->Size = recNew->Size;
			ana_sayfa->Show();
		}
	}
private: System::Void tekliN�ronS�rekliFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlar�_Kontrol_Et_Kapat();
	if (!Application::OpenForms["Tekli_Noron_Surekli_Fonksiyon"])
	{
		Tekli_Noron_Surekli_Fonksiyon^ tekli_noron_surekli_fonksiyon = gcnew Tekli_Noron_Surekli_Fonksiyon();
		tekli_noron_surekli_fonksiyon->MdiParent = this;
		tekli_noron_surekli_fonksiyon->Left = 0;
		tekli_noron_surekli_fonksiyon->Top = 0;
		Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
		recNew = this->ClientRectangle;
		recNew->Height -= 30;
		recNew->Width -= 5;
		tekli_noron_surekli_fonksiyon->Size = recNew->Size;
		tekli_noron_surekli_fonksiyon->Show();
	}
}

private: System::Void �okluN�ronAyr�kFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlar�_Kontrol_Et_Kapat();
	if (!Application::OpenForms["Coklu_Noron_Ayrik_Fonksiyon"])
	{
		Coklu_Noron_Ayrik_Fonksiyon^ coklu_noron_ayrik_fonksiyon = gcnew Coklu_Noron_Ayrik_Fonksiyon();
		coklu_noron_ayrik_fonksiyon->MdiParent = this;
		coklu_noron_ayrik_fonksiyon->Left = 0;
		coklu_noron_ayrik_fonksiyon->Top = 0;
		Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
		recNew = this->ClientRectangle;
		recNew->Height -= 30;
		recNew->Width -= 5;
		coklu_noron_ayrik_fonksiyon->Size = recNew->Size;
		coklu_noron_ayrik_fonksiyon->Show();
	}
}
private: System::Void �okluN�ronS�rekliFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlar�_Kontrol_Et_Kapat();
	if (!Application::OpenForms["Coklu_Noron_Surekli_Fonksiyon"])
	{
		Coklu_Noron_Surekli_Fonksiyon^ coklu_noron_surekli_fonksiyon = gcnew Coklu_Noron_Surekli_Fonksiyon();
		coklu_noron_surekli_fonksiyon->MdiParent = this;
		coklu_noron_surekli_fonksiyon->Left = 0;
		coklu_noron_surekli_fonksiyon->Top = 0;
		Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
		recNew = this->ClientRectangle;
		recNew->Height -= 30;
		recNew->Width -= 5;
		coklu_noron_surekli_fonksiyon->Size = recNew->Size;
		coklu_noron_surekli_fonksiyon->Show();
	}
}
private: System::Void giri�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlar�_Kontrol_Et_Kapat();
	if (!Application::OpenForms["Ana_Sayfa"])
	{
		Ana_Sayfa^ ana_sayfa = gcnew Ana_Sayfa();
		ana_sayfa->MdiParent = this;
		ana_sayfa->Left = 0;
		ana_sayfa->Top = 0;
		Drawing::Rectangle^ recNew = gcnew Drawing::Rectangle();
		recNew = this->ClientRectangle;
		recNew->Height -= 30;
		recNew->Width -= 5;
		ana_sayfa->Size = recNew->Size;
		ana_sayfa->Show();
	}
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
