#include "stdio.h"
float luasLingkaran(int R);
float L;
int main()
{
	int R;
	printf("Input R = "); scanf("%i", &R);
	printf("Luas lingkaran = %f", luasLingkaran(R) );
	return 0;
}
float luasLingkaran(int X)
{
	L = 3.14*X*X;
	return L;
}
