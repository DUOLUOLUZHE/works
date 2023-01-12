#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char arr[10] = {0};
	printf("电脑将在1分钟内关机，如果想停止关机，请输入“白羊万岁”，否则将强制关机！\n请输入：");
	system("shutdown -s -t 60");
	for(;;){
		scanf("%s",arr);
		if(0 == strcmp(arr,"白羊万岁"))
		{
			system("shutdown -a");break;
		}
	}
	printf("恭喜你，白羊万岁！\n");
}
