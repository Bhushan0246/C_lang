#include <stdio.h>
#include<string.h>
void strike(){
    int i;
    for(i=0; i<=70; i++)
        printf("-");
        printf("\n");
}

int main() {
    int temp, i, alph = 0, symb = 0, dig = 0, len = 0, vowel = 0, cons = 0;
    char str[100];
    puts("Enter any string: ");
    gets(str);
    strike();
    for(i=0; str[i] != '\0'; i++){
        temp = str[i];
        len++;
        if(temp >= 65 && temp <= 122){
            if(temp >= 91 && temp <= 96)
                symb++;
            else{
                if(temp == 65 || temp == 69 || temp == 73 || temp == 79 || temp == 85 || temp == 97 || temp == 101 || temp == 105 || temp == 111 || temp ==117)
                    vowel++;
                else
                    cons++;
                alph++;
            }
        }
        else if(temp >=32 && temp <= 64){
            if(temp >= 48 && temp <= 57)
                dig++;
            else
                symb++;
        }
        else
            symb++;
    }
    printf("Total Characters in string: %d\n", len);
    strike();
    printf("Number of Aalbhabets: %d\n", alph);
    printf("\t* Number of Vowels: %d\n", vowel);
    printf("\t* Number of Consonants: %d\n", cons);
    printf("Number of Digits: %d\n", dig);
    printf("Number of Special characters: %d\n", symb);
    
    return 0;
}
