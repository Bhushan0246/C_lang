#include <stdio.h>

int main() {
    int n, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(temp = n; temp > 0; temp /= 10){
        rem = temp % 10;
        sum += rem;
    }
    printf("Sum of digits of number %d is: %d.\n", n, sum);
    return 0;
}
