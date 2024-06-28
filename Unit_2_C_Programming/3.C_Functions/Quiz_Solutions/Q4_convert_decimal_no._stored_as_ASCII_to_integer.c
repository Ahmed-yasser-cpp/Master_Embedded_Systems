#include "stdio.h"

int main()
{
	char x;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("unsigned integer of value: %u",x-48);

	return 0;
}
