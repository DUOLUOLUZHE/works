//6、编写应用程序，输出满足1+2+3+...+n<8888的最大正整数n
#include<stdio.h>
int main(){
	int j = 8888,i;
	for(i = 1;1;i++){
		j = j - i;
		if(j < 0){
			printf("最大数为%d\n",i);
			break;
		}
	}
	return 0;
}