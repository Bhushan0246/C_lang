#include<stdio.h>
/*Program to calculate sum of 100 natural numbers.Written by Bhushan Harode on 05/01/2023.*/
int main(){
	int count, sum=0;
	printf("Finding the sum of first 100 natural numbers.\n\n");
	for(count=1;count<=100;count++){
		printf("num = %d, ", count);
		sum+=count;
	}
	printf("\n\nThe sum is %d.", sum);
	
	return 0;
}
