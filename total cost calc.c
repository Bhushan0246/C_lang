#include<stdio.h>
int main(){
    float totalcost, purchase, dis;
    printf("Enter the amount of purchase : ");
    scanf("%f", &purchase);
    if(purchase>=1000){
        dis=purchase*10/100;
        totalcost=purchase-dis;
        printf("The total cost is %f", totalcost);
    }
    else{
        printf("The total cost is %f", purchase);
    }
    return 0;
}