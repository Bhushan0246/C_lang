#include<stdio.h>
int main(){
	int digit[4][3]={{9,2,7},{4,2,8},{5,8,6},{5,2,1}};
	puts("Array in a matrix form : ");
	for (int i=0;i<4;i++){
	    for(int j=0;j<3;j++){
	        printf("%d ",digit[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}