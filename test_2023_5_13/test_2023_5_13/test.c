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
//	//��Ա����
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
//	struct student s1;//�ֲ�����
//	a s2;
//	return 0;
//}
char* my_strcpy(char* arr1, const char* arr2);//��������
int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "*****************";
	char arr2[] = "I love you";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2) );
	return 0;
}
//***��ʼ�汾δ�����Ż�
//void my_strcpy(char* arr1, char* arr2)//arr2����Դ��ַ��arr1��Ŀ�ĵ�ַ
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//'\0'��������ַ�
//}
//***
//***�Ż��汾1�������������Ż���
//void my_strcpy(char* arr1, char* arr2)//arr2����Դ��ַ��arr1��Ŀ�ĵ�ַ
//{
//	while (*arr1++ = *arr2++)//ֻҪ�ڲ���Ϊ0������
//	{
//		;
//	}
//}
//***
//***�Ż�3,ʹ��assert
//#include <assert.h>
//void my_strcpy(char* arr1, char* arr2)//arr2����Դ��ַ��arr1��Ŀ�ĵ�ַ
//{
//	assert(*arr1 != NULL);//����
//	assert(arr2 != NULL);//����
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//***
//***�Ż�4,ʹ��const��������
//#include <assert.h>
//void my_strcpy(char* arr1, const char* arr2)//arr2����Դ��ַ��arr1��Ŀ�ĵ�ַ
//{
//	assert(*arr1 != NULL);//����
//	assert(arr2 != NULL);//����
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//***
#include <assert.h>
char* my_strcpy(char* arr1, const char* arr2)//arr2����Դ��ַ��arr1��Ŀ�ĵ�ַ
{
	char* ret=arr1;
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);//����
	//��arr2ָ����ַ���������arr1ָ��Ŀռ䣬����'\0'�ַ�
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
