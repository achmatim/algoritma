#include "stdio.h"
int A[10];
void merge(int,int,int);
void merge_sort(int low,int high)
{
 	int mid;
 	if(low<high) {
  		mid=(low+high)/2;
  		merge_sort(low,mid);
  		merge_sort(mid+1,high);
  		merge(low,mid,high);
 	}
}
void merge(int low,int mid,int high)
{
 	int h,i,j,b[10],k;
 	h=low;
 	i=low;
 	j=mid+1;
 	while((h<=mid)&&(j<=high)) {
  		if(A[h]<=A[j]) {
   			b[i]=A[h]; h++;
  		} else {
   			b[i]=A[j]; j++;
  		} 
		i++;
 	}
 	if(h>mid) {
  		for(k=j;k<=high;k++) {
   			b[i]=A[k]; i++;
  		}
 	} else {
  		for(k=h;k<=mid;k++) {
   			b[i]=A[k]; i++;
  		}
 	}
 	for(k=low;k<=high;k++)
  		A[k]=b[k];
}

int main()
{
 	int num = 10,i, M; 
 	printf("MERGE SORT\n");
 	//input
	printf("Input 10 bilangan:\n");
	for (M=0; M<10; M++) {
		scanf("%i", &A[M]);
	}
	
	printf("Sebelum pengurutan");
	for (M=0; M<10; M++) {
		printf("%4i", A[M]);
	}
	
 	merge_sort(0,num-1);
 	
 	printf("\n\nSetelah pengurutan");
	for (M=0; M<10; M++) {
		printf("%4i", A[M]);
	}
 	return 0;
}
