#include<stdio.h>
int main(){
	char str[50];
	int i, count=0;
	printf("Enter a string : ");
	gets(str);
	strlwr(str);
	for(i=0; str[i]!=NULL; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			count++;
		}
	}
	printf("Number of vowels : %d", count);
	return 0;
}
