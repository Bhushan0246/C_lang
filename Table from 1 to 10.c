#include <stdio.h>
int table(){
    int t, i=1;
    for (t=2; i<=10; i++){
        printf("%d*%d=%d\t", t, i, t*i);
        if(i==10 && t<10){
            printf("\n\n");
            ++t;
            i=0;
        }
    }
}
int main() {
    int result;
    printf("Multiplication tables from 1 to 10.\n");
    result=table();
    return 0;
}
