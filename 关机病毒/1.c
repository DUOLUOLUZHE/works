#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char arr[10] = {0};
	printf("���Խ���1�����ڹػ��������ֹͣ�ػ��������롰�������ꡱ������ǿ�ƹػ���\n�����룺");
	system("shutdown -s -t 60");
	for(;;){
		scanf("%s",arr);
		if(0 == strcmp(arr,"��������"))
		{
			system("shutdown -a");break;
		}
	}
	printf("��ϲ�㣬�������꣡\n");
}
