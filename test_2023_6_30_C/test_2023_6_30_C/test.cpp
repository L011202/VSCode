#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C语言学习P_40_2023_6_30_char *p_sizeof
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 or 8
	//计算指针变量p的大小
	printf("%d\n", sizeof(p+1));//4 or 8
	//p+1计算的是b的地址
	printf("%d\n", sizeof(*p));//1
	//字符串的第一个元素
	printf("%d\n", sizeof(p[0]));//1
	//字符串的第一个元素
	//int arr[10];arr[0]=*(arr+0)  p[0]=*(p+0)
	printf("%d\n", sizeof(&p));//4 or 8
	//计算地址的大小
	printf("%d\n", sizeof(&p+1));//4 or 8
	//跳过整个数组,仍未地址
	printf("%d\n", sizeof(&p[0]+1));//4 or 8
	//第二个元素的地址
	return 0;
}
*/
/*
* @C语言学习_P40_2023_6_30_char *p_strlen
#include <string.h>
int main()
{
	char *p= "abcdef";
	printf("%d\n", strlen(p));//6
	//计算字符的长度
	printf("%d\n", strlen(p+1));//5
	//从b开始计算数组的长度
	//printf("%d\n", strlen(*p));//err
	//
	//printf("%d\n", strlen(p[0]));//err
	//
	printf("%d\n", strlen(&p));//随机值
	//\0的位置不确定
	printf("%d\n", strlen(&p+1));//随机值
	//
	printf("%d\n", strlen(&p[0]+1));//5
	//从b开始计算数组的长度
	return 0;
}
*/
/*
* @C语言学习P_40_2023_7_1
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	//计算数组的大小，单位是字节3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	//第一行第一列的元素
	printf("%d\n", sizeof(a[0]));//16
	//第一行的元素
	printf("%d\n", sizeof(a[0]+1));//4 or 8
	//第一行的第二个元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));//4
	//第一行第二个元素，大小为四个字节
	printf("%d\n", sizeof(a+1));//8
	//a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以数组是首元素地址
	//把二维数组看成一位数组时，二维数组的首元素是它的第一行，a就是第一行的地址,a+1就是第二行的地址
	printf("%d\n", sizeof(*(a+1)));//16
	//第二行解引用,单位是字节
	printf("%d\n", sizeof(&a[0]+1));//8
	//第二行的地址
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	//第二行的大小
	printf("%d\n", sizeof(*a));//16
	//第一行
	printf("%d\n", sizeof(a[3]));//16
	//第三行
	return 0;
}
*/
/*
* @C_P41_2023_7_1_面试题2
struct  Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p的值为0x100000，如下表达式的值为多少
int main()
{
	p = (struct  Test*)0x100000;
	printf("%p\n", p + 0x1);//
	//
	printf("%p\n",(unsigned long)p+0x1);//
	//
	printf("%p\n", (unsigned int*)p + 0x1);//
	//
	return 0;
}
*/
/*
* @C_P41_2023_7_1_面试题3
int main()
{
	int a[4] = {1,2,3,4};
	int *ptr1 = (int*)(&a + 1);//
	//
	int* ptr2 = (int *)((int)a+1);//
	//
	printf("%x %x",ptr1[-1], *ptr2);//
	//
	return 0;
}
*/
/*
* @C_P41_2023_7_1_面试题4
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式，取最后一个结果---(1,3,5)
	int* p;
	p = a[0];//a[0]就是1  
	printf("%d\n", p[0]);
	return 0;
}
*/
/*
* @C_P41_2023_7_1_面试题5
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}
*/
/*
* @数据结构
typedef struct {
	int x;
	int y;
	int z;
}Tyz;
void printf_p(Tyz x)
{
	printf("%d %d %d\n", x.x, x.y, x.z);
}
int main()
{
	Tyz x = { 1,2,3 };
	printf_p(x);
	return 0;
}
*/
/*
* @C_P43_面试题6
int main()
{
	int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
	int* ptr1 = (int *)(&a + 1);//跳过整个数组，指向10
	int* ptr2 = (int *)(*(a+1));//等同于a[1]
	printf("%d %d\n", *(ptr1-1), *(ptr2 - 1));//10      5
	return 0;
}
*/
/*
* @C_P43_面试题7
int main()
{
	char* a[] = {"work","at","alibaba"};
	char** pa = a;
	pa++;
	printf("%s\n",*pa);//at
	return 0;
}
*/

/*
* @C_P43_2023_7_3_面试题8
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST"};
	char** cp[] = {c+3,c+2,c+1,c};
	char*** cpp = cp;
	printf("%s\n",**++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n",*cpp[-2]+3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}
*/


