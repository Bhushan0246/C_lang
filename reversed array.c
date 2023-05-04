#include<stdio.h>
int main(){
	int i, size;
	printf("Size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter elements of array: ");
	for(i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Reversed array: { ");
	for(i=size-1; i>=0; i--){
		printf("%d ",arr[i]);
	}
	puts("}");
	
	return 0;
}

