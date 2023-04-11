#include<stdio.h>
#include<string.h>
struct employee{
		int id;
		char name[25];
		float salary;
}e1;

int main(){
	e1.id=1001;
	strcpy(e1.name,"John");
	e1.salary = 40000;
	printf("Employee id : %d",e1.id);
	printf("\nName : %s",e1.name);
	printf("\nSalary : %.2f\n",e1.salary);
	
	printf("\nThe size of Structure : %u", sizeof(e1));
	
	return 0;   
    }