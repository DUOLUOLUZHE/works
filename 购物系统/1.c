#include<stdio.h>
int main(){
	int a = 0;
	double much = 0.0;
	int i = 2;
	for(;;){
		printf("    ���|  ��Ʒ���� | �۸�Ԫ��\n");
		printf("--------|-----------|-----------\n");
		printf("     1	|   ��ˢ    |   8.8		\n");
		printf("--------|-----------|-----------\n");
		printf("     2	|   ë��    |   10.0	\n");
		printf("--------|-----------|-----------\n");
		printf("     3	|   ˮ��    |   18.8	\n");
		printf("--------|-----------|-----------\n");
		printf("     4	|   ƻ��    |   12.5	\n");
		printf("--------|-----------|-----------\n");
		printf("     5	|   �㽶    |   15.5	\n");
		printf("--------|-----------|-----------\n");
		printf("��������Ҫ�����Ʒ�ı�ţ�");
		scanf("%d",&a);
		if(a == 1){
			much += 8.8;
		}else if(a == 2){
			much += 10.0;
		}else if(a == 3){
			much += 18.8;
		}else if(a == 4){
			much += 12.5;
		}else if(a == 5){
			much += 15.5;
		}else
			printf("��������Ƿ��ַ�!!!\n");
		printf("����������Ҫ���������𣿣�1/0��");
		scanf("%d",&i);
			if(i == 0)
				break;
	}
	printf("��һ��������%fԪ\n",much);
	return 0;
}