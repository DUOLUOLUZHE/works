//5����������������m��n���������Լ������С��������
#include <stdio.h>
int main()
{
    int m,n,max,min,b,c;
	printf("����������������\n");
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
	printf("\n���Լ��Ϊ��%d\n��С������Ϊ��%d\n",max,min);
    return 0;
}
