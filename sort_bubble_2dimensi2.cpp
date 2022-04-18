#include "stdio.h"
int main()
{
	int A[4][6] = {10,7,15,4,9,10,
				   15,20,18,15,20,25,
				   12,6,7,4,11,18,
					5,8,11,16,9,2};
	int B[24] = {0};
	int I, J, K, X;
		
	//1. cetak A (sebelum sorting)
	for(I=0; I<4; I++) {
		for(J=0; J<6; J++) {
			printf("%4i", A[I][J]);
		}
		printf("\n");
	}
	
	//2. ubah array A menjadi 1 dimensi
	K=0;
	for(I=0; I<4; I++) {
		for(J=0; J<6; J++) {
			B[K] = A[I][J];
			K++;
		}
	}
	for(I=0; I<24;I++) {
		printf("%4i", B[I]);
	}
	//3. sorting array B
	for(I=0; I<(24-1); I++) {
		for(J=0; J<24-I; J++) {
			if(B[J] > B[J+1]) {
				X = B[J];
				B[J] = B[J+1];
				B[J+1] = X;
			}
		}
	}
	
	
	//4. ubah array B menjadi 2 dimensi (array A)
	K = 0;
	for(I=0; I<4; I++) {
		for(J=0; J<6; J++) {
			A[I][J] = B[K];
			K++;
		}
	}
	
	printf("\n\n");
	//5. cetak A (setelah sorting)
	for(I=0; I<4; I++) {
		for(J=0; J<6; J++) {
			printf("%4i", A[I][J]);
		}
		printf("\n");
	}
	
}
