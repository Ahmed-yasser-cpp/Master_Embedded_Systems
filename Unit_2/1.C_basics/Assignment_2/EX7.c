#include "stdio.h"

int main()
{
	int i,x,sum=1;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	if (x>0){
		for ( i=1 ; i<=x ; i++){
			sum *= i;
		}
		printf("Sum = %d",sum);
	}
	else if(x == 0){
		sum = 1;
		printf("Sum = %d",sum);
	}
	else{
		printf("Factorial does not exist");
	}


	return 0;
}

