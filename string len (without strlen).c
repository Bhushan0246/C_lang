#include <stdio.h>
#include<string.h>
int main() {
    int len = 0, i;
    char str[100];
    puts("Enter any string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        len++;
    }
    printf("Length of string ( without strlen() ) is %d characters.\n", len);
    printf("Length of string ( using strlrn() ) is %d characters.", strlen(str));
    return 0;
}
