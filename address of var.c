#include<stdio.h>
#include<string.h>
int main(){
	int add;
	char ch;
	printf("Enter any character : ");
	ch=getchar();
	add=&ch;
	printf("The address of your variable is %d", add);
	
	return 0;
}
