#include <stdio.h>
#include<string.h>
void strike(){
    int i;
    for(i=0; i<=70; i++)
        printf("-");
        printf("\n");
}

int main() {
    int temp = 0, i;
    char str[100];
    printf("Enter any string: ");
    gets(str);
    strike();
    for(i = 0; str[i] != '\0'; i++){
        temp = str[i];
        if(temp >= 65 && temp <= 90)
        str[i] += 32;
        else if(temp >= 97 && temp <= 122)
        str[i] -= 32;
    
    }
    printf("Toggled string: %s\n", str);
    
    return 0;
}
