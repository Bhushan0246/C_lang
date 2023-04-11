#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	puts("Type a string :");
	gets(str);
	printf("Lower case string : ");
	puts(strlwr(str));
	printf("Upper case string : ");
	puts(strupr(str));

	return 0;
}
