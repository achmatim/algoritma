#include "stdio.h"
int main()
{
	int A[3][5] = {13,12,5,7,14,
				   21,10,16,3,20,
				   11,15,8,25,9};
	int B[15] = {0};
	int I, J, K, X;
		
	//1. cetak A (sebelum sorting)
	for(I=0; I<3; I++) {
		for(J=0; J<5; J++) {
			printf("%4i", A[I][J]);
		}
		printf("\n");
	}
	
	//2. ubah array A menjadi 1 dimensi
	K=0;
	for(I=0; I<3; I++) {
		for(J=0; J<5; J++) {
			B[K] = A[I][J];
			K++;
		}
	}
	
	//3. sorting array B
	for(I=0; I<13; I++) {
		for(J=0; J<14-I; J++) {
			if(B[J] > B[J+1]) {
				X = B[J];
				B[J] = B[J+1];
				B[J+1] = X;
			}
		}
	}
	
	//4. ubah array B menjadi 2 dimensi (array A)
	K = 0;
	for(I=0; I<3; I++) {
		for(J=0; J<5; J++) {
			A[I][J] = B[K];
			K++;
		}
	}
	
	printf("\n\n");
	//5. cetak A (setelah sorting)
	for(I=0; I<3; I++) {
		for(J=0; J<5; J++) {
			printf("%4i", A[I][J]);
		}
		printf("\n");
	}
	
}
