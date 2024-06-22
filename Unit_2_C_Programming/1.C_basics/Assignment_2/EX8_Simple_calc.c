#include "stdio.h"

int main()
{
	char z;
	float x,y;

	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c",&z);

	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f",&x,&y);

	switch (z){
	case '+':
	printf("%f %c %f = %f",x,z,y,x+y);
	break;
	case '-':
	printf("%f %c %f = %f",x,z,y,x-y);
	break;
	case '*':
	printf("%f %c %f = %f",x,z,y,x*y);
	break;
	case '/':
	printf("%f %c %f = %f",x,z,y,x/y);
	break;
	}
	return 0;
}

