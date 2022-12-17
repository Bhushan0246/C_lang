#include<stdio.h>
/*Program check weather if the values are of rectangle or square.*/
int main(){
	float length,breadth;
	printf("Enter the length of quadrilateral : ");
	scanf("%f", &length);
	printf("\nEnter the breadth of quadrilateral : ");
	scanf("%f", &breadth);
	if(length==breadth)
	printf("\nThe quad. is a square.");
	else
	printf("\nThe quad. is a rectangle");
}
