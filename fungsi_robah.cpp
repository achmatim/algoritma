#include<stdio.h> 
int ROBAH(int A, int B);
int main()
{ 	int A,B, T;
  	A=5; B=2;
  	ROBAH(A,B);
  	printf("\nA = %d  B = %d " , A, B);
}

int ROBAH(int A, int B)
{ 	A = A * 2;
  	B = B * 2;
}

