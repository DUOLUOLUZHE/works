//7、完成通过键盘输入三个数，并且将他们从小到大排列
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("请输入三个数：");
	scanf("%d%d%d",&a,&b,&c);
	if(a > b && c > b){
		if(a > c)
			printf("最大的为%d\n",a);
		if(c > a)
			printf("最大的为%d\n",c);
	}
	if(a > c && b > c){
		if(a > b)
			printf("最大的为%d\n",a);
		if(b > a)
			printf("最大的为%d\n",b);
	}
	if(c > a && b > a){
		if(c > b)
			printf("最大的为%d\n",c);
		if(b > c)
			printf("最大的为%d\n",b);
	}
}