#include<stdio.h>
int main(){
	int i, j, size =5;
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if(i==size/2){
				printf("*");
			}
			else{
				if(j==size/2){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

