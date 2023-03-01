#include<stdio.h>
int min(int x,int y){
	int z = 0;
	if(x >y){
		z = y;
	}else
		z = x;
	return z;
}
int main(){
	int a = 0,b = 0,c = 0;
	scanf("%d%d",&a,&b);
	min(a,b);
	c = min(a,b);
	printf("%d\n",c);
	return 0;
}