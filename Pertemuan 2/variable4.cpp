#include <stdio.h>
#include <string.h>

int main()
{
	char nim[10];
	char nama[30];
	int nilai;
	
	strcpy(nim, "12345678910");
    strcpy(nama, "Muhammad dzeko firdaus");
    nilai = 100;

    printf("NIM \t: %s\n", nim);
    printf("\nNAMA \t: %s\n", nama);
    printf("\nNILAI \t: %i\n", nilai);

    return 0;
}