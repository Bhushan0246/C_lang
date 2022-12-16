#include<stdio.h>

/*program for printing multiplication tables.Written by Bhushan Harode on 9/12/2022.*/
int main(){
	int limit=1,table;
	printf("Enter the number to print table of : ");
	scanf("%d", &table);
	while(limit<=10){
		printf("\n %d * %d = %d", table, limit, table*limit);
		limit++;
	}
	
	return 0;
}

