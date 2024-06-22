#include "stdio.h"
#include "string.h"

int main()
{

	char x[100];
	int i;

	printf("Enter a string : ");
	fflush(stdout);
	gets(x);

	for( i=0 ; i <100 && x[i] != 0 ; i++ );

	printf("Length of string = %d",i);

	return 0;
}


