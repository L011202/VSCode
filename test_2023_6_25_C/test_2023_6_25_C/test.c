#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C����ѧϰP_39_2023_6_27_һά����
int main()
{
	int a[4] = {1,2,3,4};
	printf("%d\n", sizeof(a));//4*4=16
	//sizeof(������)-������������ܵĴ�С-��λ���ֽ�
	printf("%d\n",sizeof(a+0));//8
	//�������������ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
	printf("%d\n",sizeof(*a));//4
	//����������ʾ��Ԫ�ص�ַ��*a�ͱ�ʾ������Ԫ�� 
	printf("%d\n",sizeof(a+1));//8
	//����������ʾ���������飬a+1��ʾ���ǵڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));//4
	//�ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a));//8
	//&aȡ����������ĵ�ַ����ַ�Ĵ�С����4/8
	printf("%d\n", sizeof(*&a));//16
	//&a��ȡ��ַ������ĵ�ַ����Ӧ�÷��ʵ������飬sizeof�����������Ĵ�С
	printf("%d\n", sizeof(&a+1));//8
	//&aȡ�����ǵ�ַ��&a+1�ǵ�ַ�����������飬����������ǵ�ַ�����ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(&a[0]));//8
	//��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));//8
	//�ڶ���Ԫ�صĵ�ַ
	return 0;
}
*/
/*
* C����ѧϰP_39_2023_6_27_�ַ�����
//�ַ�����
int main()
{
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", sizeof(arr));//6
	//sizeof�����������Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(arr+0));//4 or 8
	//arr����Ԫ�صĵ�ַ��arr+0�����׵�ַ
	printf("%d\n", sizeof(*arr));//1
	//arr����Ԫ�ص�ַ�������þ�����Ԫ�أ���Ԫ�ش�СΪ1�ֽ�
	printf("%d\n", sizeof(arr[1]));//1
	//�ڶ�������Ԫ��
	printf("%d\n", sizeof(&arr));//4 or 8
	//��Ԫ�ص�ַ���ǵ�ַ
	printf("%d\n", sizeof(arr+1));//4 or 8
	//&arr+1���������������ĵ�ַ����Ϊ��ַ�Ĵ�С
	printf("%d\n", sizeof(&arr[0]+1));//4 or 8
	//�ڶ���Ԫ�صĵ�ַ
	return 0;
}
*/
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//���ֵx
	//\0Ϊ�������λ����\0��λ�ò�ȷ���������޷�ȷ����Ϊ���ֵ
	printf("%d\n", strlen(arr+0));//���ֵx
	//��������
	//printf("%d\n", strlen(*arr));//error
	//Ϊ�������
	//printf("%d\n", strlen(arr[1]));//error
	//Ϊ�������
	printf("%d\n", strlen(&arr));//���ֵx
	//\0Ϊ�������λ����\0��λ�ò�ȷ���������޷�ȷ����Ϊ���ֵ
	printf("%d\n", strlen(&arr+1));//���ֵx-6
	//&arr+1�������������ַ��\0Ϊ�������λ����\0��λ�ò�ȷ���������޷�ȷ����Ϊ���ֵ
	printf("%d\n", strlen(&arr[0]+1));//���ֵx-1
	//
	return 0;
}

