#define _CRT_SECURE_NO_DEPRECATE
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
void InitBorad(char borad[ROWS][COLS], int rows, int cols,char set)
{
	int i;
	int j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			borad[i][j] = set;
		}
	}
}

void DisplayBorad(char borad[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	for (i = 0; i <= col; i++)
	{
		printf("%d",i);
	}
	printf("\n");
	for (i = 1; i<=row; i++)
	{
		printf("%d", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c",borad[i][j]);
			//printf("\n");
		}
		printf("\n");
	}
}

void SetMine(char borad[ROWS][COLS],int row,int col)
{
	int count = Easy_Count;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		//count--;
		if (borad[x][y] == '0')
		{
			borad[x][y] = '1';
			count--;

		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int win = 0;
	while (win<row*col-Easy_Count) 
	{
		printf("��������Ҫ�Ų��׵�����");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//�������
			{
				printf("��Ǹ������ը���ˣ���Ϸ������\n");
				DisplayBorad(mine,row,col);
				break;
			}
			else//û�в���
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBorad(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�������겻�Ϸ������������룡\n");
		}
	}
	if (win == row * col - Easy_Count)
	{
		printf("��ϲ�����Ѿ����������е��ף�\n");
		DisplayBorad(mine,row,col);
	}
}

