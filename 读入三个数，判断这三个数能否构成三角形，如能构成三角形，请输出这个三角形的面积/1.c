//3���������������ж����������ܷ񹹳������Σ����ܹ��������Σ��������������ε������
#include<stdio.h>
int main(){
	int a = 0,b = 0,c = 0;
	double sum = 0.0;
	printf("��������������");
	scanf("%d%d%d",&a,&b,&c);
	if(((a + b > c)&&(a +c >b))&&(c + b > a)){
		printf("���Թ���������\n");
		sum = ((a + b +c) * (a + b -c) * (a - b +c) * (b + c - a)) / 16;
		printf("���������Ϊ%f\n",sum);
	}else
		printf("�����Թ���������\n");
	return 0;
}