#include<stdio.h>
#include<math.h>
/*Program to find square root of n. Written by Bhushan Harode on 12/01/2023.*/

int main(){
	int x, y;
	printf("Enter a number to find square root of : ");
	scanf("%d", &x);
	y=sqrt(x);
	printf("Square root of %d is : %d",x, y);
	return 0;
}