#include "stdio.h"

int main()
{
	int x,y;

	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("sum: %d",x+y);

	return 0;
}

