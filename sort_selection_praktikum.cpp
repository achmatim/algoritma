#include <stdio.h>
int main()
{
	int A[10]; 
	int M, X, N, min, k = 0;
	
	//input
	printf("Input 10 bilangan:\n");
	for (M=0; M<10; M++) {
		scanf("%i", &A[M]);
	}
	
	printf("Sebelum pengurutan");
	for (M=0; M<10; M++) {
		printf("%4i", A[M]);
	}
	//lakukan pengurutan isi array
	for (N=0; N<10; N++) {
		min = N;
		for(M=N+1;M<10;M++) {
			if(A[M] < A[min]) {
				min = M;
			}
			k++;
		}
		X = A[N];
		A[N] = A[min];
		A[min] = X;
	}
	printf("\nJumlah perulangan: %i", k);
		
	//akhir pengurutan
	printf("\n\nSetelah pengurutan");
	for (M=0; M<10; M++) {
		printf("%4i", A[M]);
	}
	
	return 0;
}
