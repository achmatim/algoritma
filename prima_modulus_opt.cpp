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
		if(N%2==0) {
			prima = false;
		} else {
			for(int i=3; i<=N-1; i=i+2) {
				if (N%i==0) {
					prima = false;
					break;	
				}
			}
		}
	}
	return prima;
}
