#include<stdio.h>
/*Program to print the absolute value of number, by Bhushan Harode on 15/12/2022.*/
int main(){
	int num;
	printf("Enter a number (signed or unsigned) : ");
	scanf("%d", &num);
	if(num<=0)
	printf("The absolute value of number is %d", -num);
	else
	printf("The absolute value of number is %d", num);
	
	return 0;
}
