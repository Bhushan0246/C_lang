#include <stdio.h>
//program name is area of square.Written by Bhushan Harode on 9/12/2022.

int main(){
	float area, side;
	printf("Enter the side of square : ");
	scanf( "%f", &side );
	area = side*side;	
	printf("The Area of square is : %f", area);

	return 0;		
}
