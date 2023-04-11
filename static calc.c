#include<stdio.h>
#include<stdlib.h>
/*Program name static calculator. Writen by Bhushan harode on 06/01/2023.*/
int main(){
	int n;
	float a, b, add, sub, mul, div;
	printf("Static Calculator\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf("Enter your choice number : ");
	scanf("%d", &n);
	switch(n){
		case 1:
            system("cls");
            printf("Addition\n");
			printf("Enter two numbers : ");
			scanf("%f %f", &a, &b);
			add=a+b;
			printf("Result = %f", add);
			break;
		case 2:
			system("cls");
			printf("Subtraction\n");
			printf("Enter two numbers : ");
			scanf("%f %f", &a, &b);
			sub=a-b;
			printf("Result = %f", sub);
			break;
		case 3:
			system("cls");
			printf("Multiplication\n");
			printf("Enter two numbers : ");
			scanf("%f %f", &a, &b);
			mul=a*b;
			printf("Result = %f", mul);
			break;
		case 4:
			system("cls");
			printf("Division\n");
			printf("Enter two numbers : ");
			scanf("%f %f", &a, &b);
			div=a/b;
			printf("Result = %f", div);
			break;
		default:
			printf("Please enter a valid choice number.");
	}
}