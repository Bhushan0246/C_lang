#include<stdio.h>
int main(){
	int i, j, k, n, arr[2][4][2]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	printf("Enter the element: ");
	scanf("%d", &n);
	for(k=0; k<2; k++){
		for(i=0; i<4; i++){
			for(j=0; j<2; j++){
				if(arr[k][i][j] == n)
				printf("position = arr[%d][%d][%d]", k, i, j);
			}
		}
	}
	return 0;
}

