#include<stdio.h>
int main(){
	int a = 0;
	double much = 0.0;
	int i = 2;
	for(;;){
		printf("    编号|  商品名称 | 价格（元）\n");
		printf("--------|-----------|-----------\n");
		printf("     1	|   牙刷    |   8.8		\n");
		printf("--------|-----------|-----------\n");
		printf("     2	|   毛巾    |   10.0	\n");
		printf("--------|-----------|-----------\n");
		printf("     3	|   水杯    |   18.8	\n");
		printf("--------|-----------|-----------\n");
		printf("     4	|   苹果    |   12.5	\n");
		printf("--------|-----------|-----------\n");
		printf("     5	|   香蕉    |   15.5	\n");
		printf("--------|-----------|-----------\n");
		printf("请输入想要买的商品的编号：");
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
			printf("别乱输入非法字符!!!\n");
		printf("请问您还需要继续购物吗？（1/0）");
		scanf("%d",&i);
			if(i == 0)
				break;
	}
	printf("您一共花费了%f元\n",much);
	return 0;
}