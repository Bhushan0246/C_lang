#include<stdio.h>
#include<stdlib.h>
/*Program name static calculator using functions. Writen by Bhushan harode on 27/01/2023.*/
float addition(float *a, float *b){
	float add;
	add=*a + *b;
	printf("The addition of two numbers is : %f", add);
}
float subtract(float *a, float *b){
	float sub;
	sub=*a - *b;
	printf("The subtraction of two numbers is : %f", sub);
}
float multiply(float *a, float *b){
	float mul;
	mul=(*a) * (*b);
	printf("The multiplication of two numbers is : %f", mul);
}
float divide(float *a, float *b){
	float div;
	div=(*a) / (*b);
	printf("The division of two numbers is : %f", div);
}

int main(){
	int n;
	float a, b;
	printf("Static Calculator\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf("\nEnter your choice number : ");
	scanf("%d", &n);
	if(n<=4 && n>=1){
	printf("Enter the value of a : ");
	scanf("%f",&a);
	printf("Enter the value of b : ");
	scanf("%f",&b);
	}
	switch(n){
		case 1:
            addition(&a,&b);
			break;
		case 2:
			subtract(&a,&b);
			break;
		case 3:
			multiply(&a,&b);
			break;
		case 4:
			divide(&a,&b);
			break;
		default:
			printf("Entered invalid choice number.");
			break;
	}
	return 0;
}
