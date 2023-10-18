#include <stdio.h>
#include <string.h>

main(){
	int bil, hasil;
	
	printf("Masukkan sebuah nilai : ");
	scanf("%i", &bil);
	
	if (bil > 50){
		hasil = bil - 25;
	} else {
		hasil = bil + 10;
	}
	
	printf("\n Hasilnya = %i", hasil);
	return 0;
	
}