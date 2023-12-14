#include <stdio.h>

int main() {
    // Array A
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T'};

    // Menghitung jumlah kemunculan setiap huruf
    int count[26] = {0};
    int maxCount = 0;
    char hurufTerbanyak;

    // Pemeriksaan isi array A
    for (int i = 0; i < 10; i++) {
        int index = A[i] - 'A';
        count[index]++;
        
        if (count[index] > maxCount) {
            maxCount = count[index];
            hurufTerbanyak = A[i];
        }
    }

    // Mencetak hasil
    printf("Jumlah huruf terbanyak: %d\n", maxCount);
    printf("Huruf terbanyak: %c\n", hurufTerbanyak);

    return 0;
}
