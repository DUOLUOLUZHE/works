#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
	int i,j,a;
	char arr1[] = " ######################";
	char arr2[] = " Welcome my C progream!";
	j = sizeof(arr2) / sizeof(arr2[0]) - 1;
	for(a = 0;a <= j;a++,j--){
			arr1[a] = arr2[a];
			arr1[j] = arr2[j];
			printf("%s\n",arr1);
			Sleep(1000);
			system("cls");
	}	
	printf(" Welcome my C progream!\n");
}