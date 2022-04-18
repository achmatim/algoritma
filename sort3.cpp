#include <stdio.h>
int main()
{
	int A[11] = {12,15,7,10,5,2,17,25,9,20,14}; 
	int M, X, N;
	
	printf("Sebelum pengurutan");
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	//lakukan pengurutan isi array
	for(N=0; N<9; N++) {
		for(M=0; M < (10-N); M++) {
			if (A[M] > A[M+1]) {
				//lakukan penukaran elemen
				X 		= A[M];
				A[M] 	= A[M+1];
				A[M+1] 	= X;
			}
		}
	}
	//akhir pengurutan
	printf("\n\nSetelah pengurutan");
	for (M=0; M<11; M++) {
		printf("%4i", A[M]);
	}
	
	return 0;
}
