#include "stdio.h"
bool isPrime(int N);
int main()
{
	int n;
	printf("Input bilangan : ");
	scanf("%i", &n);
	if(isPrime(n)) {
		printf("PRIMA");
	} else {
		printf("BUKAN PRIMA");
	}
}
bool isPrime(int N) 
{
	bool prima = true;
	if (N>2) {
		for(int i=2; i<=N-1; i++) {
			if (N%i==0) {
				prima = false;
				break;	
			}
		}
	}
	return prima;
}
