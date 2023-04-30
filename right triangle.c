#include<stdio.h>
int main(){
	int i, j, sp;
	for (i=0; i<5; i++){
		for (sp=0; sp<=3-i; sp++){
			printf(" ");
		}
		for (j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

