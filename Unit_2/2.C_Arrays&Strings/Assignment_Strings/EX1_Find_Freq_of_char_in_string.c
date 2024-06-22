#include "stdio.h"
#include "string.h"

int main()
{

	char x[100],y;
	int i,f=0;

	printf("Enter a string : ");
	fflush(stdout);
	gets(x);

	printf("Enter a character to find frequency : ");
	fflush(stdout);
	scanf("%c",&y);

	for( i=0 ; i < strlen(x) ; i++ ){

		if ( y == x[i]){
			f++;
		}
	}

	printf("frequency of %c = %d",y,f);

	return 0;
}


