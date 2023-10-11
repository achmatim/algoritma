#include "stdio.h"
//#include "conio.h"
float hitungLuasSegitiga(int alas, int tinggi);
float hitungLuasPersegi(int sisi);

int main()
{
    float L;
    int menu;
    while(true) {

        printf("\nMENU HITUNG LUAS BANGUN RUANG");
        printf("\n1. Segitiga");
        printf("\n2. Persegi");
        printf("\n0. Quit");
        printf("\nPILIH MENU: "); scanf("%i", &menu);
        if(menu == 0) break;
        switch(menu) {
            case 1:
                int a, t;
                printf("\nalas = "); scanf("%i", &a);
                printf("\ntinggi = "); scanf("%i", &t);
                L = hitungLuasSegitiga(a, t);
                printf("Luas Bangun Segitiga = %f", L);
                break;

            case 2:
                int sisi;
                printf("\nsisi = "); scanf("%i", &sisi);
                L = hitungLuasPersegi(sisi);
                printf("Luas Bangun Persegi = %f", L);
                break;

            case 0: break;

        }
    }
}

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
