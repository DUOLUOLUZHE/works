//1����дӦ�ó�����1��+2��+3��+...+10!
#include<stdio.h>
int main(){
	int i,j = 0,sum = 1,sum1 = 0;
	printf("������ȡ�����Ľ׳ˣ�");
	scanf("%d",&j);
	for(i = 1;i <= j;i++){
		sum1 = sum1 + sum * i;
		sum = sum * i;
	}
	printf("�ӵ�%d�Ľ׳���%d\n",j,sum1);
	return 0;
}
