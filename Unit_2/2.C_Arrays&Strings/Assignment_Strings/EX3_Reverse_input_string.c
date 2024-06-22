#include "stdio.h"
#include "string.h"

int main()
{

	char x[100],y[100];
	int i,n;

	printf("Enter a string : ");
	fflush(stdout);
	gets(x);
	n = strlen(x);

	for( i=0 ; i < n ; i++ ){
		y[n-i-1] = x[i];
	}
	y[n] = 0;

	printf("Reverse string is = %s",y);

	return 0;
}


