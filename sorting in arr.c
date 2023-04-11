#include<stdio.h>
int main(){
	float digit[10], temp; // 8,5,6,3,7,9,1,2,5,0
	int n,i,j;
	for(n=0;n<10;n++){
	printf("Index %d : ",n);
	scanf("%f", &digit[n]);
	}
	for(i=0;i<10;i++){
	    for(j=i+1;j<10;j++){
	        if(digit[j]>digit[i]){	/* Decending order sorting. */
	            temp=digit[i];
	            digit[i]=digit[j];
	            digit[j]=temp;
	        }
	    }
	}
	printf("\nAfter sorting in decending order\n");
	for(i=0;i<10;i++){
	    printf("%f\n",digit[i]);
	}
	return 0;
}
