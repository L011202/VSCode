#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C����ѧϰP31����
//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n��ֵΪ=%d\n", n);
//	printf("*pfloat��ֵΪ=%f\n",*pfloat);
//
//	*pfloat = 9.0;
//	printf("num��ֵΪ=%d\n", n);
//	printf("*pfloat��ֵΪ=%f\n", *pfloat);
//	return 0;
//}
*/
/*
* //@C����ѧϰP32
//int main()
//{
// 	float a = 5.5;
//	return 0;
//}
*/
/*
* @C����ѧϰP32
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("�����ͬ\n");
//	}
//	else
//	{
//		printf("�������ͬ\n");
//	}
//	return 0;
//}
*/
/*
//@C����ѧϰ,2023.6.22
int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,6};
	int arr3[] = {3,4,5,6,7};
	int* arr[] = { arr1,arr2,arr3 };//������������ָ��������
	int i = 0;
	for (i = 0; i < 3; i++)//����ѭ��
	{
		int j = 0;
		for (j=0;j<5;j++)//ÿ������ѭ��
		{
			printf("%d", *(arr[i] + j));//ָ�����Ӧ��,+j���ҵ���һ������Ԫ��
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* @C����ѧϰP322023_6_23_ָ������
int main()
{
	char* arr[5];
	char* (*pa)[5]=&arr;
	return 0;
}
*/
/*
* @C����ѧϰP32_2023_6_23_����ָ��
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
* @C����ѧϰP2023_6_23_����ָ��
void printf1(int arr[2][3], int x, int y);
void printf2(int(*arr)[3], int x, int y);
int main() 
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	//��ӡ����1
	printf1(arr, 2, 3);
	printf("�˴�Ϊ����\n\n");
	printf2(arr,2,3);
	return 0;
}
//��ӡ��ʽ1,����������
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
		printf("��ӡ��ʽһ�����к�\n\n");
	}
}
//��ӡ��ʽ����������ָ��
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
		printf("��ӡ��ʽ�������к�\n\n");
	}
}
*/
/*
*@C����ѧϰ_P34_2023_6_24_����ָ��
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
//	printf("%d\n", (*p)(a, b));//��ʽ1
//	printf("\n\n");
//	printf("%d\n", (p)(a, b));//��ʽ2
//	//��ʽ1=��ʽ2
//	/*
//	* @C����ѧϰP35_2023_6_24_
//	* ����һ
//	* (*(void(*)())0)()
//	* //void(*)()---����ָ������
//	* //��0ǿ��ת����(void(*)())0)����ָ������,���0�ͱ����һ�������ĵ�ַ
//	* //*��Ӧ��,����0��ַ���ĺ���
//	* �����
//	* void (*signal(int,void(*)��int)))(int));
//	* //signal��һ�� ��������
//	* //signal�ĺ�������������һ����int���ڶ����Ǻ���ָ�룬��ָ��ָ��ĺ����Ĳ�����int������������void
//	* //signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������int
//	* //�򻯰�
//	* //typedef void(* std)(int);
//	* //���еĲ���Ϊ������������
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
* @C����ѧϰP36_2023_6_25_����ָ������_�������Ż���
void meun()
{
	printf("********************************\n");
	printf("*****1.��    ��  2.��    ��*****\n");
	printf("*****3.��    ��  4.��    ��*****\n");
	printf("*****5.�������  2.��������*****\n");
	printf("*****7.ȡģ����  0.��    ��*****\n");
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
		printf("������в���ѡ��\n");
		scanf("%d",&input);		
		if (input >= 1 && input <= 7)
		{
			printf("����������Ҫ��������֣��м����ÿո����\n");
			scanf("%d %d",&x,&y);
			int result = Arr[input](x, y);
			printf("%d\n",result);
		}
		else if (input == 0)
		{
			printf("�ɹ��˳�������\n");
		}
		else
		{
			printf("��������д��������ٴ����룬�������������м���Ƿ�����");
		}
	} while (input);
	return 0;
}
*/



