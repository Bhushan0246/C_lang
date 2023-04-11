#include<stdlib.h>
int main(){
	int n, i, *ptr, sum = 0;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(double));		//allocating memory
	//ptr=(int*)calloc(n,sizeof(double));
	if(ptr == NULL){
		printf("Sorry, Memory can not be allocated.");
		exit(0);
	}
	for(i=0;i<n;i++){
		printf("Enter element of array : ");
		scanf("%d", (ptr+i));
		sum += *(ptr+i);
	}
	printf("\nSum = %d", sum);
	free(ptr);
	return 0;
}
