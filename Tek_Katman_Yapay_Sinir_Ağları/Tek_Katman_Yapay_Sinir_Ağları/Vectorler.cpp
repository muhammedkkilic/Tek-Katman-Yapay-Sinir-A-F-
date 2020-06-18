#include "Vectorler.h"

Vectorler::Vectorler()
{

}
//void Vectorler::koordinatlar(float x, float y, float z, float v)
void Vectorler::koordinatlar(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	//this->v = v;
}
void Vectorler::set_d(int d)
{
	this->d = d;
}


void Vectorler::set_x(float x)
{
	this->x = x;
}
void Vectorler::set_y(float y)
{
	this->y = y;
}
void Vectorler::set_z(float z)
{
	this->z = z;
}
void Vectorler::set_color(Color color)
{
	this->renk = color;
}
//void Vectorler::set_v(float v)
//{
//	this->v = v;
//}


float Vectorler::get_x()
{
	return x;
}
float Vectorler::get_y()
{
	return y;
}
float Vectorler::get_z()
{
	return z;
}
Color Vectorler::get_color()
{
	return renk;
}
//float Vectorler::get_v()
//{
//	return v;
//}
int Vectorler::get_d()
{
	return d;
}