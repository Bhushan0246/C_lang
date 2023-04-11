#include<stdio.h>
int main(){
	float digit[10];
	int i;
	for(i=0;i<10;i++){
	printf("Enter the elements of array : ");
	scanf("%f", &digit[i]);
	}
	for(i=0;i<10;i++){
	printf("At index %d : %f\n",i, digit[i]);
	}
	
	return 0;
}