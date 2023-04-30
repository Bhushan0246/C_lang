#include<stdio.h>
int main(){
	int i, j, sp, n=5;
	//for upper pyramid
	for (i=0; i<n; i++){
		for (sp=0; sp<n-i; sp++){
			printf(" ");
		}
		for (j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	//for reverse pyramid
	for (i=0; i<=6; i++){
		for (sp=0; sp<i; sp++){
			printf(" ");
		}
		for (j=0; j<2*(6-i)-1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

