#include<stdio.h>
int main(){
    float salary, yos, bonus=0, netsal=0;
    printf("Enter years of service : ");
    scanf("%f", &yos);
    printf("Enter salary amount : ");
    scanf("%f", &salary);
    if(yos>=5){
        bonus=salary*5/100;
        netsal=salary+bonus;
        printf("Your net salary (with bonus) is %f", netsal);
    }
    else{
        bonus=salary*2/100;
        netsal=bonus+salary;
        printf("Your net salary (with bonus) is %f", netsal);
    }
    return 0;
}