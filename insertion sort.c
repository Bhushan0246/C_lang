#include<stdio.h>
int main(){
	int i, j, temp, size, key;
	printf("Size of array? ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements of array\n");
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	for(i = 1; i < size; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
	printf("Sorted array : ");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	return 0;
}

