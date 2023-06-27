#include<stdio.h>
int main(){
	int i, j, size=5, temp;
	char arr[5] = {'A', 'o', 'H', 'g', 'r'};
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	puts("Sorted array:");
	for(i=0; i<size; i++)
		printf("%c ", arr[i]);
	
	return 0;
}

