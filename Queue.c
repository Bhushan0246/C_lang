#include<stdio.h>
int arr[5]={};
int f = -1, r = -1;
int enq(int data){		//Inserts a element
	if(f == 0 && r == 4){
		printf("Queue is Full\n");
	}
	else if(f == -1 && r == -1){
		f = 0;
		r = 0;
		return arr[r] = data;
	}
	else{
		f = 0;
		r = r + 1;
		return arr[r] = data;
	}
}

int deq(){		//Removes first element and returns it
	if(f == -1 && r == -1)
		printf("Queue is Empty");
	else if(f == 4 && r == 4){
		r = -1;
		f = -1;
		return arr[4];
	}
	else{
		r = 4;
		f = f + 1;
		return arr[f-1];
	}
}

int front(){	//returns front element
	return arr[f];
}

int rear(){		//returns rear element
	return arr[r];
}
int main(){
	int i;
	enq(34);
	enq(45);
	enq(56);
	enq(67);
	enq(78);
	
	printf("Element removed: %d\n", deq());
	printf("Element removed: %d\n\n", deq());
	
	printf("Queue: ");
	for(i=f; i <= r; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n\nFront element: %d\n", front());
	printf("Rear element: %d\n", rear());
	printf("Size of Queue: %d", sizeof(arr));
	return 0;
}
