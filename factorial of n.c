#include<stdio.h>
/*Program to find the factorial of a given number. Written by Bhushan Harode on 09/01/2023.*/
int main()
{
int n, fact=1, number;
printf("Enter a number: ");
scanf("%d",&number);
for(n=1;n<=number;n++){
        fact*=n;
    }
printf("Factorial of %d is %d.",number,fact);
return 0;
}