#include<stdio.h>
void main()
{
	int i,j;
	for(i = 2;i <= 100;i++){
		if(i == 2)
			printf("%d\n",i);
		for(j = 2;j < i;j++){
			if(i % j == 0){//此处我曾将%写为/，导致结果错误，将1~100全部打印
//如果i / j == 0，则在第一次 i = 3 进入此内循环时，一次内循环完全遍历，便让2~100全部打印
				break;
			}
			if(j == i-1 )
				printf("%d\n",i);
			
		}
	}
}