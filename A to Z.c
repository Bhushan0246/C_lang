#include<stdio.h>
/*Program to print alphabets from A to Z. Written by Bhushan Harode on 10/01/2023.*/
int main(){
    int n;
    char alp;
    printf("A to Z Alphabets\n");
    for(n=65;n<=90;n++){
        alp=n;
        printf(" %c\t", alp);
    }
    return 0;
}