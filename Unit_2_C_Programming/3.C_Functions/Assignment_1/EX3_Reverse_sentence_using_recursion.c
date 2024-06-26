#include "stdio.h"

void rev();

int main()
{
	printf("Enter a sentence: ");
	fflush(stdout);
	rev();

	return 0;
}

void rev(){
	char a;
	scanf("%c",&a);
	if(a != '\n'){
		rev();
		printf("%c",a);
	}
}
