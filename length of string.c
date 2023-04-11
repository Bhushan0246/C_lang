#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	puts("Enter a name : ");
	gets(name);
	printf("length of string : %d", strlen(name));
	return 0;
}
