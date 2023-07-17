#include<stdio.h>
int arr[5]={12, 23, 34};
int top = 2;

int main(){
	printf("Size of Stack: %d\n", sizeof(arr));
	printf("Size required by each element in stack: %d\n", sizeof(arr[0]));
	return 0;
}

