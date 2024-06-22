#include "stdio.h"

int main()
{

	int i,n;
	int a[100],pos,no;

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
	printf("Enter the elements to be searched : ");
	fflush(stdout);
	scanf("%d",&no);

	for ( i=0 ; i<n ; i++ ){
		if (no == a[i]){
			pos = i + 1;
			break;
		}
	}

	printf("Number found at location : %d",pos);
	fflush(stdout);

	return 0;
}


