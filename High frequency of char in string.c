#include <stdio.h>
void strike(){
    int i;
    for(i=0; i<65; i++)
        printf("-");
    printf("\n");
}
int main() {
    int size = 100, i, max = 0;
    char str[size], max_char;;
    int ch, count, freq[256] = {0};
    printf("Enter any string: ");
    gets(str);
    strike();
    count = 0;
    for(i=0; str[i]; i++){
        freq[str[i]]++;
    }
    for(i=0; i<256; i++){
        if(freq[i] != 0){
        printf("Character: %c, Frequency: %d\n", i, freq[i]);
        if(max < freq[i]){
                max = freq[i];
                max_char = i;
        }
        }
    }
    strike();
    printf("Maximum occuring character: %c with frequency: %d\n",max_char, max);
    return 0;
}
