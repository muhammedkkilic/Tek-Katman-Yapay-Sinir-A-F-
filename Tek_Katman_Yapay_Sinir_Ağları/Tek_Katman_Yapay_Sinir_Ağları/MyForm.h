#pragma once
#include "Ana_Sayfa.h"
#include "Tekli_Noron_Ayrik_Fonksiyon.h"
#include "Tekli_Noron_Surekli_Fonksiyon.h"
#include "Coklu_Noron_Ayrik_Fonksiyon.h"
#include "Coklu_Noron_Surekli_Fonksiyon.h"
namespace TekKatmanYapaySinirAðlarý {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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


	private: System::Windows::Forms::ToolStripMenuItem^ tekliNöronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tekliNöronAyrýkFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tekliNöronSürekliFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çokluNöronToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çokluNöronAyrýkFonksiyonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çokluNöronSürekliFonksiyonToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ giriþToolStripMenuItem;



	private:
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->giriþToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliNöronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliNöronAyrýkFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tekliNöronSürekliFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çokluNöronToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çokluNöronAyrýkFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çokluNöronSürekliFonksiyonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->giriþToolStripMenuItem,
					this->tekliNöronToolStripMenuItem, this->çokluNöronToolStripMenuItem
			});
			this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			this->trainingToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->trainingToolStripMenuItem->Text = L"Training";
			// 
			// giriþToolStripMenuItem
			// 
			this->giriþToolStripMenuItem->Name = L"giriþToolStripMenuItem";
			this->giriþToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->giriþToolStripMenuItem->Text = L"Giriþ";
			this->giriþToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::giriþToolStripMenuItem_Click);
			// 
			// tekliNöronToolStripMenuItem
			// 
			this->tekliNöronToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->tekliNöronAyrýkFonksiyonToolStripMenuItem,
					this->tekliNöronSürekliFonksiyonToolStripMenuItem
			});
			this->tekliNöronToolStripMenuItem->Name = L"tekliNöronToolStripMenuItem";
			this->tekliNöronToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->tekliNöronToolStripMenuItem->Text = L"Tekli Nöron";
			// 
			// tekliNöronAyrýkFonksiyonToolStripMenuItem
			// 
			this->tekliNöronAyrýkFonksiyonToolStripMenuItem->Name = L"tekliNöronAyrýkFonksiyonToolStripMenuItem";
			this->tekliNöronAyrýkFonksiyonToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->tekliNöronAyrýkFonksiyonToolStripMenuItem->Text = L"Tekli Nöron Ayrýk Fonksiyon";
			this->tekliNöronAyrýkFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tekliNöronAyrýkFonksiyonToolStripMenuItem_Click);
			// 
			// tekliNöronSürekliFonksiyonToolStripMenuItem
			// 
			this->tekliNöronSürekliFonksiyonToolStripMenuItem->Name = L"tekliNöronSürekliFonksiyonToolStripMenuItem";
			this->tekliNöronSürekliFonksiyonToolStripMenuItem->Size = System::Drawing::Size(229, 22);
			this->tekliNöronSürekliFonksiyonToolStripMenuItem->Text = L"Tekli Nöron Sürekli Fonksiyon";
			this->tekliNöronSürekliFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tekliNöronSürekliFonksiyonToolStripMenuItem_Click);
			// 
			// çokluNöronToolStripMenuItem
			// 
			this->çokluNöronToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çokluNöronAyrýkFonksiyonToolStripMenuItem,
					this->çokluNöronSürekliFonksiyonToolStripMenuItem
			});
			this->çokluNöronToolStripMenuItem->Name = L"çokluNöronToolStripMenuItem";
			this->çokluNöronToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çokluNöronToolStripMenuItem->Text = L"Çoklu Nöron";
			// 
			// çokluNöronAyrýkFonksiyonToolStripMenuItem
			// 
			this->çokluNöronAyrýkFonksiyonToolStripMenuItem->Name = L"çokluNöronAyrýkFonksiyonToolStripMenuItem";
			this->çokluNöronAyrýkFonksiyonToolStripMenuItem->Size = System::Drawing::Size(237, 22);
			this->çokluNöronAyrýkFonksiyonToolStripMenuItem->Text = L"Çoklu Nöron Ayrýk Fonksiyon";
			this->çokluNöronAyrýkFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çokluNöronAyrýkFonksiyonToolStripMenuItem_Click);
			// 
			// çokluNöronSürekliFonksiyonToolStripMenuItem
			// 
			this->çokluNöronSürekliFonksiyonToolStripMenuItem->Name = L"çokluNöronSürekliFonksiyonToolStripMenuItem";
			this->çokluNöronSürekliFonksiyonToolStripMenuItem->Size = System::Drawing::Size(237, 22);
			this->çokluNöronSürekliFonksiyonToolStripMenuItem->Text = L"Çoklu Nöron Sürekli Fonksiyon";
			this->çokluNöronSürekliFonksiyonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çokluNöronSürekliFonksiyonToolStripMenuItem_Click);
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
			this->Text = L"Yapay Sinir Aðlarý";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:System::Void Formlarý_Kontrol_Et_Kapat()
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
	private: System::Void tekliNöronAyrýkFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Formlarý_Kontrol_Et_Kapat();
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
private: System::Void tekliNöronSürekliFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlarý_Kontrol_Et_Kapat();
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

private: System::Void çokluNöronAyrýkFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlarý_Kontrol_Et_Kapat();
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
private: System::Void çokluNöronSürekliFonksiyonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlarý_Kontrol_Et_Kapat();
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
private: System::Void giriþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Formlarý_Kontrol_Et_Kapat();
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
