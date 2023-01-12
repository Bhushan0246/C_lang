#include<stdio.h>
#include<string.h>
/*Program using switch case. Writen by Bhushan harode on 06/01/2023.*/
int main(){
	char alp;
	printf("Enter a alphabet of colour name : ");
	alp=toupper(getchar());
	switch(alp){
		case 'R':
			printf("RED");
			break;
		case 'O':
			printf("ORANGE");
			break;
		case 'Y':
			printf("YELLOW");
			break;
		case 'G':
			printf("GREEN");
			break;
		case 'B':
			printf("BLUE");
			break;
		case 'I':
			printf("INDIGO");
			break;
		case 'V':
			printf("VIOLET");
			break;
		default:
			printf("Invalid alphabet!");
	}
	return 0;
}
