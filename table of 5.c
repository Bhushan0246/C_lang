#include<stdio.h>

/*program for printing multiplication table for 5.Written by Bhushan Harode on 9/12/2022.*/

int main(){
	int limit=1;
	printf("Multiplication table of 5.");
	while(limit<=10){
		printf("\n 5 * %d = %d", limit, 5*limit);
		limit++;
	}
	
	return 0;
}

