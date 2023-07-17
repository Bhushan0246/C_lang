#include<stdio.h>
int front = -1, rear = -1, size;
int queue[6];
int size = sizeof(queue)/sizeof(queue[0]);
void enq(int data){
	int temp;
	if(rear == 5 || rear == front - 1)
		puts("Queue if Full.\n");
	else if(front == -1 && rear == -1){
		front = rear = 0;
		queue[rear] = data;
		temp = queue[rear];
	}
	else{
		front = 0;
		rear = (rear+1) % size;
		queue[rear] = data;
		temp = queue[rear];
	}
	return temp;
}
int deq(){
	int temp1;
	if(front == rear)
		puts("Queue is Empty.");
	else{
		
	}
	return ;	
}
void strike(){
	int i;
	printf("\n");
	for(i=0; i<65; i++){
		printf("*");
	}
	printf("\n");
}
void display(){
	int i;
	printf("Elements of Queue: ");
	for(i = front; i <= rear; i++){
		printf("%d ", queue[i]);
	}
	return;
}
int main(){
	enq(6);
	enq(7);
	enq(8);
	enq(9);
	enq(10);
	enq(11);
	display();
	strike();
	deq();
	return 0;
}
