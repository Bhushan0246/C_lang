#include<stdio.h>
int main(){
	FILE *fptr;
	char c;
	fptr=fopen("hello.txt","r");
	while((c=fgetc(fptr))!=EOF){
		printf("%c", c);
	}
	rewind(fptr);
	while(c=fgetc(fptr)!=EOF)
		printf("%c", c);
	fclose(fptr);
	return 0;
}

