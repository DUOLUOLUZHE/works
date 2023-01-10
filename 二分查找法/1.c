#include<stdio.h>
#include<string.h>

void main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left,right,k,num,sz;
	left = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	right = sz - 1;
    k = 7;
	while(left <= right){
		num = (left + right) / 2;
		if(arr[num] > k){
			right = num - 1;
		}else if(arr[num] < k){
			left = num + 1;
		}else{
			printf("找到了，下标是：%d\n",num);
			break;
			}
		}
	if(left > right)
		printf("找不到");
}

