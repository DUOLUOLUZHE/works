//5����дӦ�ó���ʹ��forѭ��������8+88+888+...ǰ10��֮�͡�
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
	printf("���Ϊ%d\n",sum);
	return 0;
}