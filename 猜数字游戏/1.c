#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int x,y,k;
	srand((unsigned int)time(NULL));
		for(;;){
			y = rand() % 100 + 1;//取1~100的数
			for(;;){
				printf("请输入一个数：");
				scanf("%d",&x);
				if(x > y){
					printf("猜大了\n");
				}else if(y > x){
					printf("猜小了\n");
				}else if(x == y){
					printf("猜对了\n");break;
				}
			}
			printf("是否要再来一局？(1/0):");
			scanf("%d",&k);
			if(k == 0){
				break;
			}
			if(k == 1){
				continue;
			}
		}
	printf("游戏结束。\n");
	}