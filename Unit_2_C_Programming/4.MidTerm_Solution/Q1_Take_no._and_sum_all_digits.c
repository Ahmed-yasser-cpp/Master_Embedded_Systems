#include "stdio.h"

int sum();

int main()
{
	int x;
	printf("input: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("->");
	x = sum(x);
	printf("output: %d",x);

	return 0;
}

int sum(int x){
	int rem , s=0;

	if (x!=0){
		rem = x%10;
		s= rem + sum(x/10);
		return s;
	}
	else return 0;

}
