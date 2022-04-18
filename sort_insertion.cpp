#include "stdio.h"
#include "conio.h"

int main(){
	int y;
	printf("Masukan banyak array: ");
	scanf("%i", &y);
	int x[y];
	for(int i=0; i<y; i++){
		printf("masukan angka ke %i: ", i);
		scanf("%i", &x[i]);
	}
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		printf("iterasi ke-%i\n", i);
		for(int m=0;m<y;m++){
			printf("%4i", x[m]);
	    }
	    printf("\n");
	}
	printf("hasil akhir\n");
	for(int m=0;m<y;m++){
		printf("%4i", x[m]);
	}
	return 0;
}
