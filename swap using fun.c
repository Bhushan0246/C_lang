#include<stdio.h>
float swap(float *a,float *b){
	int temp;
	temp= *a;
	*a = *b;
	*b=temp;
}

int main(){
	float a,b;
	printf("Enter first number (a) : ");
	scanf("%f",&a);
	printf("Enter second number (b) : ");
	scanf("%f",&b);
	printf("Values before swapping a = %.3f \tb= %.3f",a,b);
	swap(&a,&b);
	printf("\nValues after swapping a = %.3f \tb= %.3f",a,b);
	return 0;
}
