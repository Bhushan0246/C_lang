#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book{
    int no;
    char name[40], author[25], publish[30];
    int pages;
}b[10];
int main() {
    int i, n = 5, ch;
    char temp[30];
    printf("How Many Records you Want to Add: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Book No.\t: ");
        scanf("%d", &b[i].no);
        printf("Book Name\t: ");
        scanf("%s", b[i].name);
        printf("Author Name\t: ");
        scanf("%s", b[i].author);
        printf("Publisher\t: ");
        scanf("%s", b[i].publish);
        printf("No. of Pages\t: ");
        scanf("%d", &b[i].pages);
    	puts("****************************************************************");
    }
    puts("\tMENU");
    puts("PRESS 1: TO DISPLAY ALL BOOK DETAILS.");
    puts("PRESS 2: TO DISPLAY BOOK OF A AUTHOR.");
    puts("PRESS 3: TO COUNT NUMBER OF BOOK.");
    puts("PRESS 4: TO DISPLAY BOOK OF SPECIFIC PUBLISHER.");
    puts("PRESS 5: TO EXIT.");
    puts("****************************************************************");
    printf("Enter Choice Number: ");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            puts("\tDetails of Available Books");
    		puts("****************************************************************");
            for(i=0; i<n; i++){
                    printf("Book No.\t: %d\n", b[i].no);
                    printf("Book Name\t: %s\n", b[i].name);
                    printf("Author's Name\t: %s\n", b[i].author);
                    printf("No. of Pages\t: %d\n", b[i].pages);
    				puts("****************************************************************");
            }
            break;
        case 2:
            printf("Enter Author's Name: ");
            scanf("%s", temp);
    		puts("****************************************************************");
            for(i=0; i<n; i++){
                if(strcmp(b[i].author, temp) == 0){
                    printf("Book No.\t: %d\n", b[i].no);
                    printf("Book Name\t: %s\n", b[i].name);
                }
            }
            break;
        case 3:
            printf("Total Number of Books Available in Library: %d\n", n);
    		puts("****************************************************************");
            break;
        case 4:
        	printf("Enter Publisher's Name: ");
            scanf("%s", temp);
    		puts("****************************************************************");
            for(i=0; i<n; i++){
                if(strcmp(b[i].publish, temp) == 0){
                    printf("Book No.\t: %d\n", b[i].no);
                    printf("Book Name\t: %s\n", b[i].name);
                    printf("Publisher's Name\t: %s\n", b[i].publish);
                }
            }
            break;
        case 5:
            exit(0);
        default:
        	puts("Invalid Choice!");
}
    
    return 0;
}

