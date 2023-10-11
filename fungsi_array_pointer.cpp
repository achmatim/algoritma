#include<stdio.h> 
void CETAK(int *Q);
   
main()
{ int A[5]={12,7,5,15,17};
  int *P;
  P = A; 
  CETAK(P);
}

void CETAK(int *Q)
{ int I;
  for(I=1;I<=5; I++) {
    printf("\n%d", *Q);
    printf(" ada di alamat: %p", Q);
    Q++;
  }
}

