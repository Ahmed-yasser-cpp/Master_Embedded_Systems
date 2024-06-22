#include "stdio.h"

int main()
{

	int i,n;
	float a[100],sum=0,avg;

	printf("Enter number of data: ");
	fflush(stdout);
	scanf("%d",&n);

	for ( i=0 ; i<n ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%f",&a[i]);
	}

	for ( i=0 ; i<n ; i++ ){
		sum += a[i];
	}

	avg = sum/n;
	printf("Average = %.2f",avg);
	fflush(stdout);

	return 0;
}


