#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch;
	puts("Which shutdown function do you wish to perform:\n1. Logoff\n2. Restart\n3. Shutdown");
	scanf("%d", &ch);
	switch(ch){
		case 1:
			system("C:\\WINDOWS\\System32\\shutdown /l");
			break;
		case 2:
			system("C:\\WINDOWS\\System32\\shutdown /r");
			break;
		case 3:
			system("C:\\WINDOWS\\System32\\shutdown /s");
			break;
		default :
			printf("Invalid choice!");
			break;
		}
	return 0;
}