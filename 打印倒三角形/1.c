#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("请输入三角形一共有几层：");
	scanf("%d",&k);
	for(i = 1;i <= k;i++){

		for(j = 1;j <= 2 * (k - i) + 1;j++){
			if(j == 1){
				for(n = 1;n <= i - 1;n++){
					printf(" ");
				}
			}
			printf("*");
		}
		printf("\n");
	}
}