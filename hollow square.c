#include<stdio.h>
int main(){
	int i, j, row;
	printf("Rows: ");
	scanf("%d", &row);
	for(i=1; i<=row; i++){
		for(j=0; j<=row; j++){
			if(i==1 || i==row || j==0 || j==row)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}

