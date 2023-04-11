#include<stdio.h>
#include<string.h>
int main(){
	char *copy;
	char name1[25];
	char name2[20];
	printf("Enter names : ");
	gets(name1);
	gets(name2);
	puts("The names are : ");
	puts(name1);
	puts(name2);
	printf("\nThe length of String is : %d\n",strlen(name2));
	if(strcmp(name1, name2)==0){
		puts("\nBoth the names are idential.");
		strcat(name1, name2);
		puts(name1);
	}
	else{
		puts("Names are non-identical.");
	}
	printf("\nTo lower case : %s\n", strlwr(name2));
	printf("To upper case : %s\n", strupr(name2));
	printf("Reversed String : %s\n",strrev(name2));
	copy=strstr(name2, "A");
	printf("\nLetters after 'A' in second name : %s", copy);
	return 0;
}
