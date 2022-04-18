#include <stdio.h>
int main()
{
	int A[10]; 
	int M, X, N, k=0;
	
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
	
	for(N=0; N<10; N++) {
		for(M=0; M<9-N; M++) {
			if(A[M] > A[M+1]) {
				//tukar A[M] dengan A[M+1]
				X = A[M];
				A[M] = A[M+1];
				A[M+1] = X;
			}
			k++;
		}
	}
	printf("\nJumlah perulangan: %i", k);
	//akhir pengurutan
	printf("\n\nSetelah pengurutan");
	for (M=0; M<10; M++) {
		printf("%4i", A[M]);
	}
	
	return 0;
}
