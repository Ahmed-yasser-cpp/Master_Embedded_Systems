#include "stdio.h"

int main()
{
	float x,y,z;

	printf("Enter three numbers ");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if (x>y && x>z){
		printf("Largest number = %f",x);
	}
	else if(y>x && y>z)
	{
		printf("Largest number = %f",y);
	}
	else if(z>y && z>x)
	{
		printf("Largest number = %f",z);
	}
	return 0;
}
