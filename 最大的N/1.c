//6����дӦ�ó����������1+2+3+...+n<8888�����������n
#include<stdio.h>
int main(){
	int j = 8888,i;
	for(i = 1;1;i++){
		j = j - i;
		if(j < 0){
			printf("�����Ϊ%d\n",i);
			break;
		}
	}
	return 0;
}