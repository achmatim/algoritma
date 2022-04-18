#include <stdio.h>
int main()
{
	int A[11] = {12,15,7,10,5,2,17,25,9,20,14}; 
	int M, X, N, min;
	
	printf("Sebelum pengurutan");
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	//lakukan pengurutan isi array
	for (N=0; N<9; N++) {
		min = N;
		for(M=N+1;M<11;M++) {
			if(A[M] < A[min]) {
				min = M;
			}
		}
		X = A[N];
		A[N] = A[min];
		A[min] = X;
	}
		
	//akhir pengurutan
	printf("\n\nSetelah pengurutan");
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	
	return 0;
}
