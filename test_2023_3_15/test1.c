#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int Add(int x,int y)
{
	int z;
	z = x + y;
	return z;
}

int main()
{
	int a ;
	int b ;
	scanf("%d%d", &a, &b);
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
}