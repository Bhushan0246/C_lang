#include<stdio.h>
//program to find if entered number is odd or even.Written by Bhushan Harode on 9/12/2022.

int main(){
	int num, mod;
	printf("Enter a number : ");
	scanf("%d", &num);
	mod = num % 2;
	if(mod == 0)
	printf("Entered number is even.");
	else
	printf("Entered number is odd.");
		 
	return 0;
}
