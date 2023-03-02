//3、读入三个数，判断这三个数能否构成三角形，如能构成三角形，请输出这个三角形的面积。
#include<stdio.h>
int main(){
	int a = 0,b = 0,c = 0;
	double sum = 0.0;
	printf("请输入三个数：");
	scanf("%d%d%d",&a,&b,&c);
	if(((a + b > c)&&(a +c >b))&&(c + b > a)){
		printf("可以构成三角形\n");
		sum = ((a + b +c) * (a + b -c) * (a - b +c) * (b + c - a)) / 16;
		printf("三角形面积为%f\n",sum);
	}else
		printf("不可以构成三角形\n");
	return 0;
}