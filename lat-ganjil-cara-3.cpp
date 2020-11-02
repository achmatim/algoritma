#include "stdio.h"
int main()
{
	int N;
	int i;
	printf("Input N = "); scanf("%i", &N);
	if(N<0) N=N*(-1);
	
	for(i=N; i>1; i=i-2) {
		
	}
	
	if(i==0) {
		printf("GENAP");
	} else {
		printf("GANJIL");
	}
	return 0;
}
