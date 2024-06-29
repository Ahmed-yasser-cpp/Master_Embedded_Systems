#include "stdio.h"
#include "math.h"


int main()
{
	int x,y=1,i=0,count=0;
	printf("input: ");
	fflush(stdout);
	scanf("%d",&x);

	while(x>=(y<<i))
	{
		if(x&y<<i)++count;
		++i;
	}

	printf("->");
	printf("output: %d",count);

	return 0;
}

