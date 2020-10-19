#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x,y,z;

	printf("Enter 1 : "); scanf("%lf",&x);
	printf("Enter 2 : "); scanf("%lf",&y);
	
	z = x + y; 
	
	printf("%0.3lf + %0.3lf = %0.3lf \n",x,y,z);
	
	printf("Enter 1 : "); scanf("%lf",&x);
	printf("Enter 2 : "); scanf("%lf",&y);

	z = x - y;
	
	printf("%0.3lf + %0.3lf = %0.3lf \n",x,y,z);

	z = x * y;

	z = x / y;
	return 0;
}