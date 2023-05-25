#include<stdio.h>
void strike(){
	int i;
    for(i=0; i<65; i++)
    	printf("-");
    printf("\n");
}
int main (){
    int i, size=0, j, pos, k;
    printf("Enter array size : ");
    scanf("%d", &size);
    strike();
    int arr[size];
    int temp_arr[size];
    puts("Enter array elements:");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    strike();
    printf("Enter the position number to rotate the left: ");
    scanf("%d", &pos);
    j=0;
    //Rotating array
    strike();
    for(i=pos; i<size; i++){
        temp_arr[j] = arr[i];
        j++;
        if(i == size-1){
            for(k=0; k<pos; k++){
                temp_arr[j++] = arr[k];
            }
        }
    }

    printf("Rotated array: ");
    for(i=0; i<size; i++){
        printf("%d ", temp_arr[i]);
    }
    return 0;
}
