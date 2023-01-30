#include <stdio.h>
float percentage(float *sum, int (*n)){
    float res;
    res=((*sum)/((*n)*100))*100;
    return res;
}

int main() {
    int n;
    float percent, marks, sum=0;
    printf("How many subjects do you have? : ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        printf("Enter marks obtained in subject%d out of 100 : ",i);
        scanf("%f", &marks);
        if(marks>0 && marks<100){
            sum+=marks;
        }
        else{
            printf("Entered invalid marks. Try again.\n\n");
            i--;
        }
    }
    percent=percentage(&sum, &n);
    printf("Your overall percentage : %f%\n", percent);
    if(percent>=85){
        printf("Congratulation! Passed with A+ grade.");
    }
    else if(percent>=70 && percent<85){
        printf("Congratulation! Passed with A grade.");
    }
    else if(percent>=60 && percent<70){
        printf("Congratulation! Passed with B grade.");
    }
    else if(percent>=50 && percent<60){
        printf("Congratulation! Passed with C grade.");
    }
    else if(percent>=44 && percent<50){
        printf("Congratulation! Passed with D grade.");
    }
    else if(percent>=34 && percent<44){
        printf("Congratulation! Passed with E grade.");
    }
    else{
        printf("Sorry! You failed with F grade.");
    }
    return 0;
}
