#include "stdio.h"

char isprime();

int main()
{
	int a,b,i;
	printf("Enter two numbers (intervals): ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Prime numbers between %d and %d are: ",a,b);

	for ( i=a+1 ; i<b ; i++ ){

		if(isprime(i)=='P')printf("%d ",i);
	}

	return 0;
}

char isprime(int n){
	int i;
	if (n <= 1) {
		return 'N';
	}
	for ( i=2 ; i<=n/2 ; i++) {
		if (n % i == 0) {
			return 'N';
		}
	}
	return 'P' ;
}
