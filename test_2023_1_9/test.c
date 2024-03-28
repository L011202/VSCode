#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
void menu()
{
	printf("***************************\n\n");
	printf("*********1.Play************\n\n");
	printf("*********2.Exit************\n\n");
	printf("***************************\n\n");
}
void game()
{
	//雷的信息存储
	//布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//DisplayBorad(mine, ROW, COL);
	DisplayBorad(show,ROW,COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBorad(mine,ROW,COL);
	//扫雷
	FindMine(mine, show,ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input;
	do 
	{
		menu();
		printf("请进行选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误，请再次选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}