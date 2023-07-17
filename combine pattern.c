#include<stdio.h>
int main(){
	int i, j, k;
	for(i=0; i<5; i++){
		for(j=0; j<=i; j++){
			printf("%d", j+1);
		}
		for(k=5-j; k>0; k--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

