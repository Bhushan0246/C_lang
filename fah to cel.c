#include <stdio.h>
//program name is Fahrenheit to celsius .Written by Bhushan Harode on 10/12/2022.

int main(){
	float fah, cel;
	printf("Enter the temperature in Fahrenheit : ");
	scanf( "%f", &fah );
	cel = ((fah-32)*5)/9;
	printf("\n %f Fahrenheit is equals to %f Celsius.", fah, cel);
	
	return 0;		
}
