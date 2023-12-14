#include <stdio.h>

int main() {
    // Array A
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};

    // Array B dan C
    int B[12], C[12];

    // Hitung rata-rata nilai mahasiswa dari array A
    int total = 0;
    for (int i = 0; i < 12; i++) {
        total += A[i];
    }
    float rata_rata = (float)total / 12;

    // Pindahkan nilai ke array B dan C sesuai kondisi
    int indexB = 0, indexC = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] > rata_rata) {
            B[indexB] = A[i];
            indexB++;
        } else {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Tampilkan isi array A
    printf("Isi array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    // Tampilkan isi array B
    printf("\nIsi array B: ");
    for (int i = 0; i < indexB; i++) {
        printf("%d ", B[i]);
    }

    // Tampilkan isi array C
    printf("\nIsi array C: ");
    for (int i = 0; i < indexC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}