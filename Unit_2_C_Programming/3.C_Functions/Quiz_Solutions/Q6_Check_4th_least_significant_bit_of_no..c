#include "stdio.h"

int main()
{
	int x,y;

	printf("Enter a number ");
	fflush(stdout);
	scanf("%d",&x);
	printf("4th least significant bit of %d = %d",x,(y = x & (1<<3))/8);
	return 0;
}