#include <stdio.h>
#include<string.h>
void strike(){
    int i;
    for(i=0; i<=70; i++)
        printf("-");
        printf("\n");
}

int main() {
    int temp, i, j;
    char str[100];
    printf("Enter any string: ");
    gets(str);
    strike();
    j = strlen(str) - 1;
    //Since string is an array of characters we take j = len - 1
    for(i = 0; i < j; i++){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    printf("Reversed string: %s\n", str);
    
    return 0;
}
