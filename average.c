#include<stdio.h>
//program name is average.Written by Bhushan Harode on 9/12/2022.

int main(){
	float a,b,res;
	printf("Enter two numbers for average: ");
	scanf("%f %f", &a, &b);
	res = (a + b)/2;
	printf("The average of two numbers is : %f \n", res);
	 
	return 0;
}
