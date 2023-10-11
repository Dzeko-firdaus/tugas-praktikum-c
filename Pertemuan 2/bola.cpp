#include <stdio.h>
#include <math.h>

int main()
{
	int diameter, jari;
	double volume;
	
	diameter = 15;
	jari = diameter/2;
	volume = 1.3 * 3.14 * pow(jari, 3);
	
	printf("\nVolume = %.2lf", volume);

	return 0;	
}