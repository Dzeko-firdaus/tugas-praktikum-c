#include <stdio.h>
#include <string.h>

int main()
{
    char nim[11];  // Pastikan menyertakan ruang untuk null terminator '\0'
    char nama[31]; // Pastikan menyertakan ruang untuk null terminator '\0'
    int nilai;

    strcpy(nim, "12345678910");
    strcpy(nama, "Muhammad dzeko firdaus");
    nilai = 100;

    printf("NIM : %s\n", nim);
    printf("NAMA : %s\n", nama);
    printf("NILAI : %i\n", nilai);

    return 0;
}
