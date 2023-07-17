#include<stdio.h>
int arr[5]={11, 21};
int upper = 1;
int push(int element){
	if(upper == 4){
		printf("Stack overflow\n");
	}
	else{
		upper = upper+1;
		arr[upper] = element;
	}
	}
	
int pop(){
	if(upper == -1){
		printf("Stack underflow\n");
	}
	else{
		upper = upper - 1;
		return arr[upper+1];
	}
}
int main(){
	int i;
	push(32);
	push(43);
	push(99);
	pop();
	pop();
	pop();
	pop();
	
	for(i=upper; i >= 0 ; i--){
		printf("%d\n", arr[i]);
	}
	return 0;	
}

