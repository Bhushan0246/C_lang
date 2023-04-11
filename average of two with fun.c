#include<stdio.h>

float my_average(float *a,float *b){
	float ave;
	ave=(*a + *b)/2;
}

int main(){
	float a, b, average;
	printf("Enter the value of first number : ");
	scanf("%f",&a);
	printf("Enter the value of second number : ");
	scanf("%f",&b);
	average=my_average(&a, &b);
	printf("The average of two numbers is : %f",average);
	return 0;
}
