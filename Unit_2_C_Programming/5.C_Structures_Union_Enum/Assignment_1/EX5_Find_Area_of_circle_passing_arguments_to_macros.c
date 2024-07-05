#include "stdio.h"
#define Pi 3.1415
#define area(r) (Pi*(r)*(r))


int main()
{
	float r,area;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%f",&r);

	area = area(r);
	printf("Area = %.2f ",area);

	return 0;
}


