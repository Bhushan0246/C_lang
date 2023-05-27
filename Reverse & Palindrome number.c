#include <stdio.h>

int main() {
    int rev_num, rem, new_num, i, n;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);
    for(new_num = n; new_num > 0; new_num = new_num / 10){
        rem = new_num % 10;
        rev_num = (rev_num * 10) + rem;
    }
    printf("Reversed number: %d\n", rev_num);
    if(n == rev_num)
        printf("Number is a Palindrome number.");

    return 0;
}
