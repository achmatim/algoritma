#include <stdio.h>
int main()
{
	int A[11] = {12,15,7,10,5,2,17,25,9,20,14}; 
	int M, X, N, k=0;
	
	printf("Sebelum pengurutan");
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	//lakukan pengurutan isi array
	for(N=0; N<11; N++) {
		for(M=0; M<10-N; M++) {
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
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	
	return 0;
}
