#include<stdio.h>
int main (){
    int i, size=0, j, temp;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr[size];
    puts("Enter array elements:");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    //sorting array
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Removing duplicate elements
    j=0;
    for(i=0; i<size; i++){
            if(arr[i] != arr[i+1])
                arr[j++] = arr[i];
    }
    //printing modified array
    puts("Modified array:");
    for(i=0;i<j;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
