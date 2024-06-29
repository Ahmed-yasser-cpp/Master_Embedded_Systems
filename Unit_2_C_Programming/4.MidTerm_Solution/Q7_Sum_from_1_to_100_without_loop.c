#include "stdio.h"
int sum();
int main()
{

	int x = 1;
	printf("Output: %d",sum(x));
	return 0;
}
int sum (int x){
	int y =0;
	if (x<=100){
		y += x;
		return y+sum(x+1);
	}
	else return 0;
}

