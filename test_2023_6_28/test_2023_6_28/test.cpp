#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h> 
/*
*@C语言学习_P40_2023_6_28_字符数组_sizeof
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	//sizeof计算的是数组的大小，单位是字节
	printf("%d\n", sizeof(arr+0));//4 or 8
	//arr没有单独放在sizeof中，就代表的是首元素的地址，所以这里是地址的大小
	printf("%d\n", sizeof(*arr));//1
	//首元素地址解引用是首元素
	printf("%d\n", sizeof(arr[1]));//1
	//第二个元素
	printf("%d\n", sizeof(&arr));//4 or 8
	//仍未地址的大小
	printf("%d\n", sizeof(&arr+1));//4 or 8
	//仍未地址的大小
	printf("%d\n", sizeof(&arr[0]+1));//4 or 8
	//第二个元素的地址
	return 0;
}
*/
/*
* @C语言学习_P40_2023_6_28_字符数组_strlen
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	//计算数组长度，截止到\0前所有的元素
	printf("%d\n", strlen(arr+0));//6
	//arr表示首元素地址，arr+0还是表示首元素地址
	//printf("%d\n", strlen(*arr));//err
	// 
	//printf("%d\n", strlen(arr[1]));//err
	//
	printf("%d\n", strlen(&arr));//6
	//&arr是数组的地址，
	printf("%d\n", strlen(&arr+1));//随机值
	printf("%d\n", strlen(&arr[0]+1));//5
	//第二个元素后的元素
	return 0;
}
[*/





