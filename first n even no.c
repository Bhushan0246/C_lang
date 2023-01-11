#include<stdio.h>
/*Program to print first n even numbers. Written by Bhushan Harode on 10/01/2023.*/
int main(){
    int n=2, limit, max;
    printf("Printing first n even numbers\n");
    printf("Enter the number of even numbers you want to print : ");
    scanf("%d", &max);
    for(limit=1;limit<=max;limit++){
        printf("%d. %d\n", limit,n);
        n+=2;
    }
    return 0;
}