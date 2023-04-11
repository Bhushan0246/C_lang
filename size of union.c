#include<stdio.h>
#include<string.h>
union employee{
		int id;
		char *name;
		float salary;
}e1, *ptr, n;
int main(){
	e1.id=1001;
	n.name="John";
	ptr=&n;
	e1.salary = 40000;
	printf("Employee id : %d",e1.id);
	printf("\nName : %s",ptr->name);
	printf("\nSalary : %.2f\n",e1.salary);
	
	printf("\nThe size of Union : %d", sizeof(e1));
	return 0;   }