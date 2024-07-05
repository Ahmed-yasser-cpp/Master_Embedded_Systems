#include "stdio.h"

struct student{
	char name[50];
	int roll;
	int marks;
};

int main()
{
	struct student x;
	printf("Enter name: ");
	fflush(stdout);
	gets(x.name);

	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&x.roll);

	printf("Enter marks: ");
	fflush(stdout);
	scanf("%d",&x.marks);

	printf("Displaying information\n");
	printf("Name: %s\n",x.name);
	printf("Roll: %d\n",x.roll);
	printf("Marks: %d\n",x.marks);

	return 0;
}


