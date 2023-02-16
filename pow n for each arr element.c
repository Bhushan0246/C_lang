#include<stdio.h>
int main(){
	float digit[10];
	int i,n;
	printf("Enter the power 'n' for array : ");
	scanf("%d", &n);
	for(i=0;i<10;i++){
	printf("Enter a number : ");
	scanf("%f", &digit[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
	digit[i]=pow(digit[i],n);
	printf("At index %d : %f\n",i, digit[i]);
	}
	return 0;
}