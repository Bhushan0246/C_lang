/* This program prints the elements of array including the spaces. */
#include<stdio.h>
int main(){
	int i;
	char name[20];
	scanf("%[^\n]s", name);	/*or you can use gets(name), scanf("%[^\n]%*c", name);*/
	for(i=0; i<=20; i++){
		printf("%c", name[i]);
	}
	return 0;
}
