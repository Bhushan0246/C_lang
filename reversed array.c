#include<stdio.h>
int main(){
	int i, size;
	printf("Enter size of array : ");
	scanf("%d", &size);
	int arr[size];
	puts("Enter elements of array: ");
	for (i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	system("CLS");
	puts("Original array: ");
	for (i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	puts("Reversed array : ");
	for (i=size-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

