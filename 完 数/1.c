//4��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������дӦ�ó�����1000֮�ڵ���������
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
