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
	printf("*********��ӭʹ�ò˵�***********\n");
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
		KEY = 1;//��ֹ�ڱ�
		Meum();
		printf("�����ѡ��>");
		int input = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1://���в�������Ϸ
			Game();
			break;
		case 0://�˳���Ϸ
			KEY = 0;
			break;
		default:
			printf("�������ѡ�񲻺Ϸ���������ٴ����롣\n");
			break;
		}
	} while (KEY);
	return 0;
}
