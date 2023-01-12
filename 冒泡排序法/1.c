#include<stdio.h>
void main()
{
	int arr[10],a,i,x,k,j;
	printf("ÇëÊäÈë10¸öÊı£º");
	for(a = 1;a <=10;a++){
		scanf("%d",&arr[a - 1]);
	}
	for(i = 1;i < 10;i++)
		for(j = 1;j <= 9;j++){
			for(x = 0;x < 9;x++){
				if(arr[x] > arr[x + 1]){
					k = arr[x];
					arr[x] = arr[x + 1];
					arr[x + 1] = k;
			}
		}	
	}
		for(a = 1;a <= 10;a++)
			printf("%d ",arr[a - 1]);
	printf("\n");
}