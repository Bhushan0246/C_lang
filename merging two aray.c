#include<stdio.h>
int main(){
	int i, size, size1, size2;
	printf("Enter the length of first array: ");
	scanf("%d", &size);
	puts("Enter elements of array:");
	int arr[size];
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the length second of array: ");
	scanf("%d", &size1);
	int arr1[size1];
	puts("Enter elements of array:");
	for(i=0; i<size1; i++){
		scanf("%d", &arr1[i]);
	}
	size2 = size + size1;
	int new_arr[size2];
	for(i=0; i<size2; i++){
		if(i<size)
		new_arr[i]=arr[i];
		if(i>=size)
		new_arr[i]=arr1[i-size];
	}
	system("CLS");
	printf("Merged array.\n");
	for(i=0; i<size2; i++){
		printf("Index[%d] = %d\n", i, new_arr[i]);
	}
	return 0;
}

