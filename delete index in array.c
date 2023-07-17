#include<stdio.h>
int main(){
	int i, size, pos;
	printf("Enter the length of array: ");
	scanf("%d", &size);
	int arr[size];
	for (i=0; i<size; i++){
		printf("Index[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	printf("Enter the index to delete: ");
	scanf("%d", &pos);
	if(pos > size){
		printf("Invalid choice!\n");
	}
	else{
	for(i=pos; i<size-1; i++){
		arr[i] = arr[i+1];
	}
	--size;
	//printing updated array
	for(i=0; i<size; i++){
		printf("Index[%d] : %d\n", i, arr[i]);
	}
	}
	return 0;
}

