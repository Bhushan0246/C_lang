#include <stdio.h>
#include<math.h>
//program for Greatest of three numbers.Written by Bhushan Harode on 14/12/2022.

int main(){
	float a,c,b;		
	printf("Enter first number : ");
	scanf("%f", &a);	
	printf("\nEnter second number : ");;
	scanf("%f",&b);
	printf("\nEnter third number : ");;
	scanf("%f", &c);
	if(a>=b && a>=c)
		printf("\nNumber %f is greater.", a);
	
	if(b>=c && a<=b)
		printf("\nNumber %f is greater.", b);
	
	else
	printf("\nNumber %f is greater.",c);
	
	return 0;		
}
