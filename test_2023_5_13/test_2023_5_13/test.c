#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct student
//{
//	char name[20];
//	short age;
//	char text[50];
//	int student_id[15];
//	long a;
//	double b;
//	float c;
//}student;
//typedef struct stu 
//{
//	//成员变量
//	char name1[20];
//	short age1;
//	char text1[50];
//	int student_id1[15];
//	long a1;
//	double b1;
//	float c1;
//}a;
//int main()
//{
//	struct student s1;//局部变量
//	a s2;
//	return 0;
//}
char* my_strcpy(char* arr1, const char* arr2);//函数声明
int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "*****************";
	char arr2[] = "I love you";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2) );
	return 0;
}
//***最始版本未进行优化
//void my_strcpy(char* arr1, char* arr2)//arr2是来源地址，arr1是目的地址
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//'\0'数组结束字符
//}
//***
//***优化版本1，但并不是最优化的
//void my_strcpy(char* arr1, char* arr2)//arr2是来源地址，arr1是目的地址
//{
//	while (*arr1++ = *arr2++)//只要内部不为0就是真
//	{
//		;
//	}
//}
//***
//***优化3,使用assert
//#include <assert.h>
//void my_strcpy(char* arr1, char* arr2)//arr2是来源地址，arr1是目的地址
//{
//	assert(*arr1 != NULL);//断言
//	assert(arr2 != NULL);//断言
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//***
//***优化4,使用const进行修饰
//#include <assert.h>
//void my_strcpy(char* arr1, const char* arr2)//arr2是来源地址，arr1是目的地址
//{
//	assert(*arr1 != NULL);//断言
//	assert(arr2 != NULL);//断言
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//***
#include <assert.h>
char* my_strcpy(char* arr1, const char* arr2)//arr2是来源地址，arr1是目的地址
{
	char* ret=arr1;
	assert(arr1 != NULL);//断言
	assert(arr2 != NULL);//断言
	//把arr2指向的字符串拷贝到arr1指向的空间，包含'\0'字符
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
