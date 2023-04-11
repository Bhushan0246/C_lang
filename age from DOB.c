#include<stdio.h>
int main(){
	int dp, dm, dy, bd, bm, by, aged, agem, agey;
	//Present date
	printf("Enter the day today (dd) : ");
	scanf("%d",&dp);
	printf("Enter present month (mm ) : ");
	scanf("%d", &dm);
	printf("Enter present year (yyyy) : ");
	scanf("%d", &dy);
	//Date of Birth
	printf("Enter the day of birth (dd) : ");
	scanf("%d",&bd);
	printf("Enter month of birth (mm) : ");
	scanf("%d", &bm);
	printf("Enter year of birth (yyyy) : ");
	scanf("%d", &by);
	//Calculation og age
	aged=dp-bd;	//days of age
	agem=dm-bm;	//months of age
	agey=dy-by;	//yearss of age
	if(aged<0)
	aged=(-aged);
	if(agem<0)
	agem=(-agem);
	if(agey<0)
	agey=(-agey);
	printf("Your age is %d days, %d months, %d year.",aged, agem, agey);
	return 0;
}
