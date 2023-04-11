#include<stdio.h>
#include<string.h>
struct bank{
		double acc_no;
		char name[40];
		char branch[20];
		double balance;
		union{
			struct Saving{
				char acc_types[10];
			}sav;
			struct curr{
				char acc_typec[10];
			}cur;
		}type;
}holder;
int main(){
	printf("Enter your account number : ");
	scanf("%lf", &holder.acc_no);
	if(holder.acc_no == 5942){
	strcpy(holder.name,"Ankit Dhote");
	strcpy(holder.branch,"Dhar");
	holder.balance=120560.39;
	strcpy(holder.type.sav.acc_types,"Saving");
	printf("Account holder's name : %s\n", holder.name);
	printf("Branch name : %s\n",holder.branch);
	printf("Account type : %s\n", holder.type.sav.acc_types);
	printf("Balance remaining : %.2lf\n", holder.balance);
	}
	else if(holder.acc_no == 19151){
	strcpy(holder.name,"Vatsal Garg");
	strcpy(holder.branch,"Indore");
	holder.balance=560.89;
	strcpy(holder.type.cur.acc_typec,"Current");
	printf("Account holder's name : %s\n", holder.name);
	printf("Branch name : %s\n",holder.branch);
	printf("Account type : %s\n", holder.type.cur.acc_typec);
	printf("Balance remaining : %.2lf\n", holder.balance);		
	}
	else{
		printf("Account not identified!");
	}
	return 0;
}
