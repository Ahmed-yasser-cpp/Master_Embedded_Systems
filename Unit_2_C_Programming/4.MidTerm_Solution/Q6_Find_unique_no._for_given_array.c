#include "stdio.h"

int main()
{

	int i,j,n,unique,counter;
	int a[100];

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

	counter = 0;
	unique = a[counter];
	j = counter;
	for (i=0;i<n;i++){
		if (unique==a[i] && i != j){
			++counter;
			unique = a[counter];
			j = counter;
			i = -1;
		}
	}

	if(n>counter)
		printf("output: %d ",unique);
	else
		printf("There isn't a unique number ");

	return 0;
}


