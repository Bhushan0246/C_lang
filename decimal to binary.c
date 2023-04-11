#include <stdio.h>
int decToBinary(int n){
	int i=0, j, binaryNum[64];
	while (n > 0) {
		binaryNum[i] = n % 2;
		n /= 2;
		i++;
	}
	printf("In binary : ");
	for(j = i-1; j >= 0; j--)
		printf("%d", binaryNum[j]);
}

int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	decToBinary(n);
	return 0;
}
