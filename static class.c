#include<stdio.h>
int main(){
    static int i;
    static float a;
    static char ch;
    static char str[20];
    printf("Default values are: \ni = %d \na = %f \nch = %c \nstr[] = %s",i, a, ch, str[0]);
return 0;
}