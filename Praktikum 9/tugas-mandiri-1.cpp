#include <stdio.h>

int main() {
    // Mendefinisikan array A[11] dan menginisialisasi isinya
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};

    // Input nilai integer N
    int N;
    printf("Masukkan nilai integer N: ");
    scanf("%d", &N); 

    // Mencari nilai N dalam array A
    int ada = 0; // Flag untuk menandakan apakah nilai N ditemukan

    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            ada = 1; // Menandakan bahwa nilai N ditemukan
        }
    }

    // Menampilkan status
    if (ada) {
        printf("ADA, nilai N ditemukan pada indeks: ");
        for (int i = 0; i < 11; i++) {
            if (A[i] == N) {
                printf("%d ", i); // Menampilkan indeks tempat nilai N ditemukan
            }
        }
        printf("\n");
    } else {
        printf("TIDAK ADA, nilai N tidak ditemukan dalam array.\n");
    }

    return 0;
}
