//6����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
#include<stdio.h>
int main(){
	float a=1,b=2,c = 0,e = 0,sum=0;
	int i=1;
	for(i=1;i<=20;i++){
		e=b/a;
		sum=sum+e;
		c=b;
		b=a+b;
		a=c;
	}
	printf("sum= %f\n",sum);
	return 0;
}