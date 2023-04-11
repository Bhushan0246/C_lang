#include<stdio.h>
int main(){
	FILE *fptr;
	char str[500];
	fptr=fopen("hello.txt","a+");
	fprintf(fptr, "This is a Hello file by fprintf().");
	fclose(fptr);
	return 0;
}
