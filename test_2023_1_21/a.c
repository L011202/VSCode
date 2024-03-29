#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<easyx.h>
#include<time.h>
#include<stdlib.h>
#include <Windows.h>
#include<math.h>
#include <conio.h>  
#pragma comment(lib,"winmm.lib")
#include<mmsystem.h>
IMAGE img;
IMAGE img1;
IMAGE img2;
IMAGE img3;
#define num 10
#define PI 3.14
struct Fire  //�����̻����ṹ������
{
	int x, y;//��ʼ����
	int max_x, max_y;//�̻����߶�
	IMAGE Img[2];//����ͼƬ
	bool boom;//�Ƿ�Ҫ����
};
struct Fire fire[num];

struct Show
{
	int x, y;//���ŵ�λ��
	int cx, cy;//�̻����ĵ�����
	int r;//��ǰ�İ뾶
	int max_r;//���뾶
	int pixel[200][200];//ͼƬ��������
	bool isshow;   // �Ƿ�����
	bool isdraw;	 // ��ʼ������ص�
	DWORD t1, t2, dt;
	int width, height;
};
struct Show show[num];

void initshow(int i)//��ʼ���̻�
{
	show[i].cx = 100;
	show[i].cy = 100;
	show[i].r = 0;
	show[i].max_r = 100;
	show[i].width = 200;
	show[i].height = 200;
	show[i].isshow = false;
	show[i].dt = 5;
	show[i].t1 = timeGetTime();//ʱ���ȡ�ٶ�
}


void initfire(int i)//��ʼ���̻���
{
	fire[i].x = rand() % 700 + 100;//�̻��������ʼ��x=100-800;y=100-400;
	fire[i].y = 600;
	fire[i].max_x = fire[i].x;
	fire[i].max_y = rand() % 300 + 100;
	fire[i].boom = false;
	loadimage(&fire[i].Img[0], "�̻���.png", 20, 60);
}


void load()//�����̻�ͼƬ
{
	for (int k = 0; k < num; k++)
	{
		int a = rand() % 3 + 1;
		loadimage(&img1, "�̻�1.png", 200, 200);//���ֲ�ͬ���̻�
		loadimage(&img2, "�̻�2.png", 200, 200);
		loadimage(&img3, "�̻�3.png", 200, 200);
		if (a == 1)
			SetWorkingImage(&img1);
		else
			if (a == 2)
				SetWorkingImage(&img2);
			else
				SetWorkingImage(&img3);
		for (int i = 0; i < 200; i++)
		{
			for (int j = 0; j < 200; j++)
			{
				show[k].pixel[i][j] = getpixel(i, j);//��ͼƬ���ص�ŵ�������
			}
		}
	}
	SetWorkingImage(NULL);
}


void Draw(int i, DWORD* pMem)//����һȦ���ص�
{
	if (show[i].isdraw)
	{
		for (double a = 0; a <= 2 * PI; a += 0.01)   //һȦ628�����ص�
		{
			//��x1,y1����������̻�СͼƬ�� ���� �����
			int x1 = (int)(show[i].cx + show[i].r * cos(a));
			int y1 = (int)(show[i].cy + show[i].r * sin(a));

			if (x1 > 0 && x1 < show[i].width && y1>0 && y1 < show[i].height)
			{
				int b = show[i].pixel[x1][y1] & 0xff;   //blue
				int g = (show[i].pixel[x1][y1] >> 8) & 0xff;   //green
				int r = show[i].pixel[x1][y1] >> 16;   //red

				//(xx,yy)������ڴ��ڵ� ���� �����
				int xx = (int)(show[i].x + show[i].r * cos(a));
				int yy = (int)(show[i].y + show[i].r * sin(a));

				if (r > 0x20 && g > 0x20 && b > 0x20 && xx < 1000 && xx>0 && yy > 0 && yy < 600)
				{
					//��(x1,y1)�����ϵ����ص� ��ֵ ����xx,yy�������
					pMem[yy * 1000 + xx] = BGR(show[i].pixel[x1][y1]);
				}

			}
		}
		show[i].isdraw = false;
	}
}



void fire_boom(DWORD* pMem)//�̻�����
{
	int  drt[16] = { 5, 5, 5, 5, 15, 15, 25, 25, 35, 35, 55, 55, 65, 65, 75, 75 };
	for (int i = 0; i < num; i++)
	{
		show[i].t2 = timeGetTime();
		if (show[i].t2 - show[i].t1 > show[i].dt && show[i].isshow == true)
		{
			if (show[i].r < show[i].max_r)
			{
				show[i].r++;
				show[i].dt = drt[show[i].r / 10];  //ÿʮ���̻����ص�ı�һ���̻����ŵ��ٶ�
				show[i].isdraw = true;

			}
			if (show[i].r >= show[i].max_r - 1)
			{
				show[i].isdraw = false;
				initshow(i);
				initfire(i);
			}

			//����ʱ��
			show[i].t1 = show[i].t2;
			//�������ŵ�״̬
			Draw(i, pMem);
		}
	}
}


void fire_up()//�̻�������
{
	for (int i = 0; i < num; i++)
	{
		putimage(fire[i].x, fire[i].y, &fire[i].Img[0], SRCINVERT);//������Ӱ
		if (fire[i].y > fire[i].max_y)
		{
			fire[i].y -= 10;//�����ƶ�
		}
		else
		{	//�ѵ�����ߵ㣬׼������
			show[i].x = fire[i].x + 10;
			show[i].y = fire[i].y;
			fire[i].boom = true;
			show[i].isshow = true;
		}
		putimage(fire[i].x, fire[i].y, &fire[i].Img[0], SRCINVERT);
	}
}



void word()//��������-���밴�����...��
{
	settextcolor(RED);
	settextstyle(25, 0, "����");
	outtextxy(400, 550, "��");
	Sleep(500);
	outtextxy(425, 550, "��");
	Sleep(500);
	outtextxy(450, 550, "��");
	Sleep(500);
	outtextxy(475, 550, "��");
	Sleep(500);
	outtextxy(500, 550, "��");
	Sleep(500);
	outtextxy(525, 550, ".");
	Sleep(500);
	outtextxy(550, 550, ".");
	Sleep(500);
	outtextxy(575, 550, ".");
}


int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	initgraph(1000, 600);//��ʼ��ͼ�ν���
	loadimage(&img, "2023.png", 1000, 600);
	putimage(0, 0, &img, SRCINVERT);//����ͼ

	mciSendString("open ���ϻ���.mp3", 0, 0, 0);//���š������ϻ���
	mciSendString("play ���ϻ���.mp3", 0, 0, 0);

	Sleep(1000);

	word();//��������-���밴�����...��

	_getch();//�������������

	DWORD* pMem = GetImageBuffer();
	for (int i = 0; i < num; i++)//��ʼ���̻������̻�
	{
		initfire(i);
		initshow(i);
	}
	load();//�����̻�ͼƬ
	while (1)
	{
		for (int i = 0; i < 3000; i++)
		{
			int px1 = rand() % 1000; // 0..1199
			int py1 = rand() % 600;  // 0.799
			pMem[py1 * 1000 + px1] = BLACK;
			pMem[py1 * 1000 + px1 + 1] = BLACK;	// ���Դ渳ֵ�������ص�		
		}
		fire_up();//�����̻���
		fire_boom(pMem);//�̻�����
		Sleep(50);
	}
	return 0;
}