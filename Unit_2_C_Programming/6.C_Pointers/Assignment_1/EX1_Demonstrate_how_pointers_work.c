#include "stdio.h"
#define notmain main

int notmain()
{
	int x;
	int *ptr;
	x = 20;
	ptr = &x;

	printf("Address of x: %p\n",&x);
	printf("value of x: %d\n\n",x);

	printf("Now ptr is assigned with the address of x\n");
	printf("Address of pointer ptr: %p\n",ptr);
	printf("content of pointer ptr: %d\n\n",*ptr);

	x = 30;
	printf("Now the value of x assigned to 30\n");
	printf("Address of pointer ptr: %p\n",ptr);
	printf("content of pointer ptr: %d\n\n",*ptr);

	*ptr = 9;
	printf("Now the pointer variable ptr is assigned to 9\n");
	printf("Address of x: %p\n",&x);
	printf("value of x: %d\n",x);


}


