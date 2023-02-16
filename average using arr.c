#include<stdio.h>
int main(){
	float digit[10],sum=0, average=0;
	int i;
	for(i=0;i<10;i++){
	printf("Enter a number : ");
	scanf("%f", &digit[i]);
	sum+=digit[i];
	}
	average=sum/10;
	printf("Average of numbers is : %f", average);
	return 0;
}