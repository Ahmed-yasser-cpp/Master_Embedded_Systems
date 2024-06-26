#include "stdio.h"

int pwr();

int main()
{
	int x,y;

	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&x);

	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&y);

	printf("%d^%d = %d",x,y,pwr(x,y));

	return 0;
}

int pwr(int a,int b){
	if (b > 0) return (a*pwr(a,b-1));
	else return 1;

}
