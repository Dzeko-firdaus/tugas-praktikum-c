#include <stdio.h>

int main() {
    int i;
    int value = 1;

    // Mencetak deret angka 1, 2, 4, ..., 1024
    for (i = 0; i <= 10; i++) {
        printf("%d ", value);
        value *= 2; // Menggandakan nilai setiap iterasi
    }

    printf("\n");  // Baris baru setelah mencetak deret angka
    return 0;
}