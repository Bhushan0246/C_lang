#include<stdio.h>
enum alphabet{a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
int main(){
	enum alphabet alph = k;
	printf("Size of enum: %d", sizeof(alph));
	return 0;
}
