#include<stdio.h>
int main(){
    float totalclass, classattend, percent=0;
    printf("Enter total number of classes held : ");
    scanf("%f", &totalclass);
    printf("Enter total number of classes attended : ");
    scanf("%f", &classattend);
    percent=(classattend/totalclass)*100;
    printf("Percentage of attendence = %.2f\n", percent);
    if(percent<75){
        int med;
        printf("Do you have a medical certificate (Yes=1, No=2) : ");
        scanf("%d", &med);
        switch(med){
            case 1:
            printf("Student is eligible to sit in exam.");
            break;
            case 2:
            printf("Student is not eligible to sit in exam.");
            break;
        }
    }
    else{
        printf("Student is eligible to sit in exam.");
    }
    return 0;
}