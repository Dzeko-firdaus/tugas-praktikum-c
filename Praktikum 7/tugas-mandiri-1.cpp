#include <stdio.h>

int main() {
    // Mendefinisikan array untuk menyimpan nilai mahasiswa
    int nilaiMahasiswa[10];

    // Input 10 nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilaiMahasiswa[i]);
    }

    // Mencetak daftar nilai mahasiswa yang lulus (nilai >= 60)
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilaiMahasiswa[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilaiMahasiswa[i]);
        }
    }

    return 0;
}
