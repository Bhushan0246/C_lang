#include<stdio.h>
int main(){
	int i;
	char ch;
	float f;
	double d;
	long u;
	long double ll;
	printf("Size of char type : %d\n",sizeof(ch));
	printf("Size of int type : %d\n",sizeof(i));
	printf("Size of float type : %d\n",sizeof(f));
	printf("Size of double type : %d\n",sizeof(d));
	printf("Size of unsigned int type : %d\n",sizeof(u));
	printf("Size of long double type : %d\n",sizeof(ll));
	return 0;
}