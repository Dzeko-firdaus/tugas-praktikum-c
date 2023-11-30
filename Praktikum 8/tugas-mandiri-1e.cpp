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
            // Menyimpan nilai ganjil
            if (input % 2 != 0) {
                A[i] = input;
                i++;

                if (i == 11) {
                    printf("Array sudah penuh.\n");
                    break;
                }
            } else {
                printf("Data tidak disimpan.\n");
            }
        }
    } while (input != 999);

    printf("\nIsi array:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    return 0;
}
