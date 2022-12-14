#include <stdio.h>
//program for swaping values of two number.Written by Bhushan Harode on 10/12/2022.

int main(){
	float num1, num2, var=0;
	printf("Enter first number : ");
	scanf( "%f", &num1);
	printf("Enter second number : ");
	scanf( "%f", &num2);
	var=num1;
	num1=num2;
	num2=var;
	printf("\nFirst number is %f.", num1);	
	printf("\nSecond number is %f.", num2);
	
	return 0;		
}
