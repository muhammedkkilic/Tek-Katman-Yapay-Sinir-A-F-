#include <math.h>
int sgn(float a)
{
	if (a > 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
float sigmoid(float a)
{
	float lamda = 1;
	float sonuc = (2 / (1 + exp(-lamda * a))) - 1;
	return sonuc;
}
float sigmoid_turev(float a)
{
	float sonuc = (1 - (sigmoid(a) * sigmoid(a))) / 2;
	return sonuc;
}