#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("������������һ���м��㣺");
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