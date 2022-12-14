#include <stdio.h>
#define pi 3.14
//program name is circumference of circle.Written by Bhushan Harode on 10/12/2022.

int main(){
	float circ, radius;
	printf("Enter the radius of Circle : ");
	scanf ( "%f", &radius );
	circ = 2*pi*radius;	
	printf("The circumference of Circle is : %f", circ);

	return 0;		
}
