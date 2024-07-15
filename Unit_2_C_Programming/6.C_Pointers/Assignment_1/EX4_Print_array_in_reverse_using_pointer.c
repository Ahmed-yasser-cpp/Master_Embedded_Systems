#include "stdio.h"

int main()
{

	int i,n;
	int a[100];
	int *ptr;

	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&n);

	for ( i=0 ; i<n ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Array is:");
	for ( i=0 ; i<n ; i++ ){
		printf("%d ",a[i]);
	}

	ptr = &a[n-1];
	printf("\nReverse is:");
	for ( i=0 ; i<n ; i++ ){
		printf("%d ",*ptr);
		ptr--;
	}


	return 0;
}


