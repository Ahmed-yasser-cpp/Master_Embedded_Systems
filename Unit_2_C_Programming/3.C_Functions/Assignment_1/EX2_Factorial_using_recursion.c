#include "stdio.h"

int fact();

int main()
{
	int a;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Factorial of %d = %d: ",a,fact(a));


	return 0;
}
int fact(int n){

	if(n>1)return n*fact(n-1);

}
