#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int x,y,k;
	srand((unsigned int)time(NULL));
		for(;;){
			y = rand() % 100 + 1;//ȡ1~100����
			for(;;){
				printf("������һ������");
				scanf("%d",&x);
				if(x > y){
					printf("�´���\n");
				}else if(y > x){
					printf("��С��\n");
				}else if(x == y){
					printf("�¶���\n");break;
				}
			}
			printf("�Ƿ�Ҫ����һ�֣�(1/0):");
			scanf("%d",&k);
			if(k == 0){
				break;
			}
			if(k == 1){
				continue;
			}
		}
	printf("��Ϸ������\n");
	}