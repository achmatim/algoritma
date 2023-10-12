#include "stdio.h"

float hitungLuasSegitiga(int alas, int tinggi)
{
    float luas;
    luas = (alas*tinggi)/2.0;
    return luas;
}

int main()
{
    int a, t;
    float L;

    printf("HITUNG LUAS SEGITIGA");
    printf("\nAlas: "); scanf("%i", &a);
    printf("\nTinggi: "); scanf("%i", &t);

    L = hitungLuasSegitiga(a, t);

    printf("\nLuas = %.2f", L);

    return 0;
}
