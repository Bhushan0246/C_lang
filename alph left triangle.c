#include<stdio.h>
int main(){
	int i, j, n, alph=65;
	printf("Number of rows : ");
	scanf("%d", &n);
	printf("\n");
	for(i=0; i<n; i++){
		for (j=0; j<=i; j++){
			printf("%c", alph+j);
		}
		printf("\n");
	}
	return 0;
}

