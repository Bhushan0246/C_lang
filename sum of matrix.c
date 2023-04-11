#include<stdio.h>
int main(){
	float arr1[3][3]={}, arr2[3][3]={}, sum[3][3];
	int i, j;
	printf("Enter elements for matrix one : ");
	for(i=0;i<3;i++){   //intializing arr1
	    for(j=0;j<3;j++){
	        scanf("%f",&arr1[i][j]);
	    }
	}
	printf("\n\n\n");
	printf("Enter elements for matrix two : ");
	for(i=0;i<3;i++){   //intializing arr2
	    for(j=0;j<3;j++){
	        scanf("%f",&arr2[i][j]);
	    }
	}
	printf("\n");
	for(i=0;i<3;i++){	//printing matrix one
		for(j=0;j<3;j++){
			printf("%.2f ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){	//printing matrix Two
		for(j=0;j<3;j++){
			printf("%.2f ",arr2[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	for(i=0;i<3;i++){   //Adding both the matrices
		for(j=0;j<3;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("Sum matrix\n");
	for(i=0;i<3;i++){	//Printing Matrix sum
		for(j=0;j<3;j++){
			printf("%.2f\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}