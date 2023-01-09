#include<stdio.h>
/*program for identifying upper or lower case. Written by Bhushan Harode on 14/12/2022.*/
int main(){
	char ch;
	int a;
	printf("Enter a character: ");
	scanf("%c", &ch);
	a=ch;
	if(a>=65 && a<=90){
	printf("Your entered character is Upper case !");
}
	else if(a>=97 && a<=122){
	printf("Your entered character is Lower case !");
}
	else
	printf("Please enter a character !");
	
	return 0;
}