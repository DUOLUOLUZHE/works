#include<stdio.h>
void main()
{
	int i;
	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int max = arr[0];//千万不可以写成max = 0
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i = 0;i < sz;i++){
		if(arr[i] > max)
			max = arr[i];
	}
	printf("max = %d\n",max);
}