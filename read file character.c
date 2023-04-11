#include<stdio.h>
int main(){
	FILE *fptr;
	char ch[500];
	fptr=fopen("arr and ptr.c","r");
	while(fscanf(fptr, "%s", ch)!=EOF){
		printf("%s ", ch);
	}
	fclose(fptr);
	return 0;
}
