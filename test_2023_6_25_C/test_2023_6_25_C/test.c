#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C语言学习P_39_2023_6_27_一维数组
int main()
{
	int a[4] = {1,2,3,4};
	printf("%d\n", sizeof(a));//4*4=16
	//sizeof(数组名)-计算的是数组总的大小-单位是字节
	printf("%d\n",sizeof(a+0));//8
	//这里的数组名表示首元素的地址，a+0还是首元素的地址
	printf("%d\n",sizeof(*a));//4
	//这里的数组表示首元素地址，*a就表示的是首元素 
	printf("%d\n",sizeof(a+1));//8
	//这里的数组表示的整个数组，a+1表示的是第二个元素的地址
	printf("%d\n", sizeof(a[1]));//4
	//第二个元素的地址
	printf("%d\n", sizeof(&a));//8
	//&a取出的是数组的地址，地址的大小就是4/8
	printf("%d\n", sizeof(*&a));//16
	//&a是取地址，数组的地址解引应用访问的是数组，sizeof计算的是数组的大小
	printf("%d\n", sizeof(&a+1));//8
	//&a取出的是地址，&a+1是地址跳过整个数组，究其根本还是地址，还是地址的大小
	printf("%d\n", sizeof(&a[0]));//8
	//第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));//8
	//第二个元素的地址
	return 0;
}
*/
/*
* C语言学习P_39_2023_6_27_字符数组
//字符数组
int main()
{
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", sizeof(arr));//6
	//sizeof计算的是数组的大小，单位是字节
	printf("%d\n", sizeof(arr+0));//4 or 8
	//arr是首元素的地址，arr+0仍是首地址
	printf("%d\n", sizeof(*arr));//1
	//arr是首元素地址，解引用就是首元素，首元素大小为1字节
	printf("%d\n", sizeof(arr[1]));//1
	//第二个数组元素
	printf("%d\n", sizeof(&arr));//4 or 8
	//首元素地址仍是地址
	printf("%d\n", sizeof(arr+1));//4 or 8
	//&arr+1是跳过整个数组后的地址，仍为地址的大小
	printf("%d\n", sizeof(&arr[0]+1));//4 or 8
	//第二个元素的地址
	return 0;
}
*/
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值x
	//\0为数组结束位，而\0的位置不确定，所以无法确定，为随机值
	printf("%d\n", strlen(arr+0));//随机值x
	//与上类似
	//printf("%d\n", strlen(*arr));//error
	//为错误代码
	//printf("%d\n", strlen(arr[1]));//error
	//为错误代码
	printf("%d\n", strlen(&arr));//随机值x
	//\0为数组结束位，而\0的位置不确定，所以无法确定，为随机值
	printf("%d\n", strlen(&arr+1));//随机值x-6
	//&arr+1跳过整个数组地址，\0为数组结束位，而\0的位置不确定，所以无法确定，为随机值
	printf("%d\n", strlen(&arr[0]+1));//随机值x-1
	//
	return 0;
}

