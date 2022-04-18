#include "stdio.h"
#define n 11
int main()
{
	int A[n] = {12,15,7,10,5,2,17,25,9,20,14};
	int X, I, K;
	printf("Sebelum di-sort\n");
	for (I=0; I <= n-1; I++)
		printf("%3i", A[I]);
	printf("\n");

	K=0;
	while(K<=n-2)
	{
		I=0;
		while(I<=n-1 - K)
		{
			if (A[I] > A[I+1])
			{
				X = A[I];
				A[I] = A[I+1];
				A[I+1] = X;
			}
			I++;
		}
		K++;
	}
	printf("Sesudah di-sort\n");
	for (I=0; I<= n-1; I++) {
		printf("%3d", A[I]);
	}
	return 0;
}
