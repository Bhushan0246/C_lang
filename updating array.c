#include<stdio.h>
int main(){
	int i ,pos, x, size;
	printf("Size of arr: ");
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++){
		printf("Index[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Enter element to update: ");
	scanf("%d", &x);
	printf("Index where you want to update : ");
	scanf("%d", &pos);
	arr[pos] = x;
	for(i=0; i<size; i++){
		printf("Index[%d] : %d\n", i, arr[i]);
	}
	
	return 0;
}

