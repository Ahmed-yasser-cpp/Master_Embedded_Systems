#include "stdio.h"

int pwr();

int main()
{
	int x;
	printf("Enter the number: ");
	fflush(stdout);
	scanf("%d",&x);

	x = pwr(x);
	printf("==> %d",x);
	return 0;
}

int pwr(int x){
	float y=x;
	while(y>0){
		y /= 3;
		if( y==3 )return 1;
	}
	return 0;

}
