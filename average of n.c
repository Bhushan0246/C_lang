#include<stdio.h>
/*Program to calculate average of n numbers.Written by Bhushan Harode on 05/01/2023.*/
int main(){
	int n,count;
	float x,average,sum=0;
	printf("How many numbers? ");
	scanf("%d", &n);
	for(count=1;count<=n;count++){
		printf("x = ");
		scanf("%f" ,&x);
		sum+=x;
	}
	average=sum/n;
	printf("\nThe average is %f.", average);
	
	return 0;
}
