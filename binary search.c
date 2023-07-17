#include<stdio.h>
int search(int arr[], int low, int high, int x){
	while(low <= high){
		int mid = (low + high)/2;
		if(x == arr[mid]){
			return mid;
		}
		else if(x < arr[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}
int main(){
	int i, j, temp;
	int x, low = 0, high = 6;
	int arr[]={11,88,33,44,53,66,57};
	for(i=0; i<7; i++){
		for(j=i+1; j<7; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Enter an element to search: ");
	scanf("%d", &x);
	int result = search(arr, low, high, x);
	(result == -1) ? puts("Entered element does not exist.") : printf("%d is at index[%d].", x, result);

	return 0;
}

