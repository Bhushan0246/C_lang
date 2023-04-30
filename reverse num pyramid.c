#include<stdio.h>
int main(){
	int i, j, sp, n=5;
	for (i=0; i<=n; i++){
		for (sp=0; sp<i; sp++){
			printf(" ");
		}
		for (j=0; j<2*(n-i)+1; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}

