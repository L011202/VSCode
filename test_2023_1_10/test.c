#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
//{
//	double a = 5 % 3;
//	printf("a=%lf\n", a);
//	return 0;
//}
//{
//	int a = 16;
//	//>>右移操作符
//	//移动的是二进制位
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//位操作符
//{
//	int a = 3;
//	int b = 7;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("c=%d\td=%d\te=%d\t", a, b, c);
//	return 0;
//}


//统计一个数的补码里有几个1
//{
//	int a;
//	int count=0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1 )==1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
//{
//	int a = 5;
//	int b = 6;
//	int c = a > b ? a : b;//exp?exp1:exp2
//	printf("%d\n", c);
//	return 0;
//}


//指针加减整数
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d\t", *p);
		p = p + 1;
	}
	return 9;
}