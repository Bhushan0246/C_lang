#include<stdio.h>
/*Program to check the divisiblity of a number by 5 and 11. Program written by Bhushan Harode on 16/12/2022.*/
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num%5 == 0 && num%11 == 0)
	printf("Entered number is divisible by 5 and 11.");
	else
	printf("Entered number is not divisible by 5 and 11.");
	return 0;
}
