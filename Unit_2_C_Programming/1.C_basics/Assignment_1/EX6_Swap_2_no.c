#include "stdio.h"

int main()
{
	float a,b,x;

	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	x = a;
	a = b;
	b = x;

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);

	return 0;
}
