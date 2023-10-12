#include "stdio.h"

void hitungLuasSegitiga();
void hitungLuasPersegi(int sisi);
float hitungLuasPersegiPanjang(int panjang, int lebar);

int main()
{
    int pilih;
    while(true) {
        printf("\nAPLIKASI HITUNG LUAS BANGUN RUANG");
        printf("\n1. Segitiga");
        printf("\n2. Persegi");
        printf("\n3. Persegi Panjang");
        printf("\n0. Keluar");
        printf("\nINPUT PILIHAN: "); scanf("%i", &pilih);
        if(pilih == 0) break;
        switch(pilih)
        {
            case 1: hitungLuasSegitiga(); break;
            case 2:
                int sisi;
                printf("Input sisi = "); scanf("%i", &sisi);
                hitungLuasPersegi(sisi);
                break;
            case 3:
                int p, l;
                printf("\nPanjang: "); scanf("%i", &p);
                printf("\nLebar: "); scanf("%i", &l);
                printf("Luas = %.2f", hitungLuasPersegiPanjang(p, l));
                break;
        }
    }
}

void hitungLuasSegitiga()
{
    float luas;
    int alas, tinggi;
    printf("\nAlas: "); scanf("%i", &alas);
    printf("\nTinggi: "); scanf("%i", &tinggi);
    luas = (alas*tinggi)/2.0;
    printf("\nLuas = %.2f", luas);
}
void hitungLuasPersegi(int sisi)
{
    float luas;
    luas = sisi*sisi;
    printf("\nLuas = %.2f", luas);
}
float hitungLuasPersegiPanjang(int panjang, int lebar)
{
    float luas;
    luas = panjang*lebar;
    return luas;
}
