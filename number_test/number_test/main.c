#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>		//head�ļ�
/*
int main()				//���������
{
	int a = 1;			//creat  a  new  number
	//scanf("%d", &a);
	while (a < 100||100 == a) {//�ж�a�Ƿ�С��100����a����100
		if (0 == a % 2)	//aΪż��
		{
			//printf("%d��ż��\n", a);
			a++;		//a��ʹ�ã��ٽ����Լ�
		}
		else			//aΪ����
		 
		{
			printf("%d������\n", a);
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
			printf("����������һ\n");
			break;
		}
		case 2: {
			printf("���������ڶ�\n");
			break;
		}
		case 3: {
			printf("������������\n");
			break;
		}
		case 4: {
			printf("������������\n");
			break;
		}
		case 5: {
			printf("������������\n");
			break;
		}
		case 6: {
			printf("������������\n");
			break;
		}
		case 7: {
			printf("������������\n");
			break;
		}
	}
	return 0;
}