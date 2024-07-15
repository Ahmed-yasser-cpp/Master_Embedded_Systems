#include "stdio.h"
#include "string.h"

int main()
{
	int i;
	char *ptr;
	char x[50];

	printf("Input a string: ");
	fflush(stdout);
	gets(x);
	ptr = &x[strlen(x)-1];

	printf("Reverse of string is: ");
	for ( i=0 ; i<strlen(x) ; i++){
		printf("%c",*ptr);
		ptr--;
	}

	return 0;
}


