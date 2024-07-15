#include "stdio.h"


int main()
{
	int i;
	char *ptr;
	char x[26];
	ptr = x;
	printf("The Alphabets are: ");

	for( i=0 ; i<26 ; i++){
		*ptr = 'A' + i;
		printf("%c ",*ptr);
		ptr++;

	}

	return 0;
}


