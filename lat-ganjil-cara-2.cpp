#include "stdio.h"
int main()
{
	int N;
	int A;
	float B;
	printf("Input N = "); scanf("%i", &N);
	A = N/2;
	B = N/2.0;
	if(A==B) {
		printf("GENAP");
	} else {
		printf("GANJIL");
	}
	return 0;
}
