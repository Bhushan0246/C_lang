#include<stdio.h>
/*Program name Bank of Coding.Written by Bhushan Harode on 05/01/2023.*/
int main(){
	int pin, tries=1;
	printf("\tWelcome to Bank of Coding");
	printf("\nEnter PIN : ");
	scanf("%d", &pin);
	if(pin<=999 || pin>=9999){
		printf("Please enter a four digits pin.\n");
		tries++;
	}
	while(pin!=1477 && tries<=3){
		printf("\nEnter PIN : ");
		scanf("%d" ,&pin);
		tries++;
		printf("Wrong PIN.\n");
	}
	if(pin==1477){
		printf("PIN Accepted.");
	}
	else{
		printf("\n2You have reached your maximum tries.");
	}
}
