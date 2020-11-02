#include "stdio.h"
int main()
{
	int N;
	printf("Input N= ");
	scanf("%i", &N);
	
	if (N%2==0) {
		printf("GENAP");
	} else {
		printf("GANJIL");
	}
	return 0;
}
