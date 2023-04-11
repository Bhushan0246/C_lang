#include<stdio.h>
#include<string.h>
struct employee{
		int id;
		char name[25];
		float salary;
}e1;
	
int main(){
	printf("Enter employee id : ");
	scanf("%d", &e1.id);	/*Taking input id*/
	
	if(e1.id==1001){
	strcpy(e1.name,"Emp 1");
	e1.salary = 10000;
	printf("First Employee's id : %d",e1.id);
	printf("\nFirst Employee's name : %s",e1.name);
	printf("\nFirst Employee's salary : %.2f\n",e1.salary);
	}
	
	else if(e1.id==1002){
	strcpy(e1.name,"Emp 2");
	e1.salary = 12000;
	printf("Second Employee's id : %d",e1.id);
	printf("\nSecond Employee's name : %s",e1.name);
	printf("\nSecond Employee's salary : %.2f",e1.salary);
	}
	
	else{
		printf("Invalid id!");
	}
	return 0;
}
