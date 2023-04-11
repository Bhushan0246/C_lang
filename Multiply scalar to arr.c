#include<stdio.h>
int main(){
	int i, n;
	int arr[4]={9,8,7,6};
	printf("Elements of array :");
	for (i=0; i<4; i++){
	    printf("%d\n", arr[i]);
    }
    printf("enter any number : ");
    scanf("%d", &n);
    printf("Elements after multiplying scalar to array :");
	for (i=0; i<4; i++){
	    printf("\n%d", n*arr[i]);
}
return 0;
}