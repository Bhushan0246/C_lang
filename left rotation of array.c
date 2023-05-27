#include <stdio.h>
int main() {
    int size, i, pos, j ,k;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size], temp[size];
    printf("Enter the elements of array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to rotate the array: ");
    scanf("%d", &pos);
    j=0;
    
    for(i=size-pos; i<size; i++){   //rotaing left
        temp[j++]=arr[i];
        if(i==size-1){
            for(k=0; k<size-pos; k++){
                temp[j++] = arr[k];
            }
        }
    }
    //traversing rotated array
    for(i=0; i<size; i++){
        printf("%d ", temp[i]);
    }

    return 0;
}
