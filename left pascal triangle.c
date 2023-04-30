#include<stdio.h>
int main(){
	int i, j, sp;
	//for right triangle
	for (i=0; i<5; i++){
		for (sp=0; sp<5-i; sp++){
			printf(" ");
		}
		for (j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	//for right down triangle
	for (i=0; i<6; i++){
		for (sp=0; sp<i; sp++){
			printf(" ");
		}
		for (j=0; j<=5-i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

