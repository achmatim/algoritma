#include "stdio.h"
int main()
{
	int N;
	
	printf("Input N = "); scanf("%i", &N);
	
	if(N==(N/2)*2) {
		printf("GENAP");
	} else {
		printf("GANJIL");
	}
	return 0;
}
