#include "stdio.h"

int main()
{

	int x,pos;

	printf("Input number = ");
	fflush(stdout);
	scanf("%d",&x);

	printf("Bit position = ");
	fflush(stdout);
	scanf("%d",&pos);
	printf("===>\n");

	printf("Result = %d",(x &= ~(1 << pos)));
	return 0;
}
