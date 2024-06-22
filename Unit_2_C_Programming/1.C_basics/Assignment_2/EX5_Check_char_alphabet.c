#include "stdio.h"

int main()
{
	char x;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);

	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
		printf("%c is Alphabet ",x);
	}
	else{

		printf("%c is not Alphabet ",x);
	}

	return 0;
}

