#include <stdio.h>
#include<math.h>
int result(int *x, int *n){
    int res;
    res=pow(*x, *n);
    return res;
}
int main() {
    int x, n, y;
    printf("Solving equation y=x^n\n");
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);
    y=result(&x, &n);
    printf("\nThe value of y is : %d", y);
    return 0;
}
