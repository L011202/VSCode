#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
/*
* @C����ѧϰP_40_2023_6_30_char *p_sizeof
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 or 8
	//����ָ�����p�Ĵ�С
	printf("%d\n", sizeof(p+1));//4 or 8
	//p+1�������b�ĵ�ַ
	printf("%d\n", sizeof(*p));//1
	//�ַ����ĵ�һ��Ԫ��
	printf("%d\n", sizeof(p[0]));//1
	//�ַ����ĵ�һ��Ԫ��
	//int arr[10];arr[0]=*(arr+0)  p[0]=*(p+0)
	printf("%d\n", sizeof(&p));//4 or 8
	//�����ַ�Ĵ�С
	printf("%d\n", sizeof(&p+1));//4 or 8
	//������������,��δ��ַ
	printf("%d\n", sizeof(&p[0]+1));//4 or 8
	//�ڶ���Ԫ�صĵ�ַ
	return 0;
}
*/
/*
* @C����ѧϰ_P40_2023_6_30_char *p_strlen
#include <string.h>
int main()
{
	char *p= "abcdef";
	printf("%d\n", strlen(p));//6
	//�����ַ��ĳ���
	printf("%d\n", strlen(p+1));//5
	//��b��ʼ��������ĳ���
	//printf("%d\n", strlen(*p));//err
	//
	//printf("%d\n", strlen(p[0]));//err
	//
	printf("%d\n", strlen(&p));//���ֵ
	//\0��λ�ò�ȷ��
	printf("%d\n", strlen(&p+1));//���ֵ
	//
	printf("%d\n", strlen(&p[0]+1));//5
	//��b��ʼ��������ĳ���
	return 0;
}
*/
/*
* @C����ѧϰP_40_2023_7_1
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	//��������Ĵ�С����λ���ֽ�3*4*4=48
	printf("%d\n", sizeof(a[0][0]));//4
	//��һ�е�һ�е�Ԫ��
	printf("%d\n", sizeof(a[0]));//16
	//��һ�е�Ԫ��
	printf("%d\n", sizeof(a[0]+1));//4 or 8
	//��һ�еĵڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0]+1)));//4
	//��һ�еڶ���Ԫ�أ���СΪ�ĸ��ֽ�
	printf("%d\n", sizeof(a+1));//8
	//a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)��������������Ԫ�ص�ַ
	//�Ѷ�ά���鿴��һλ����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ,a+1���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a+1)));//16
	//�ڶ��н�����,��λ���ֽ�
	printf("%d\n", sizeof(&a[0]+1));//8
	//�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0]+1)));//16
	//�ڶ��еĴ�С
	printf("%d\n", sizeof(*a));//16
	//��һ��
	printf("%d\n", sizeof(a[3]));//16
	//������
	return 0;
}
*/
/*
* @C_P41_2023_7_1_������2
struct  Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p��ֵΪ0x100000�����±��ʽ��ֵΪ����
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
* @C_P41_2023_7_1_������3
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
* @C_P41_2023_7_1_������4
int main()
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ��ȡ���һ�����---(1,3,5)
	int* p;
	p = a[0];//a[0]����1  
	printf("%d\n", p[0]);
	return 0;
}
*/
/*
* @C_P41_2023_7_1_������5
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
* @���ݽṹ
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
* @C_P43_������6
int main()
{
	int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
	int* ptr1 = (int *)(&a + 1);//�����������飬ָ��10
	int* ptr2 = (int *)(*(a+1));//��ͬ��a[1]
	printf("%d %d\n", *(ptr1-1), *(ptr2 - 1));//10      5
	return 0;
}
*/
/*
* @C_P43_������7
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
* @C_P43_2023_7_3_������8
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


