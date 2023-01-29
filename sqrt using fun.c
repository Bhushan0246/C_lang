#include<stdio.h>
#include<math.h>
int main(){
	float n,square;
	printf("Enter a number to find square root of : ");
	scanf("%f",&n);
	square=sqrt(n);
	printf("Square root of %.3f is : %.4f", n, square);
}
