#include "stdio.h"

int main()
{
	int i,x,sum=0;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);

	for ( i=0 ; i<=x ; i++){

		sum += i;
	}

	printf("Sum = %d",sum);
	return 0;
}

