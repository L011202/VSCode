#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Meum()
{
	printf("********************************\n");
	printf("**********  1 PLAY  ************\n");
	printf("**********  2 EXIT  ************\n");
	printf("********************************\n");
	printf("*********欢迎使用菜单***********\n");
	printf("********************************\n");
}
void Game()
{
	srand((unsigned int)time(NULL));
	int number = rand();
	printf("%d\n", number);
}
int main()
{
	int KEY = 0;
	do {
		KEY = 1;//截止哨兵
		Meum();
		printf("请进行选择>");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1://进行猜数字游戏
			Game();
			break;
		case 0://退出游戏
			KEY = 0;
			break;
		default:
			printf("您输入的选择不合法，请检查后再次输入。\n");
			break;
		}
	} while (KEY);
	return 0;
}
