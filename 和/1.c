//3、分别用do-while和for循环计算1+1/2!+1/3!+1/4!+...的前20项和
#include<stdio.h>
int main(){
	float i,j,sum = 0,a = 1;
	for(i = 1; i <= 20;i++){
		for(j = 1;j <= i;j++){
			a = a * j;
		}
		sum = sum + 1/a;
		a = 1;
	}
	printf("前20项和为%f\n",sum);
	return 0;
}