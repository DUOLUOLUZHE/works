#include<stdio.h>
void main()
{
	int arr[6][6]= {0},j =0 ,i =2 ,k,m,n;
	for(k = 1;k <= 25;k++){
		arr[i][j] = k;
		if(i == 4 && j == 0){
			j += 1;continue;
		}
		if(j == 0){
			j = 4;
		}else{
			j--;
		}
		if(i == 4){
			i = 0;
		}else{
			i++;
		}
		if(arr[i][j] != 0){
			j = j + 2;
			i = i - 1;
		}
	}
	for(m = 0;m < 5;m++){
		for(n = 0;n < 5;n++){
			printf("%4d ",arr[n][m]);
		}
		printf("\n");
	}
}