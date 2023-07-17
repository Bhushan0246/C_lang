#include<stdio.h>
int arr[5] = {12, 23, 34, 45};
int top = 3;
push(int data){
	if(top == 4){
		printf("Stack Overflow! \n");
	}
	else{
		top = top+1;
		arr[top] = data;
	}
}

int pop(){
	if(top == -1){
		printf("Stack Underflow! \n");
	}
	else{
		top = top-1;
		return arr[top+1];
	}
}

int main(){
	int i, n, x;
	puts("PRESS 1 - TO PUSH \nPRESS 2 - TO POP \n");
	printf("Enter choice: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("Enter Push Element: ");
			scanf("%d", &x);
			push(x);
			break;
		case 2:
			pop();
			break;
		default:
			puts("Invalid Choice!");
			break;
	}
	for(i=top; i>=0; i--){
		printf("%d\n", arr[i]);
	}
	return 0;
}

