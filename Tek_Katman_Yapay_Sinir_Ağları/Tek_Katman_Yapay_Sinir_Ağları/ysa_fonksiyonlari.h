#pragma once
using namespace System::Windows::Forms;
//void egitim_tek_katman_tekli_noron_ayrik(PictureBox^ picturebox,Bitmap^ surface, TextBox^ textbox, CheckBox^ checkbox, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar, float c);
//void egitim_tek_katman_tekli_noron_surekli(PictureBox^ picturebox,Bitmap^ surface, TextBox^ textbox, TextBox^ textbox2, CheckBox^ checkbox, List<Vectorler^>^ h_orijinal, List<Vectorler^>^ h_normal, Vectorler^ W, float learning_rate,float max_error);

void ayrik_random_dogru_olustur(PictureBox^ picturebox, List<Vectorler^>^ agirliklar, int sinif_sayisi);
void surekli_random_dogru_olustur(PictureBox^ picturebox, List<Vectorler^>^ agirliklar, int sinif_sayisi);

void egitim_tek_katman_tekli_noron_ayrik(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, CheckBox^ checkbox, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar, float c);
void egitim_tek_katman_tekli_noron_surekli(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, TextBox^ textbox2, CheckBox^ checkbox, List<Vectorler^>^ h_orijinal, List<Vectorler^>^ h_normal, List<Vectorler^>^ agirliklar, float learning_rate, float max_error);

void egitim_tek_katman_coklu_noron_ayrik(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, ComboBox^ combobox, CheckBox^ checkbox, CheckBox^ checkbox2, List<Vectorler^>^ h, List<Vectorler^>^ agirliklar, float c);
void egitim_tek_katman_coklu_noron_surekli(PictureBox^ picturebox, Bitmap^ surface, TextBox^ textbox, TextBox^ textbox2, ComboBox^ combobox, CheckBox^ checkbox, CheckBox^ checkbox2, List<Vectorler^>^ h_orijinal, List<Vectorler^>^ h_normal, List<Vectorler^>^ agirliklar, float learning_rate, float max_error);