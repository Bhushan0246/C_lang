#include<stdio.h>
int main(){
	char str[150]="School of Electronics (SOEX), DAVV University, Indore";
	char *copied;
	copied=strstr(str, "(SOEX)");
	puts(copied);
	return 0;
}
