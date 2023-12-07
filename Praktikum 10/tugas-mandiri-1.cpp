#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int countC = 0;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[countC] = A[i];
            countC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[countC] = B[i];
            countC++;
        }
    }

    // Menampilkan isi array C untuk poin a
    printf("a. C = ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Reset array C
    countC = 0;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C (urutan asli)
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[countC] = A[i];
            countC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C (kebalikan urutan)
    for (int i = 6; i >= 0; i--) {
        if (B[i] > 10) {
            C[countC] = B[i];
            countC++;
        }
    }

    // Menampilkan isi array C untuk poin b
    printf("b. C = ");
    for (int i = 0; i < 12; i++) {
        if (i < countC) {
            printf("%d ", C[i]);
        } else {
            printf("... ");
        }
    }
    printf("\n");

    return 0;
}
