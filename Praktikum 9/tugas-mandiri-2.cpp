#include <stdio.h>

int main() {
    // Mendefinisikan array A[10] dan menginisialisasi isinya
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};

    // Input karakter C
    char C;
    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &C); // Spasi sebelum %c untuk mengabaikan whitespace, jika ada

    // Mencari karakter C dalam array A
    int ada = 0; // Flag untuk menandakan apakah karakter C ditemukan
    int count = 0; // Menghitung berapa kali karakter C muncul

    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            ada = 1; // Menandakan bahwa karakter C ditemukan
            count++; // Menambah jumlah kemunculan karakter C
        }
    }

    // Menampilkan hasil
    if (ada) {
        printf("ADA, karakter '%c' ditemukan sebanyak %d kali.\n", C, count);
    } else {
        printf("TIDAK ADA, karakter '%c' tidak ditemukan dalam array.\n", C);
    }

    return 0;
}
