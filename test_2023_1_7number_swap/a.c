#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//a+b��ʽ
// ����a+b
//int main()
//{
//	int a=3;
//	int b=5;
//	printf("����ǰ��a=%d\tb=%d\n", a, b);
//	a = a + b;//��ʱ��a���������ĺ�
//	b = a - b;//a�ĺͼ�ȥb��ֵ��a�����������b
//	a = a - b;//a�ĺͼ�ȥ�������b(��ʵ����a)����b��ֵ�����������a
//	printf("������a=%d\tb=%d\n", a, b);
//	return 0;
//}


//^��ʽ,^�Ƕ������������Ϊ1����ͬΪ0
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d\tb=%d\n", a, b);
//	a = a ^ b;//a�Ķ�����Ϊ011��b�Ķ�����Ϊ101��������a�Ķ�����Ϊ110
//	b = a ^ b;//b�Ķ�����Ϊ101��a�Ķ�����Ϊ110��������b�Ķ�����Ϊ011
//	a = a ^ b;//a�Ķ�����Ϊ110��b�Ķ�����Ϊ011��������a�Ķ�����Ϊ101
//	printf("������a=%d\tb=%d\n", a, b);
//	return 0;
//}


//�ҳ�û����Ե�����
int main()
{
	int arr[] = {1,2,3,4,5,6,7,1,2,3,4,5,6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	int receive=0;
	for (i = 0; i < sz; i++)
	{
		receive = receive ^ arr[i];
	}
	printf("û�п���Ե�����Ϊ:%d", receive);
	return 0;
}