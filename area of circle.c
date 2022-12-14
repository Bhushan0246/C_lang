#include <stdio.h>
#define pi 3.14
//program name is area of circle.Written by Bhushan Harode on 10/12/2022.

int main(){
	float area,circ, radius;
	printf("Enter the radius of Circle : ");
	scanf ( "%f", &radius );
	area = pi*(radius*radius);	
	printf("The Area of Circle is : %f", area);
	circ=2*pi*radius;	
	printf(" \nThe Circumference of Circle is : %f", circ);

	return 0;		
}
