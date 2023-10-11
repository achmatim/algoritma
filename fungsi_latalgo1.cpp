#include "stdio.h"
int JUMLAH(int A, int B);
int main()
{
	float A, B, T;
	A=5; B=2;
	T = JUMLAH(A, B);
	printf("%i", T);
	return 0;
}

int JUMLAH(int X, int Y)
{
	int T;
	T = X+Y;
	return (T);
}

