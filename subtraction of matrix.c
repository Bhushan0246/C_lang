#include<stdio.h>
int main(){
	int arr1[3][3]={}, arr2[3][3]={}, sub[3][3];
	int i, j;
	for(i=0;i<3;i++){   //intializing arr1
	    for(j=0;j<3;j++){
	        printf("Enter elements for matrix one : ");
	        scanf("%d",&arr1[i][j]);
	    }
	}
	printf("\n\n");
	for(i=0;i<3;i++){   //intializing arr2
	    for(j=0;j<3;j++){
	        printf("Enter elements for matrix two : ");
	        scanf("%d",&arr2[i][j]);
	    }
	}
	printf("\nMatrix one\n");
	for(i=0;i<3;i++){	//printing matrix one
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix Two\n");
	for(i=0;i<3;i++){	//printing matrix Two
		for(j=0;j<3;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sub[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	printf("Difference of two Matrix\n");
	for(i=0;i<3;i++){	//Printing Matrix sub
		for(j=0;j<3;j++){
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	return 0;
}