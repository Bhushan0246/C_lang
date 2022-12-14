#include <stdio.h>
//program name is leap year.Written by Bhushan Harode on 10/12/2022.

int main(){
	int year, leap;
	printf("Enter the Year : ");
	scanf( "%d", &year );
	leap = year%4;
	if(leap==0){
		printf("\nThe year %d is a leap year.", year);
	}
	else{
		printf("\nThe year %d is not a leap year.", year);
	}
	return 0;		
}
