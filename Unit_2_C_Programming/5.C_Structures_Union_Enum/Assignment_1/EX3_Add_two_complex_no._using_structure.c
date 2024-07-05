#include "stdio.h"

struct complex{
	float real;
	float img;
};

int main()
{
	struct complex x,y,sum;
	printf("For 1st complex number: \n");
	printf("Enter real: ");
	fflush(stdout);
	scanf("%f",&x.real);
	printf("Enter imaginary: ");
	fflush(stdout);
	scanf("%f",&x.img);

	printf("For 2nd complex number: \n");
	printf("Enter real: ");
	fflush(stdout);
	scanf("%f",&y.real);
	printf("Enter imaginary: ");
	fflush(stdout);
	scanf("%f",&y.img);

	sum.real = x.real + y.real;
	sum.img = x.img + y.img;


	printf("Sum = %.2f + %.2fi",sum.real,sum.img);

	return 0;
}


