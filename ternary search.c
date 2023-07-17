#include<stdio.h>
int search(int arr[], int x, int low, int high){
	if(high >= 1){
	int mid1 = low + (high - low)/3;
	int mid2 = high - (high - low)/3;
	if(x == arr[mid1]){
		return mid1;
	}
	else if(x == arr[mid2]){
		return mid2;
	}
	else if(x < arr[mid1]){
		return search(arr, x, low, high-1);
	}
	else if(x > arr[mid2]){
		return search(arr, x, low+1, high);
	}
	else{
		return search(arr, x, low+1, high-1);
	}
	}
	return -1;
}
int main(){
	int i, j, k, temp, x;
	int arr[] = {99,55,11,33,44,77,88,22,101};
	int size = sizeof(arr)/sizeof(arr[0]);
	int low = 0, high = size - 1;
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Enter element to search for: ");
	scanf("%d", &x);
	int result = search(arr, x, low, high);
	(result == -1) ? puts("Element not found!") : printf("%d is located at index[%d]", x, result);
	
	return 0;
}
