#include "stdio.h"

int main()
{

	int i,n;
	int a[100];

	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&n);

	for ( i=0 ; i<n ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Array\n");
	for ( i=0 ; i<n ; i++ ){
		printf("%d ",a[i]);
	}

	printf("\n");
	printf("Inverse of array\n");
	for ( i=n-1 ; i>=0 ; i-- ){
		printf("%d ",a[i]);
	}

	return 0;
}


