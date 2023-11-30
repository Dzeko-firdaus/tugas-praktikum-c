#include <stdio.h>

int main() {
    // Jumlah uang awal
    double jumlahUang = 1000000.0;  // Rp. 1.000.000

    // Tingkat bunga per bulan (2% atau 0.02)
    double tingkatBunga = 0.02;

    // Jumlah bulan
    int jumlahBulan = 10;

    // Menghitung jumlah uang setelah 10 bulan
    for (int i = 1; i <= jumlahBulan; i++) {
        // Menambah bunga ke saldo uang
        jumlahUang += jumlahUang * tingkatBunga;
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah %d bulan adalah Rp. %.2f\n", jumlahBulan, jumlahUang);

    return 0;
}
