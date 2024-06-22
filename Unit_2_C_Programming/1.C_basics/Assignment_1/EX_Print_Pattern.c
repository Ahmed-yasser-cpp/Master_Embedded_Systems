#include "stdio.h"

int main(){
	int i,j;
	for( i=0 ; i<10 ; i++)
	{
		for( j=0 ; j<10 ; j++)
		{
			if (j>=i)
			{
				printf("%d ",j);
				fflush(stdout);fflush(stdin);
			}
		}
		printf("\n");
	}
	return 0;
}
