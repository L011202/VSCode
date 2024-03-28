#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>		//head文件
/*
int main()				//主函数入口
{
	int a = 1;			//creat  a  new  number
	//scanf("%d", &a);
	while (a < 100||100 == a) {//判断a是否小于100或者a等于100
		if (0 == a % 2)	//a为偶数
		{
			//printf("%d是偶数\n", a);
			a++;		//a先使用，再进行自加
		}
		else			//a为奇数
		 
		{
			printf("%d是奇数\n", a);
			a++;
		}
	}
	return 0;
}
*/
int main()
{
	int day_option = 0;
	scanf("%d", &day_option);
	switch (day_option)
	{
		case 1: {
			printf("今天是星期一\n");
			break;
		}
		case 2: {
			printf("今天是星期二\n");
			break;
		}
		case 3: {
			printf("今天是星期三\n");
			break;
		}
		case 4: {
			printf("今天是星期四\n");
			break;
		}
		case 5: {
			printf("今天是星期五\n");
			break;
		}
		case 6: {
			printf("今天是星期六\n");
			break;
		}
		case 7: {
			printf("今天是星期日\n");
			break;
		}
	}
	return 0;
}