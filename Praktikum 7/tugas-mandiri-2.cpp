#include <stdio.h>

int main() {
    // Mendefinisikan array A[11]
    int A[11];

    // Data dari dokumen
    int dataDokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menginput data dari dokumen ke dalam array A
    int indexArray = 0;
    for (int i = 0; i < sizeof(dataDokumen) / sizeof(dataDokumen[0]); i++) {
        if (dataDokumen[i] % 2 == 0) {
            A[indexArray] = dataDokumen[i];
            indexArray++;
        }
    }

    // Mencetak data dalam array A
    printf("Isi array A:\n");
    for (int i = 0; i < indexArray; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
