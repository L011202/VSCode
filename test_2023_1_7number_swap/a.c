#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//a+b形式
// 利用a+b
//int main()
//{
//	int a=3;
//	int b=5;
//	printf("交换前：a=%d\tb=%d\n", a, b);
//	a = a + b;//这时的a是两个数的和
//	b = a - b;//a的和减去b的值是a，交换后就是b
//	a = a - b;//a的和减去交换后的b(其实就是a)就是b的值，交换后就是a
//	printf("交换后：a=%d\tb=%d\n", a, b);
//	return 0;
//}


//^形式,^是二进制异或，相异为1，相同为0
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d\tb=%d\n", a, b);
//	a = a ^ b;//a的二进制为011，b的二进制为101，计算后的a的二进制为110
//	b = a ^ b;//b的二进制为101，a的二进制为110，计算后的b的二进制为011
//	a = a ^ b;//a的二进制为110，b的二进制为011，计算后的a的二进制为101
//	printf("交换后：a=%d\tb=%d\n", a, b);
//	return 0;
//}


//找出没有配对的数字
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
	printf("没有可配对的数字为:%d", receive);
	return 0;
}