#include<stdio.h>
void main()
{
	int a,b,c;
	printf("��������������");
	scanf("%d%d%d",&a,&b,&c);
	if(a > b && c > b){
		if(a > c)
			printf("����Ϊ%d\n",a);
		if(c > a)
			printf("����Ϊ%d\n",c);
	}
	if(a > c && b > c){
		if(a > b)
			printf("����Ϊ%d\n",a);
		if(b > a)
			printf("����Ϊ%d\n",b);
	}
	if(c > a && b > a){
		if(c > b)
			printf("����Ϊ%d\n",c);
		if(b > c)
			printf("����Ϊ%d\n",b);
	}
}