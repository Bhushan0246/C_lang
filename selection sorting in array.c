#include<stdio.h>
int main(){
	int i, j, size, temp;
	printf("Size of array: ");
	scanf("%d", &size);
	int arr[size];
	puts("Enter elements of array:");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if (arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	puts("\nSorted array");
	for(i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
}
