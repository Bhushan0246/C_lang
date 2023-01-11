#include<stdio.h>
/*Program to print natural numbers from 1 to n. Written by Bhushan Harode on 10/01/2023.*/
int main(){
    int n, limit;
    printf("Enter a number till where you want to print numbers : ");
    scanf("%d", &n);
    for(limit=1; limit<=n; limit++){
        printf("%d\n", limit);
    }
    return 0;
}