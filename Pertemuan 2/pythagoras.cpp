#include <stdio.h>
#include <math.h>

int main()
{
	int a, b; 
	double c;
	
	a = 4;
	b = 5;
	c = pow(a, 2) + pow(b, 2);
	
	printf("\nSisi C adalah = %.2lf", c);
	
	return 0;	
}