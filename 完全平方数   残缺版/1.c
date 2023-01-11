#include<stdio.h>
void main()
{
	int num = 0,i,j;
	for(i = 1;1;i++){
		for(j = 1;j <= 1000;j++){
			if((i * i - j * j == 168) && ((i + j) * (i - j) == 168)){
				num = j * j - 100;
				printf("这个数是：%d\n",num);
				break;
			}
		}
	if(num != 0)
		break;
	}
}