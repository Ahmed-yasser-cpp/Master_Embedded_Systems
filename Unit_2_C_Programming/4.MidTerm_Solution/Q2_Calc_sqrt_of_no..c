#include "stdio.h"
#include "math.h"


int main()
{
	float x;
	printf("input: ");
	fflush(stdout);
	scanf("%f",&x);

	printf("->");
	x = sqrt(x);
	printf("output: %.3f",x);

	return 0;
}

