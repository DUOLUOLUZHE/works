/*4�����и���ͬ��ֵ��������ɣ���дһ��������򣬶����������һ������������ϳ����ֵ����ѿ��ܣ�
Ҫ��ʹ�õı�ֵ�������١����磬����146Ԫ�����õ����н����
 146Ԫ=
100Ԫ  1��
20Ԫ   2��
5Ԫ   1��
1Ԫ   1��
*/
#include<stdio.h>
int main(){
	int sum = 0;
	int a = 0,b =0,c =0,d = 0,e = 0,f = 0;
	printf("������һ����");
	scanf("%d",&sum);
	for(;;){
		sum-=100;
		a++;
		if(sum < 0){
			a--;
			break;
		}
	}
	sum+=100;
	for(;;){
		sum-=50;
		b++;
		if(sum < 0){
			b--;
			break;
		}
	}
	sum+=50;
	for(;;){
		sum-=20;
		c++;
		if(sum < 0){
			c--;
			break;
		}
	}
	sum+=20;
	for(;;){
		sum-=10;
		d++;
		if(sum < 0){
			d--;
			break;
		}
	}
	sum+=10;
	for(;;){
		sum-=5;
		e++;
		if(sum < 0){
			e--;
			break;
		}
	}
	sum+=5;
	for(;;){
		sum-=1;
		f++;
		if(sum < 0){
			f--;
			break;
		}
	}
	if(a != 0){
		printf("����100Ԫ%d��\n",a);
	}
	if(b != 0){
	printf("����50Ԫ%d��\n",b);
	}
	if(c != 0){
	printf("����20Ԫ%d��\n",c);
	}
	if(d != 0){
	printf("����10Ԫ%d��\n",d);
	}
	if(e != 0){
	printf("����5Ԫ%d��\n",e);
	}
	if(f != 0){
	printf("����1Ԫ%d��\n",f);
	}
	return 0;
}