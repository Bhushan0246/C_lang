#include<stdio.h>
int main(){
	int i, j, sp;
	for (i=0; i<=5; i++){
		for (sp=0; sp<5-i; sp++){
			printf(" ");
		}
		for (j=0; j<2*i+1; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}

