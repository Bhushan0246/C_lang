#include<stdio.h>
#include<math.h>
/* Program to use the power function, written by Bhushan Harode on 21/12/2022. */

int main(){
	float a,b,res;
	printf("Enter the base value : ");
	scanf("%f", &a);
	printf("Enter the exponent value : ");
	scanf("%f", &b);
	res=pow(a,b);
	printf("The value (%f)^%f is : %.10f", a, b, res);
	
	return 0;
}
