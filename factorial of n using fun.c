#include<stdio.h>
int my_fact(int n){
    int result;
    if(n==0){
        result = 0;
    }
    else if(n==1){
        result=1;
    }
    else{
        result= n*my_fact(n-1);
    }
    return result;
}
int main(){
    int n, fact;
    printf("Finding factorial of n.\n");
    printf("Enter a number : ");
    scanf("%d", &n);
    fact=my_fact(n);
    printf("Factorial of %d is : %u", n, fact);
	return 0;
}