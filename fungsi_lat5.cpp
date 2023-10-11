#include "stdio.h"
#include "conio.h"

float hitungLuasSegitiga(int alas, int tinggi)
{
    float luas;
    luas = alas*tinggi / 2.0;
    return luas;
}
float hitungLuasPersegi(int sisi)
{
    return sisi*sisi;
}
int main()
{
    int a, t;
    float L;
    printf("Alas = "); scanf("%i", &a);
    printf("\nTinggi = "); scanf("%i", &t);
    L = hitungLuasSegitiga(a, t);
    printf("\nLuas = %f", L);

    printf("\nHITUNG LUAS PERSEGI");
    printf("Input sisi = "); scanf("%i", &a);
    L = hitungLuasPersegi(a);
    printf("\nLuas Persegi = %f", L);

    return 0;
}
