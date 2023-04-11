#include<stdio.h>
int main(){
	FILE *fptr;
	int len;
	char ch;
	fptr=fopen("hello.txt", "a+");
	fputs("\nHello, Welcome to the world of C.", fptr);
	fseek(fptr, 0, SEEK_END);
	fputs("\nFile read and written by string method..", fptr);
	len=ftell(fptr);
	printf("The length of file : %d", len);
	fclose(fptr);
}
