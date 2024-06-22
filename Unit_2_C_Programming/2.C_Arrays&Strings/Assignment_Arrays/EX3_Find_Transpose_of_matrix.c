#include "stdio.h"

int main()
{

	int r,c,i,j;
	float a[10][10],b[10][10];

	printf("Enter number of Rows: ");
	fflush(stdout);
	scanf("%d",&r);
	printf("Enter number of Columns: ");
	fflush(stdout);
	scanf("%d",&c);

	for ( i=0 ; i<r ; i++ ){
		for ( j=0 ; j<c ; j++ ){
			printf("Enter elements of A%d%d ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);
			b[j][i] = a[i][j];
		}
	}

	printf("Entered Matrix\n");
	fflush(stdout);

	for ( i=0 ; i<r ; i++ ){
		for ( j=0 ; j<c ; j++ ){
			printf("%.1f ",a[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}

	printf("Transpose of matrix\n");
	fflush(stdout);

	for ( i=0 ; i<c ; i++ ){
		for ( j=0 ; j<r ; j++ ){
			printf("%.1f ",b[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}

	return 0;
}


