#include "stdio.h"

struct distance{
	int feet;
	float inch;
};

int main()
{
	struct distance x,y,sum;
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&x.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&x.inch);

	printf("Enter information for 2nd distance: \n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d",&y.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&y.inch);

	sum.feet = x.feet + y.feet;
	sum.inch = x.inch + y.inch;

	if (sum.inch> 12){
		sum.inch -= 12;
		++sum.feet;
	}

	printf("Sum of distance: %d'%.3f\"",sum.feet,sum.inch);

	return 0;
}


