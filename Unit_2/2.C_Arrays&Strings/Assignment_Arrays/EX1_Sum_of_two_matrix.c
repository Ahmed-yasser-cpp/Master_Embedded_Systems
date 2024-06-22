#include "stdio.h"

int main()
{
	printf("Enter the elements of 1st matrix:\n");

	int i,j;
	float a[2][2],b[2][2],c[2][2];

	for ( i=0 ; i<2 ; i++ ){
		for ( j=0 ; j<2 ; j++ ){
			printf("Enter A%d%d ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix:\n");

	for ( i=0 ; i<2 ; i++ ){
		for ( j=0 ; j<2 ; j++ ){
			printf("Enter B%d%d ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	}

	for ( i=0 ; i<2 ; i++ ){
		for ( j=0 ; j<2 ; j++ ){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Sum of matrix:\n");
	fflush(stdout);

	for ( i=0 ; i<2 ; i++ ){
		for ( j=0 ; j<2 ; j++ ){
			printf("%.2f ",c[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}

	return 0;
}

