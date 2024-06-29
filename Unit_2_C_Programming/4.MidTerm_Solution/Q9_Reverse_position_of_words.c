#include "stdio.h"
#include "string.h"

void reverse();

int main()
{

	char x[60];
	printf("Enter a string : ");
	fflush(stdout);
	gets(x);
	reverse(x,0);



	return 0;
}

void reverse(char x[],int i){
	char y[50];
	int j;
	for( j=0 ; x[i]!= 0 && x[i] != ' ' ; i++,j++ ){
		y[j]=x[i];
	}

	y[j] = 0;
	if(strlen(x)>i){
	++i;
	reverse(x,i);
	}

	printf("%s ",y);
}

