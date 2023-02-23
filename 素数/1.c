//1、编写应用程序求1！+2！+3！+...+10!
#include<stdio.h>
int main(){
	int i,j = 0,sum = 1,sum1 = 0;
	printf("请输入取到几的阶乘：");
	scanf("%d",&j);
	for(i = 1;i <= j;i++){
		sum1 = sum1 + sum * i;
		sum = sum * i;
	}
	printf("加到%d的阶乘是%d\n",j,sum1);
	return 0;
}
