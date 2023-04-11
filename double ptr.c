#include<stdio.h>
int main(){
	int a = 10, *p, **pp;
	p = &a;
	pp = &p;
	printf("Value of a : %d\n", a);
	printf("Address of a : %x\n", p);
	printf("Value stored at p : %x\n", p);
	printf("Value pointed by p : %x\n", *p);
	printf("Address of p: %x\n", pp);
	printf("Value stored at pp : %x\n", *pp);
	printf("Value pointed by pp : %d\n", **pp);
	return 0;
}