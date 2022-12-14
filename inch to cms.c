#include <stdio.h>
//program name is inch to cm .Written by Bhushan Harode on 10/12/2022.

int main(){
	float inch, cms;
	printf("Enter the inchs : ");
	scanf( "%f", &inch );
	cms = 2.54 * inch;
	printf("\n %f inchs is equals to %f centimeters.", inch, cms);
	
	return 0;		
}
