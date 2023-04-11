#include<stdio.h>
int main(){
	char ch;
	FILE *fptr;
	fptr=fopen("arr and ptr.c", "r");
	while(1){
		ch=fgetc(fptr);
		if(ch==EOF)
		break;
		printf("%c", ch);
	}
	fclose(fptr);
	return 0;
}
