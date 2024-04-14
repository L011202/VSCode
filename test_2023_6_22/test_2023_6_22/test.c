#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C语言学习P31引题
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n的值为=%d\n", n);
//	printf("*pfloat的值为=%f\n",*pfloat);
//
//	*pfloat = 9.0;
//	printf("num的值为=%d\n", n);
//	printf("*pfloat的值为=%f\n", *pfloat);
//	return 0;
//}
*/
/*
* //@C语言学习P32
//int main()
//{
// 	float a = 5.5;
//	return 0;
//}
*/
/*
* @C语言学习P32
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("结果相同\n");
//	}
//	else
//	{
//		printf("结果不相同\n");
//	}
//	return 0;
//}
*/
/*
//@C语言学习,2023.6.22
int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,6};
	int arr3[] = {3,4,5,6,7};
	int* arr[] = { arr1,arr2,arr3 };//将三个数组存进指针数组中
	int i = 0;
	for (i = 0; i < 3; i++)//数组循环
	{
		int j = 0;
		for (j=0;j<5;j++)//每个数组循环
		{
			printf("%d", *(arr[i] + j));//指针解引应用,+j是找到下一个数组元素
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* @C语言学习P322023_6_23_指针数组
int main()
{
	char* arr[5];
	char* (*pa)[5]=&arr;
	return 0;
}
*/
/*
* @C语言学习P32_2023_6_23_数组指针
int main()
{
	int arr[10] = { 0 };
	printf("arr=%p\n", arr);
	printf("&arr=%p\n", &arr);
	printf("arr+1=%p\n", arr + 1);
	printf("&arr+1=%p\n", &arr + 1);
	return 0;
}
*/
/*
* @C语言学习P2023_6_23_数组指针
void printf1(int arr[2][3], int x, int y);
void printf2(int(*arr)[3], int x, int y);
int main() 
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	//打印方法1
	printf1(arr, 2, 3);
	printf("此处为空行\n\n");
	printf2(arr,2,3);
	return 0;
}
//打印方式1,参数是数组
void printf1(int arr[2][3], int x, int y)
{
	int i=0;
	int j=0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("打印方式一，换行后\n\n");
	}
}
//打印方式二，参数是指针
void printf2(int (*arr)[3], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d  ",*(*(arr+i)+j));
		}
		printf("打印方式二，换行后\n\n");
	}
}
*/
/*
*@C语言学习_P34_2023_6_24_函数指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int (*p)(int,int) = Add;
//	printf("%d\n", (*p)(a, b));//形式1
//	printf("\n\n");
//	printf("%d\n", (p)(a, b));//形式2
//	//形式1=形式2
//	/*
//	* @C语言学习P35_2023_6_24_
//	* 代码一
//	* (*(void(*)())0)()
//	* //void(*)()---函数指针类型
//	* //把0强制转换成(void(*)())0)函数指针类型,因此0就变成了一个函数的地址
//	* //*解应用,调用0地址处的函数
//	* 代码二
//	* void (*signal(int,void(*)（int)))(int));
//	* //signal是一个 函数声明
//	* //signal的函数有两个，第一个是int，第二个是函数指针，该指针指向的函数的参数是int，返回类型是void
//	* //signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是int
//	* //简化版
//	* //typedef void(* std)(int);
//	* //上行的操作为把类型重命名
//	* //std signal(int,std);
//	* void test()
//{
//	(*(void(*)())0)();
//	void(*signal(int, void(*)(int)))(int);
//}
//	* 
//	*char* (*pf)(char*,const char*) = my_strcpy;
//	*char(*pfArr[4])(char*,const char*) = {};
//	*/
//	return 0;
//}
/*
* @C语言学习P36_2023_6_25_函数指针数组_计算器优化版
void meun()
{
	printf("********************************\n");
	printf("*****1.加    法  2.减    法*****\n");
	printf("*****3.乘    法  4.除    法*****\n");
	printf("*****5.异或运算  2.相与运算*****\n");
	printf("*****7.取模运算  0.退    出*****\n");
	printf("********************************\n");
}

int Add(int x, int y)//1
{
	int z = 0;
	return z = x + y;
}

int Sub(int x, int y)//2
{
	int z = 0;
	return z = x - y;
}

int Mul(int x, int y)//3
{
	int z = 0;
	return z = x * y;
}

int Div(int x, int y)//4
{
	int z = 0;
	return z = x / y;
}

int Xor(int x, int y)//5
{
	int z = 0;
	return z = x ^ y;
}

int And(int x, int y)//6
{
	int z = 0;
	return z = x | y;
}

int Mod(int x, int y)//7
{
	int z = 0;
	return z = x % y;
}
int main()
{
	meun();
	int input = 0;
	int x = 0;
	int y = 0;
	int (*Arr[])(int, int) = {0,Add,Sub,Mul,Div,Xor,And,Mod};
	do 
	{
		printf("请你进行操作选择\n");
		scanf("%d",&input);		
		if (input >= 1 && input <= 7)
		{
			printf("请你输入您要计算的数字，中间请用空格隔开\n");
			scanf("%d %d",&x,&y);
			int result = Arr[input](x, y);
			printf("%d\n",result);
		}
		else if (input == 0)
		{
			printf("成功退出计算器\n");
		}
		else
		{
			printf("你输入的有错误，请您再次输入，并且输入后请进行检查是否有误");
		}
	} while (input);
	return 0;
}
*/



