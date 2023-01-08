#include<stdio.h>
void main()
{
	int i,j,k,l,r,num = 0;
	printf("请输入年：");
	scanf("%d",&l);	
	printf("请输入月：");
	scanf("%d",&i);
	printf("请输入日：");
	scanf("%d",&j);
	if(((l % 4 == 0 ) && (l % 100 == 0 )) || (l % 400 == 0))
		r = 29;
	else
		r = 28;
	for(k = 1;k < i;k++){
		if(k == 2){
			num+=r;continue;
		}
		if(k < 8){
			if(k % 2 == 0)
				num+=30;
			else
				num+=31;
		}
		if(k >= 8){
			if(k % 2 == 0)
				num+=31;
			else
				num+=30;
		}

	}
		num = num + j;
	printf("%d年%d月%d日，是这一年的第%d天\n",l,i,j,num);
}
