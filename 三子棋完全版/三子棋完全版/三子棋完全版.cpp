#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int num1 = 0;
void vlan()
{
	printf("*****************************************\n");
	printf("*****************请选择******************\n");
	printf("*************进行游戏输入1***************\n");
	printf("*************退出游戏输入0***************\n");
	printf("*****************************************\n");
}

void com()
{
	printf("*****************************************\n");
	printf("*****************请选择******************\n");
	printf("*************再来一局输入1***************\n");
	printf("*************退出游戏输入0***************\n");
	printf("*****************************************\n");
}
int win(char arr[3][3], int set)
{
	int i,j,a,b;
	for (i = 0; i <= 2; i++) {//横向一样
		if ((arr[i][1] == arr[i][2] && arr[i][2] == arr[i][0]) && arr[i][0] == '*')
			set = 1; break;
		if ((arr[i][1] == arr[i][2] && arr[i][2] == arr[i][0]) && arr[i][0] == '#')
			set = 2; break;
	}
	for (j = 0; j <= 2; j++) {//纵向一样
		if ((arr[1][j] == arr[2][j] && arr[2][j] == arr[0][j]) && arr[0][j] == '*')
			set = 1; break;
		if ((arr[1][j] == arr[2][j] && arr[2][j] == arr[0][j]) && arr[0][j] == '#')
			set = 2; break;
	}
	//斜向一样
	if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) && arr[0][0] == '*')
		set = 1;
	if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) && arr[0][0] == '#')
		set = 2;
	if ((arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) && arr[1][1] == '*')
		set = 1;
	if ((arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) && arr[1][1] == '#')
		set = 2;
	num1++;
	if (num1 == 9 && set == 0) {
		set = 3;
		num1 = 0;
	}
	return set;
}

void game()
{
	int i, j, a = 0, b = 0, x = 0, y = 0, set = 0;
	char arr[3][3] = { 0 };
	num1 = 0;
	srand((unsigned int)time(NULL));
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			arr[i][j] = ' ';
		}
	}
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			printf(" %c |", arr[i][j]);
		}
		printf("\n");
		printf("___|___|___|\n");
	}
	while (1) {
		printf("玩家走，请输入坐标");
		scanf("%d%d", &a, &b);
		if (a <= 3 && a > 0 && b <= 3 && b > 0) {
			if (arr[a - 1][b - 1] != ' ') {
				printf("此处已经被占用\n");
				continue;
			}
			arr[a - 1][b - 1] = '*';
			for (i = 0; i <= 2; i++) {
				for (j = 0; j <= 2; j++) {
					printf(" %c |", arr[i][j]);
				}
				printf("\n");
				printf("___|___|___\n");
			}
			set = win(arr, set);
			if (set != 0)
				break;
			printf("电脑落子中\n");
			day:
			x = rand() % 3;
			y = rand() % 3;
			if (arr[x][y] != ' ') {
				goto day;
			}
			arr[x][y] = '#';
			for (i = 0; i <= 2; i++) {
				for (j = 0; j <= 2; j++) {
					printf(" %c |", arr[i][j]);
				}
				printf("\n");
				printf("___|___|___\n");
			}
		}
		else {
			printf("坐标非法\n");
		}
		set = win(arr, set);
		if (set != 0)
			break;
	}
	if (set == 1)
		printf("玩家赢\n");
	else if (set == 2)
		printf("电脑赢\n");
	else
		printf("平局\n");
	Sleep(3000);
}


void main()
{
	int a = 0;
	do {
		system("cls");
		vlan();
		printf("请输入=>");
		scanf("%d", &a);
		switch (a) {
		case 0:
			break;
		case 1:
			game();
			system("cls");
			com();
			printf("请输入=>");
			scanf("%d", &a);
			break;
		default:
			system("cls");
			printf("输入错误，请重新输入\n");
			Sleep(3000);
			a = 1;
			break;
		}
	} while (1 == a);
	system("cls");
	printf("游戏结束\n");
}