//2����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5
#include<stdio.h>
int main()
{
	int n,j,k=2,m;
	printf("������һ��������:");
	scanf("%d",&n);
	printf("%d=",n);
first:if(n==k){
		printf("%d",k);
	}else if(n%k==0){
		printf("%d*",k);
		n/=k;
		goto first;
	}else if(n%k!=0){
		k=k+1;
		goto first;
	}
	printf("\n");
	return 0;
}
