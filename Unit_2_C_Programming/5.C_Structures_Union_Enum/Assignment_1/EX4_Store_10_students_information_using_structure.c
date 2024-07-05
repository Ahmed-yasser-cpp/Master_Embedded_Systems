#include "stdio.h"

struct student{
	char name[50];
	int roll;
	int marks;
};

int main()
{
	struct student x[10];
	int i;
	for ( i=0 ; i<10 ; ++i)
	{
		printf("For roll number: ");
		fflush(stdout);
		scanf("%d",&x[i].roll);

		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",&x[i].name);

		printf("Enter marks: ");
		fflush(stdout);
		scanf("%d",&x[i].marks);
	}
	printf("Displaying information\n");
	for ( i=0 ; i<10 ; ++i){
		printf("Information for Roll: %d\n",x[i].roll);
		printf("Name: %s\n",x[i].name);
		printf("Marks: %d\n",x[i].marks);
	}
	return 0;
}


