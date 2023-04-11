#include<stdio.h>
int main(){
	float digit[10], temp;
	for(int n=0;n<10;n++){
	printf("Index %d : ",n);
	scanf("%f", &digit[n]);
	}
	for(int i=0;i<10;i++){
	    for(int j=i+1;j<10;j++){
	        if(digit[j]>digit[i]){
	            temp=digit[i];
	            digit[i]=digit[j];
	            digit[j]=temp;
	        }
	    }
	}
	printf("\nMaximum number in array : %f.\n",digit[0]);
	printf("Minimum number in array : %f.\n",digit[9]);
	return 0;
}