#include<stdio.h>
/*Program to print corresponding character of entered ASCII number. Written by Bhushan Harode on 10/01/2023.*/
int main(){
    int n;
    char alp;
    printf("Enter a ASCII number : ");
    scanf("%d", &n);
    alp=n;
    printf("The corresponding character of entered ASCII number : %c", alp);
    return 0;
}