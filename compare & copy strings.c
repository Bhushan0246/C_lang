#include<stdio.h>
int main(){
	char n_one[20], n_two[20];
	int comp;
	printf("Type name one : ");
	gets(n_one);
	printf("Type name two : ");
	gets(n_two);
	comp=strcmp(n_one, n_two);	/*Comparing of strings*/
	if(comp==0){
		puts("Both the names are identical.");
		strcpy(n_two, n_one);	/*Copying string if identical.*/
		printf("Hello %s !", n_two);
	}
	else{
		puts("Both the names are different.");
		printf("Welcome %s and %s to the world of C.",n_one, n_two);
	}
	return 0;
}
