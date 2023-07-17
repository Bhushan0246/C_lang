#include<stdio.h>
int isEmpty(int top){
	if(top == -1)
		return 1;
	return -1;
}
int isFull(int top){
	if(top == 4)
		return 1;
	return -1;
}
int pop(int arr_stack[], int top){
	if(top == -1)
		return 0;
	else{
		top = top-1;
		return arr_stack[top+1];
	}	
}
int main(){
	int arr_stack[5] = {10, 21, 32}, top = 2;
	int i, empty, full;
	empty = isEmpty(top);
	full = isFull(top);
	
	printf("Element removed is %d.\n", pop(arr_stack, top));
	if(empty == 1)
		printf("Empty Stack");
	else if(full == 1)
		printf("Stack Full");
	else
		printf("You are left with some elements.");
	return 0;
}
