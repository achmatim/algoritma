#include <stdio.h>

// Fungsi untuk mengurutkan koin dari terbesar ke terkecil
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Fungsi untuk menghitung jumlah minimum koin
void minimumCoins(int amount, int coins[], int n) {
    int result[100]; // Penyimpanan sementara untuk koin yang digunakan
    int count = 0; // Jumlah koin yang digunakan
    int i;

    // Menggunakan koin dari yang terbesar ke terkecil
    for (i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            result[count++] = coins[i];
        }
    }

    // Jika jumlah koin tidak mencukupi untuk memberikan kembalian
    if (amount != 0) {
        printf("Tidak dapat memberikan kembalian yang tepat dengan koin yang tersedia.\n");
        return;
    }

    // Tampilkan hasil
    printf("Jumlah minimum koin yang diperlukan: %d\n", count);
    printf("Koin yang digunakan: ");
    for (i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    // Daftar nilai koin yang tersedia
    int coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int n = sizeof(coins) / sizeof(coins[0]);

    // Jumlah uang yang harus ditukarkan
    int amount = 12900;

    printf("Jumlah uang: %d\n", amount);

    // Urutkan koin dari yang terbesar ke terkecil
    sortDescending(coins, n);

    // Hitung jumlah minimum koin
    minimumCoins(amount, coins, n);

    return 0;
}
