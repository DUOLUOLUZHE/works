//3���ֱ���do-while��forѭ������1+1/2!+1/3!+1/4!+...��ǰ20���
#include<stdio.h>
int main(){
	float i,j,sum = 0,a = 1;
	for(i = 1; i <= 20;i++){
		for(j = 1;j <= i;j++){
			a = a * j;
		}
		sum = sum + 1/a;
		a = 1;
	}
	printf("ǰ20���Ϊ%f\n",sum);
	return 0;
}