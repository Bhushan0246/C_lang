#include<stdio.h>
enum alphabet{
	a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
	}alph;
int main(){
	for(alph = a; alph <= z; alph++){
		printf("%d\t", alph+1);
	}
	return 0;
}
