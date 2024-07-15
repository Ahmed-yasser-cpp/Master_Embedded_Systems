#include "stdio.h"

struct Semp{
	char name[20];
	int id;
};

int main()
{
	int i;
	struct Semp emp1={"Alex",1002},emp2={"Ahmed",1003},emp3={"Yasser",1004};
	struct Semp *arr[3] = {&emp1,&emp2,&emp3};
	struct Semp *(*ptr)[3] = &arr;

	for( i=0 ; i<3 ; i++){
		printf("%d.Employee name: %s\n",i+1,(*(*ptr+i))->name);
		printf("  Employee ID: %d\n",(*(*ptr+i))->id);
	}

	return 0;
}


