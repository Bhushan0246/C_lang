#include<stdio.h>
int main(){
	static int x[10]={11,12,13,14,15,16,17,18,19,20};
	int i;
	for(i=0;i<10;++i){
		printf("\ni=%d,\tx[i]=%d\t*(x+i)=%d\t", i, x[i], *(x+i));
		printf("&x[i]=%x,\tx+i=%x\n");
	}
	return 0;
}
