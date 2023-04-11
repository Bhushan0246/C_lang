#include<stdio.h>
#include<string.h>
/*Program for boolen expression. Written by Bhushan Harode on 12/01/2023.*/
int main(){
	int x, y=5;
	printf("The value of y is 5.\n");
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("\nIs x greater than y : %d\n", x>y);
	printf("(Yes:1, No:0)");
	return 0;
}