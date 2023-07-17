#include<stdio.h>
int main(){
	int i, j, temp, size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements of array:\n");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	for(i = 0; i < size - 1; i++){
		for(j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("Sorted array : ");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	return 0;
}

