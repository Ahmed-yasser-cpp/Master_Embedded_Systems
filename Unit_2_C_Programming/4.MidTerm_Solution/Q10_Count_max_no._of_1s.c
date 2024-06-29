#include "stdio.h"

int main()
{
	int x,y=1,i=0,count=0,no=0;
	printf("input: ");
	fflush(stdout);
	scanf("%d",&x);

	while(x>=(y<<i))
	{
		if(x&y<<i)
			++count;
		else
			count = 0;
		if(count>no)
			no = count;
		++i;
	}

	printf("->");
	printf("output: %d",no);

	return 0;
}

