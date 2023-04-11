#include<stdio.h>
int main(){
	int status;
	char name[25];
	printf("Enter the file name you want to delete : ");
	gets(name);
	status=remove(name);
	if(status==1)
	puts("Error !\nFile cannot be deleted.");
	puts("File delete action success.");
	return 0;
}
