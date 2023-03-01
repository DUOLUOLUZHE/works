//7、完成通过键盘输入三个数，并且将他们从小到大排列
#include<stdio.h>
int main()
{
    int a = 0,b = 0,c = 0,d = 0; 
    printf("请分别输入a,b,c的值:");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        d = a;
        a = b;         
        b = d;
    }
	if(a > c)
    {
        d = a;
        a = c;
        c = d;
    }
	if(b > c)
    {
        d = b;
        b = c;
        c = d;
    }
    printf("%d,%d,%d\n",a,b,c);
    return 0;
}
