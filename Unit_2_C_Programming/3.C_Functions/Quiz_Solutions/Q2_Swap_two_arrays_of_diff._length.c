#include "stdio.h"

int main()
{

	int i,n1,n2;
	int a[100],b[100],c[100];

	printf("Enter number of elements of 1st array: ");
	fflush(stdout);
	scanf("%d",&n1);

	for ( i=0 ; i<n1 ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Enter number of elements of 2nd array: ");
	fflush(stdout);
	scanf("%d",&n2);

	for ( i=0 ; i<n2 ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&b[i]);
	}

	printf("Before swapping:\n");
	printf("1st array:");
	for ( i=0 ; i<n1 ; i++ ){
		printf("%d ",a[i]);
	}
	printf("/// 2nd array:");
	for ( i=0 ; i<n2 ; i++ ){
		printf("%d ",b[i]);
	}

	printf("\n");
	for ( i=0 ; i<n1 || i<n2 ; i++){
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];

	}

	printf("After swapping:\n");
	printf("1st array:");
	for ( i=0 ; i<n2 ; i++ ){
		printf("%d ",a[i]);
	}
	printf("/// 2nd array:");
	for ( i=0 ; i<n1 ; i++ ){
		printf("%d ",b[i]);
	}

	return 0;
}


