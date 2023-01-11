#include<stdio.h>
void main()
{
	int i,num = 0;
	for(i = 1;i <= 100;i++){
		if((i / 10 == 9) || (i % 10 == 9))
			num++;
	
	}
	printf("1-100中共有%d个9。\n",num + 1);
}