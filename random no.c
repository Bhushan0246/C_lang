#include<stdio.h>
#include<string.h>
int main(){
	char str[25], *rev;
	printf("Enter any number to check for Palindrome : ");
	gets(str);
	rev=strrev(str);
	if(strcmp(rev, str)==0)
	puts("Number entered is a Palindrome number.");
	else
	puts("Number entered is not a Palindrome number.");
	
	return 0;
}

