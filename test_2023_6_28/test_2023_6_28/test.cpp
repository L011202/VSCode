#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h> 
/*
*@C����ѧϰ_P40_2023_6_28_�ַ�����_sizeof
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	//sizeof�����������Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(arr+0));//4 or 8
	//arrû�е�������sizeof�У��ʹ��������Ԫ�صĵ�ַ�����������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*arr));//1
	//��Ԫ�ص�ַ����������Ԫ��
	printf("%d\n", sizeof(arr[1]));//1
	//�ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));//4 or 8
	//��δ��ַ�Ĵ�С
	printf("%d\n", sizeof(&arr+1));//4 or 8
	//��δ��ַ�Ĵ�С
	printf("%d\n", sizeof(&arr[0]+1));//4 or 8
	//�ڶ���Ԫ�صĵ�ַ
	return 0;
}
*/
/*
* @C����ѧϰ_P40_2023_6_28_�ַ�����_strlen
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	//�������鳤�ȣ���ֹ��\0ǰ���е�Ԫ��
	printf("%d\n", strlen(arr+0));//6
	//arr��ʾ��Ԫ�ص�ַ��arr+0���Ǳ�ʾ��Ԫ�ص�ַ
	//printf("%d\n", strlen(*arr));//err
	// 
	//printf("%d\n", strlen(arr[1]));//err
	//
	printf("%d\n", strlen(&arr));//6
	//&arr������ĵ�ַ��
	printf("%d\n", strlen(&arr+1));//���ֵ
	printf("%d\n", strlen(&arr[0]+1));//5
	//�ڶ���Ԫ�غ��Ԫ��
	return 0;
}
[*/





