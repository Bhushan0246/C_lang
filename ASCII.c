#include<stdio.h>
//program for identifing ASCII value of a character.

int main(){
	int a;
	char cha;
	printf("\t ASCII VALUE IDENTIFIER \n");
	printf("Enter a character : ");
	scanf("%c", &cha);
	a=cha;
	printf("\n The value for character %c is : %d", cha, a);
	
	return 0;
}
