#include <stdio.h>

int main() {
    int A[11];
    int i = 0;
    int input;

    printf("Masukkan data ke dalam array (999 untuk mengakhiri):\n");

    do {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &input);

        if (input != 999) {
            // Hanya menyimpan data lebih besar dari 9, dan berderetan di dalam array
            if (input > 9 && i < 11) {
                A[i] = input;
                i++;
            } else {
                printf("Data tidak disimpan.\n");
            }
        }
    } while (input != 999 && i < 11);

    printf("\nIsi array:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    return 0;
}
