#include<stdio.h>
/*program to print the grade obtained.Program by Bhushan Harode on 15/12/2022.*/
int main(){
	float marks;
	printf("Enter the marks obtained : ");
	scanf("%f", &marks);
	if(marks<=25)
	printf("Sorry, you are failed with grade F.");
	if(marks>=25.01 && marks<=45)
	printf("Congrats, you are passed with grade E.");
	if(marks>=45.01 && marks<=50)
	printf("Congrats, you are passed with grade D.");
	if(marks>=50.01 && marks<=60)
	printf("Congrats, you are passed with grade C.");
	if(marks>=60.01 && marks<=80)
	printf("Congrats, you are passed with grade B.");
	if(marks>=80.01 && marks<=100)
	printf("Congrats, you are passed with grade A.");
	
	return 0;
}
