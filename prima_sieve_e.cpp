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
	int a[] = {2, 3, 5, 7};
	if (N>2) {
		if(N%2==0) {
			prima = false;
		} else {
			for(int i=0; i<4; i++) {
				if (N%a[i]==0) {
					prima = false;
					break;	
				}
			}
		}
	}
	return prima;
}
