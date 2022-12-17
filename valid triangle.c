#include<stdio.h>
/*Program to Check a valid triangle. Program written by Bhushan Harode on 16/12/2022.*/
int main(){
	float a,b,c;
	printf("Enter first angle of triangle : ");
	scanf("%f", &a);
	printf("Enter second angle of triangle : ");
	scanf("%f", &b);
	printf("Enter third angle of triangle : ");
	scanf("%f", &c);
	if((a+b+c)==180)
	printf("The triangle is valid.");
	else
	printf("The triangle is invalid");
	
	return 0;
}
