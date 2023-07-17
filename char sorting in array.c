#include<stdio.h>
int main(){
	int i, j, temp, size=0, ch, ch1;
	printf("Size of array: ");
	scanf("%d", &size);
	char arr[size];
	puts("Enter elements character:");
	for(i=0; i<size; i++){
		scanf("%s", &arr);
	}
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			ch=arr[i];
			ch1=arr[j];
			if(ch>ch1){
				temp=ch;
				ch=ch1;
				ch1=temp;
			}
		}
	}
	//printing sorted array
	puts("\nSorted array");
	for(i=0; i<size; i++)
		printf("%c", arr[i]);
}
