#include <stdio.h>
struct employee{
    int id;
    char name[25];
    char dept[20];
    float salary;
}emp[10];
int main() {
    int i, n, high;
    printf("How many employee info do you want to enter: ");
    scanf("%d", &n);
    puts("-------------------------------------------------------");
    for(i=0; i<n; i++){
        printf("Employee id: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Department: ");
        scanf("%s", emp[i].dept);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    puts("-------------------------------------------------------");
    }
    high = emp[0].salary;
    for(i=0; i<n; i++){
        if(emp[i].salary > high)
            high = emp[i].salary;
    }
    puts("Highest salary employee details:");
    puts("-------------------------------------------------------");
    for(i=0; i<n; i++){
        if(emp[i].salary == high){
            printf("EMP ID: %d\nNAME: %s\nDEPARTMENT: %s\nSALARY: %.2f", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
        }
    }
    return 0;
}
