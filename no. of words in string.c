#include <stdio.h>

int main() {
    int words = 0, i;
    char str[150];
    printf("Enter string: ");
    gets(str);
    for(i = 0; i<150; i++){
        if(str[i] == ' ')
            words++;
    }
    //Increment words with one for the last word of string.
    words++;
    printf("Words: %d", words);

    return 0;
}
