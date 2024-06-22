#include "stdio.h"

int main()
{

	int i,n;
	int a[100],b[100],pos,val;

	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&n);

	for ( i=0 ; i<n ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	for ( i=0 ; i<n ; i++ ){
		printf("%d ",a[i]);
	}

	printf("\n");
	printf("Enter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&val);

	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d",&pos);
	pos -=1;

	for ( i=0 ; i<pos ; i++ ){
		b[i] = a[i];
	}
	b[pos] = val;

	for ( i=pos ; i<n ; i++ ){
		b[i+1] = a[i];
	}

	for ( i=0 ; i<=n ; i++ ){
		printf("%d ",b[i]);
	}

	return 0;
}


