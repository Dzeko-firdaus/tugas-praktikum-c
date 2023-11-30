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
            // Tetap memasukkan data ke dalam array, namun atur nilai 0 jika kurang dari atau sama dengan 9
            A[i] = (input > 9) ? input : 0;
            i++;

            if (i == 11) {
                printf("Array sudah penuh.\n");
                break;
            }
        }
    } while (input != 999);

    printf("\nIsi array:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    return 0;
}
