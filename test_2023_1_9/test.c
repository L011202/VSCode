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
	//�׵���Ϣ�洢
	//�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');
	//DisplayBorad(mine, ROW, COL);
	DisplayBorad(show,ROW,COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBorad(mine,ROW,COL);
	//ɨ��
	FindMine(mine, show,ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input;
	do 
	{
		menu();
		printf("�����ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("ѡ��������ٴ�ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}