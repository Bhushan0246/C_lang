#include<stdio.h>
int main(){
	int i, x, size;
	printf("Size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements: ");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Which element you want to search? ");
	scanf("%d", &x);
	for(i=0; i<size; i++){
		if(arr[i] == x){
			printf("%d is at index[%d]", x, i);
		}
	}
	
	return 0;
}

