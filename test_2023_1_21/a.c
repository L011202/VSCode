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
struct Fire  //创建烟花弹结构体类型
{
	int x, y;//初始坐标
	int max_x, max_y;//烟花最大高度
	IMAGE Img[2];//保存图片
	bool boom;//是否要爆开
};
struct Fire fire[num];

struct Show
{
	int x, y;//绽放的位置
	int cx, cy;//烟花中心点坐标
	int r;//当前的半径
	int max_r;//最大半径
	int pixel[200][200];//图片像素数组
	bool isshow;   // 是否绽放
	bool isdraw;	 // 开始输出像素点
	DWORD t1, t2, dt;
	int width, height;
};
struct Show show[num];

void initshow(int i)//初始化烟花
{
	show[i].cx = 100;
	show[i].cy = 100;
	show[i].r = 0;
	show[i].max_r = 100;
	show[i].width = 200;
	show[i].height = 200;
	show[i].isshow = false;
	show[i].dt = 5;
	show[i].t1 = timeGetTime();//时间获取速度
}


void initfire(int i)//初始化烟花弹
{
	fire[i].x = rand() % 700 + 100;//烟花弹坐标初始化x=100-800;y=100-400;
	fire[i].y = 600;
	fire[i].max_x = fire[i].x;
	fire[i].max_y = rand() % 300 + 100;
	fire[i].boom = false;
	loadimage(&fire[i].Img[0], "烟花弹.png", 20, 60);
}


void load()//加载烟花图片
{
	for (int k = 0; k < num; k++)
	{
		int a = rand() % 3 + 1;
		loadimage(&img1, "烟花1.png", 200, 200);//三种不同的烟花
		loadimage(&img2, "烟花2.png", 200, 200);
		loadimage(&img3, "烟花3.png", 200, 200);
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
				show[k].pixel[i][j] = getpixel(i, j);//把图片像素点放到数组中
			}
		}
	}
	SetWorkingImage(NULL);
}


void Draw(int i, DWORD* pMem)//绘制一圈像素点
{
	if (show[i].isdraw)
	{
		for (double a = 0; a <= 2 * PI; a += 0.01)   //一圈628个像素点
		{
			//（x1,y1）是相对于烟花小图片的 像素 坐标点
			int x1 = (int)(show[i].cx + show[i].r * cos(a));
			int y1 = (int)(show[i].cy + show[i].r * sin(a));

			if (x1 > 0 && x1 < show[i].width && y1>0 && y1 < show[i].height)
			{
				int b = show[i].pixel[x1][y1] & 0xff;   //blue
				int g = (show[i].pixel[x1][y1] >> 8) & 0xff;   //green
				int r = show[i].pixel[x1][y1] >> 16;   //red

				//(xx,yy)是相对于窗口的 像素 坐标点
				int xx = (int)(show[i].x + show[i].r * cos(a));
				int yy = (int)(show[i].y + show[i].r * sin(a));

				if (r > 0x20 && g > 0x20 && b > 0x20 && xx < 1000 && xx>0 && yy > 0 && yy < 600)
				{
					//把(x1,y1)坐标上的像素点 赋值 给（xx,yy）坐标点
					pMem[yy * 1000 + xx] = BGR(show[i].pixel[x1][y1]);
				}

			}
		}
		show[i].isdraw = false;
	}
}



void fire_boom(DWORD* pMem)//烟花绽放
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
				show[i].dt = drt[show[i].r / 10];  //每十个烟花像素点改变一下烟花绽放的速度
				show[i].isdraw = true;

			}
			if (show[i].r >= show[i].max_r - 1)
			{
				show[i].isdraw = false;
				initshow(i);
				initfire(i);
			}

			//更新时间
			show[i].t1 = show[i].t2;
			//可以绽放的状态
			Draw(i, pMem);
		}
	}
}


void fire_up()//烟花弹上升
{
	for (int i = 0; i < num; i++)
	{
		putimage(fire[i].x, fire[i].y, &fire[i].Img[0], SRCINVERT);//消除残影
		if (fire[i].y > fire[i].max_y)
		{
			fire[i].y -= 10;//向上移动
		}
		else
		{	//已到达最高点，准备绽放
			show[i].x = fire[i].x + 10;
			show[i].y = fire[i].y;
			fire[i].boom = true;
			show[i].isshow = true;
		}
		putimage(fire[i].x, fire[i].y, &fire[i].Img[0], SRCINVERT);
	}
}



void word()//文字提醒-“请按任意键...”
{
	settextcolor(RED);
	settextstyle(25, 0, "宋体");
	outtextxy(400, 550, "请");
	Sleep(500);
	outtextxy(425, 550, "按");
	Sleep(500);
	outtextxy(450, 550, "任");
	Sleep(500);
	outtextxy(475, 550, "意");
	Sleep(500);
	outtextxy(500, 550, "键");
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
	initgraph(1000, 600);//初始化图形界面
	loadimage(&img, "2023.png", 1000, 600);
	putimage(0, 0, &img, SRCINVERT);//背景图

	mciSendString("open 打上花火.mp3", 0, 0, 0);//播放—“打上花火”
	mciSendString("play 打上花火.mp3", 0, 0, 0);

	Sleep(1000);

	word();//文字提醒-“请按任意键...”

	_getch();//输入任意键继续

	DWORD* pMem = GetImageBuffer();
	for (int i = 0; i < num; i++)//初始化烟花弹和烟花
	{
		initfire(i);
		initshow(i);
	}
	load();//加载烟花图片
	while (1)
	{
		for (int i = 0; i < 3000; i++)
		{
			int px1 = rand() % 1000; // 0..1199
			int py1 = rand() % 600;  // 0.799
			pMem[py1 * 1000 + px1] = BLACK;
			pMem[py1 * 1000 + px1 + 1] = BLACK;	// 对显存赋值擦出像素点		
		}
		fire_up();//发射烟花弹
		fire_boom(pMem);//烟花绽放
		Sleep(50);
	}
	return 0;
}