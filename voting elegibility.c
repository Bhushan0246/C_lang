#include <stdio.h>
//program name is voting elegiblity. Written by Bhushan Harode on 9/12/2022.

int main(){
	int age;
	printf("print enter your age : ");
	scanf ( "%d", &age );
	printf("Your entered your age is : %d \n", age);
	if (age>=18)
	printf("You can vote !");
	else
	printf("You are a minor. You have to wait !");

	return 0;		
}
