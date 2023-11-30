#include <stdio.h>

int main() {
    // Mendeklarasikan array A dengan 11 elemen
    int A[11];

    // Mendeklarasikan variabel untuk menyimpan data dari dokumen
    int data;

    // Indeks untuk menyimpan data ke dalam array A
    int index = 0;

 	printf("Masukkan data ke dalam array (999 untuk mengakhiri):\n");
    // Loop untuk menginput data dari dokumen
    while (1) {
        // Meminta pengguna memasukkan data
        int dataOrder;
        printf("Masukkan data ke-%d: ", index / 2 + 1);
        scanf("%d", &data);

        // Memeriksa apakah data adalah End Of Data (999)
        if (data == 999) {
            break;
        }

        // Menyimpan data ke dalam array A pada indeks yang sesuai
        A[index] = data;

        // Melangkah ke indeks berikutnya (indeks ganjil)
        index += 2;
    }

    // Menampilkan isi array A setelah diisi
    printf("Isi array A setelah diisi:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
