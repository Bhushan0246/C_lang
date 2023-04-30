#include<stdio.h>
int main(){
	int i, size, largest;
	printf("Size of array : ");
	scanf("%d", &size);
	int arr[size];
	puts("Enter array elements: ");
	for (i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	largest=arr[0];
	for(i=0; i<size; i++){
		if (largest<arr[i])
			largest = arr[i];
	}
	printf("Largest element: %d", largest);
	return 0;
}

