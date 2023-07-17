#include<stdio.h>
int main(){
	int i, x, pos, size;
	printf("Enter the length of array: ");
	scanf("%d", &size);
	int arr[size];
	puts("Enter the elements of array.");
	for(i=0; i<size; i++){
		printf("At index[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the element to insert : ");
	scanf("%d", &x);
	printf("Enter the position index to insert the element : ");
	scanf("%d", &pos);
	// shifting elements forward
	for(i=size-1; i>=pos; i--){
		arr[i+1] = arr[i];
	}
	// inserting element
	arr[pos] = x;
	// printing new array
	printf("New array.\n");
	for(i=0; i<=size; i++){
		printf("At index[%d]: %d\n",i ,arr[i]);
	}
	
	return 0;
}

