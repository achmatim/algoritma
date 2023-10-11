#include <stdio.h>
#include <stdlib.h>
struct Node {
	int INFO;
	Node *LINK;
};
struct Node *P, *FIRST, *LAST;


int X;
void awal();
void in_kanan();
void in_kiri();
void in_tengah();
void del_kanan();
void del_kiri();
void del_tengah();
void tampil();

int main()
{
	int pilihan;
	while (1) {
		printf("\nMENU");
		printf("\n1. AWAL");
		printf("\n2. INSERT KIRI");
		printf("\n3. INSERT KANAN");
		printf("\n4. INSERT TENGAH");
		printf("\n5. TAMPIL");
		printf("\n6. DELETE KIRI");
		printf("\n7. DELETE KANAN");
		printf("\n8. DELETE TENGAH");
		printf("\n0. KELUAR");
		printf("\nMasukkan pilihan: ");
		scanf("%i", &pilihan);
		switch (pilihan) {
		case 1 : awal(); break ;
		case 2 : in_kiri(); break ;
		case 3 : in_kanan(); break ;
		case 4 : in_tengah(); break ;
		case 5 : tampil(); break ;
		case 6 : del_kiri(); break ;
		case 7 : del_kanan(); break ;
		case 8 : del_tengah(); break ;
		case 0 : exit(0);
		}
	}
	return 0;
}
void awal() {
	printf ("\nEntri Bilangan X : ");
	scanf ("%i", &X);
	P = (Node *) malloc(sizeof (Node));
	P->INFO = X;
	FIRST = P;
	LAST = P;
	P->LINK = NULL;
	printf("\nSIMPUL AWAL SUDAH TERBENTUK");
}
void in_kanan()
{
	printf ("\nEntri Bilangan X : ");
	scanf ("%i", &X);
	P = (Node *) malloc(sizeof (Node));
	P->INFO = X;
	LAST->LINK = P;
	LAST = P;
	LAST->LINK = NULL;
	printf("\nINSERT KANAN, X = %i", X);
}

void in_kiri() {
	printf ("\nEntri Bilangan X : ");
 	scanf ("%i", &X);
 	P = (Node *) malloc(sizeof (Node));
 	P->LINK = FIRST;
	P->INFO = X;
 	FIRST = P;
 	printf("\nINSERT KIRI, X = %i", X);
}

void in_tengah() {
 	int simpul;
 	Node *Q;
 	printf("\nInsert setelah simpul ke: ");
 	scanf("%i", &simpul);

 	//ulang dan tempatkan pointer di depan simpul yg akan diinsertkan
 	Q = FIRST;
 	for (int i=1; i<simpul; i++) {
 		Q = Q->LINK;
 	}
	printf ("\nEntri Bilangan X : ");
 	scanf ("%i", &X);
 	P = (Node *) malloc(sizeof (Node));
 	P->LINK = Q->LINK;
 	Q->LINK = P;
 	P->INFO = X;
 	printf("\nINSERT TENGAH, X = %i", X);
}

void del_kanan()
{
	Node *Q;
 	//tempatkan pointer di node sebelum yang terakhir
 	Q = FIRST;
 	while (Q->LINK != LAST) {
 		Q = Q->LINK;
 	}
 	X = LAST->INFO;
 	free (LAST);
 	LAST = Q;
 	LAST->LINK = NULL;
 	printf("\nDELETE KANAN, X = %i", X);
}
void del_kiri() {
	P = FIRST;
 	FIRST = P->LINK;
 	X = P->INFO;
 	free (P);
 	printf("\nDELETE KIRI, X = %i", X);
}

void del_tengah() {
	int simpul;
 	Node *Q;
 	printf("\nDelete simpul ke: ");
 	scanf("%i", &simpul);
 	//ulang dan tempatkan pointer di depan simpul yg akan diinsertkan
 	Q = FIRST;
 	for (int i=1; i<simpul-1; i++) {
 		Q = Q->LINK;
 	}
 	X = P->INFO;
 	P = Q->LINK;
 	Q->LINK = P->LINK;
 	free(P);
 	printf("\nDELETE TENGAH, X = %i", X);
}

void tampil() {
 	Node *R;
 	printf("\nISI LINK LIST\n");
 	R = FIRST;
 	while (R != NULL) {
 		printf("%4i ->", R->INFO);
 		R = R->LINK;
 	}
}
