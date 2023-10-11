#include <stdio.h>
#include <string.h>

int main()
{
	char nim[10];
	char nama[30];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	strcpy(nim, "141150123");
	strcpy(nama, "Muhammad dzeko");
	kehadiran = 100;
	tugas = 90;
	uts = 83;
	uas = 92;
	
	nilai_akhir = (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 *uas);
	
	printf("NIM \t: %s\n", nim);
    printf("\nNAMA \t: %s\n", nama);
    printf("\nKEHADIRAN \t: %i\n", kehadiran);
    printf("\nTUGAS \t: %i\n", tugas);
    printf("\nUTS \t: %i\n", uts);
    printf("\nNUAS \t: %i\n", uas);
    printf("\nNNILAI AKHIR \t: %2f", nilai_akhir);
    
    return 0;
}