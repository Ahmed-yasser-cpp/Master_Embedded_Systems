#include "stdio.h"

int main()
{
	float x,y;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("sum: %f",x*y);

	return 0;
}
