//4、一个数如果恰好等于它的因子之和，这个数就称为完数。编写应用程序求1000之内的所有完数
#include<stdio.h>
int main( )
{
	int i,m,p;
	for(i=1;i<=1000;i++)
	{
		int n=0;
		for(m=1;m<=i-1;m++)
		{
			if(i%m==0) n=n+m;
		}
		if(n==i)
		{
			printf("%d",i);
			printf("\n");
		}
	} 
	return 0;
}
