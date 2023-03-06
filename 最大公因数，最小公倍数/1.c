//5、输入两个正整数m和n，求其最大公约数和最小公倍数。
#include <stdio.h>
int main()
{
    int m,n,max,min,b,c;
	printf("请输入两个整数：\n");
	scanf("%d%d",&m,&n);
    c=m%n;
    b=m*n;
	while(c!=0)
	{
        m=n;
		n=c;
        c=m%n;
	}
    max=n;
	min=b/max;
	printf("\n最大公约数为：%d\n最小公倍数为：%d\n",max,min);
    return 0;
}
