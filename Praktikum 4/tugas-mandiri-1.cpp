#include <stdio.h>
#include <string.h>

main(){
	int nilai;
	char X[10];
	
	printf("\n Inputkan sebuah nilai : ");
	scanf("%i", &nilai);
	
	if (nilai % 2 == 0) {
		strcpy(X,"Genap");
	} else {
		strcpy(X, "Ganjil");
	}
	
	printf("\n %s", X);
	printf("\n Program Selesai.");
	
	return 0;
}