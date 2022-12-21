#include<stdio.h>
/*Program to priint the minimum and maximum value. Program written by Bhushan Harode on 17/12/2022. */
int main(){
	float a,b,c,d;
	printf("Enter First number : ");
	scanf("%f", &a);
	printf("Enter Second number : ");
	scanf("%f", &b);
	printf("Enter Third number : ");
	scanf("%f", &c);
	printf("Enter Fourth number : ");
	scanf("%f", &d);
	/*For maximum number*/
	if(a>b && a>c && a>d)
	printf("First number %f is maximum.", a);
	else if(b>a && b>c && b>d)
	printf("Second number %f is maximum.", b);
	else if(c>a && c>b && c>d)
	printf("Third number %f is maximum.", c);
	else
	printf("Fourth number %f is maximum.", d);
	/*For minimum number*/
	if(a<b && a<c && a<d)
	printf("\nFirst number %f is minimum.", a);
	else if(b<a && b<c && b<d)
	printf("\nSecond number %f is minimum.", b);
	else if(c<a && c<b && c<d)
	printf("\nThird number %f is minimum.", c);
	else if(d<a && d<b && d<c)
	printf("\nFourth number %f is minimum.", d);
	
	return 0;
}
