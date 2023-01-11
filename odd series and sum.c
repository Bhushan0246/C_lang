#include<stdio.h>
/*Program to print odd number series of n terms and their sum. Written by Bhushan Harode on 10/01/2023.*/
int main(){
    int n=1, limit, max, sum=0;
    printf("Enter the number of terms you want in series : ");
    scanf("%d", &max);
    for(limit=1;limit<=max;limit++){
        printf("%d, ",n);
        sum+=n;
        n+=2;
    }
    printf("\nSum = %d", sum);
    return 0;
}