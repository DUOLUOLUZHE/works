#include<stdio.h>
void main()
{
	int i,num = 0;
	for(i = 1;i <= 100;i++){
		if((i / 10 == 9) || (i % 10 == 9))
			num++;
	
	}
	printf("1-100�й���%d��9��\n",num + 1);
}