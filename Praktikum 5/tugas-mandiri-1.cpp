#include <stdio.h>

main () {
	int jam_masuk, jam_pulang, jam_kerja;
	
	printf("Program Hitung Total Jam Kerja\n");
	printf("Input jam masuk : "); 
	scanf("%i", &jam_masuk);
	
	printf("Input jam pulang : "); 
	scanf("%i", &jam_pulang);
	
	jam_kerja = jam_pulang - jam_masuk;
	
	if (jam_kerja < 0) {
		jam_kerja = 12 + jam_kerja;
	} 
	
	printf("Lama jam kerja : %i jam\n", jam_kerja);
	
	return 0;
}