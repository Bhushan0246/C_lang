#include<stdio.h>
int main(){ 
	char one[20], two[50]="Hello ";
	printf("Type your name : ");
	gets(one);
	puts(strcat(two, one));
	printf("Reversed name : %s", strrev(one));
	
	return 0;
}
