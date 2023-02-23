//5、编写应用程序，使用for循环语句计算8+88+888+...前10项之和。
#include<stdio.h>
int main(){
	int i,sum = 0,j = 8,k = 8,sum1 = 8;
	for(i = 1;i <= 10;i++){
		sum = sum + sum1;
		k = j * 10 + k;
		j = k;
		sum1 = k;
		k = 8;
	}
	printf("结果为%d\n",sum);
	return 0;
}