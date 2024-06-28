#include "stdio.h"

int main()
{

	int i,n;
	int a[100],val,no=-1;

	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&n);

	for ( i=0 ; i<n ; i++ ){
		printf("%d. Enter the number: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	printf("Array = ");
	for ( i=0 ; i<n ; i++ ){
		printf("%d ",a[i]);
	}

	printf("The number is: ");
	fflush(stdout);
	scanf("%d",&val);

	for ( i=n ; i>=0 ; i-- ){
		if (val == a[i]){
			no = i;
			break;
		}
	}


	printf("Result = %d ",no+1);

	return 0;
}
