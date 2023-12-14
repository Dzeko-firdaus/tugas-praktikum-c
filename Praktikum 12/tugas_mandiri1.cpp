#include <stdio.h>

int main() {
    // Array A
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};

    // Flag untuk menandai apakah ada huruf yang sama
    int adaHurufSama = 0;

    // Pemeriksaan isi array A
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                adaHurufSama = 1;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                break;
            }
        }
        if (adaHurufSama) {
            break;
        }
    }

    // Jika tidak ada huruf yang sama
    if (!adaHurufSama) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
