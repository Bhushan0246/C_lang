#include<stdio.h>
int main (){
    int i, size, pos=0, neg=0, zero=0;
    printf("Enter array size : ");
    scanf("%d", &size);
    int arr[size];
    puts("Enter array elements:");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++){
        if(arr[i] == 0)
            ++zero;
        else if(arr[i] < 0)
            ++neg;
        else
            ++pos;
    }
    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);
    printf("Number of zeroes: %d\n", zero);
    
    return 0;
}
