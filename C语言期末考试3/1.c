#include<stdio.h>
void main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9},b[10];
    int i;
		for(i=0;i<10;i++){
			b[i]=a[9-i];
		}
	printf("ԭ��\n");
    for(i=0;i<10;i++){
		printf("%d ",a[i]);
    }
	printf("\n");
    printf("�����\n");
     for(i=0;i<10;i++){
		printf("%d ",b[i]);
    }

	printf("\n");
}