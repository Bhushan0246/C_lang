#include <stdio.h>
//program name is Simple intrest calculator.Written by Bhushan Harode on 10/12/2022.

int main(){
	float t,p,r,si;
	printf("Enter the Principle ammount : ");
	scanf ( "%f", &p );
	printf("\nEnter the Rate of Intrest : ");
	scanf ( "%f", &r );
	printf("\nEnter the Duration (in yrs) : ");
	scanf ( "%f", &t );
	si = (p*r*t)/100;
	printf("\nYour calculated Simple interest is %f", si);

	return 0;		
}
