#pragma once
using namespace System::Drawing;
ref class Vectorler
{
private:
	float x;
	float y;
	float z;
	//float v;
	Color renk;
	int d;

public:
	Vectorler();
	//void koordinatlar(float x, float y, float z, float v);
	void koordinatlar(float x, float y, float z);
	void set_d(int);

	void set_x(float);
	void set_y(float);
	void set_z(float);
	void set_color(Color);
	//void set_v(float);

	float get_x();
	float get_y();
	float get_z();
	//float get_v();
	int get_d();
	Color get_color();
};