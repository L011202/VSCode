#define _CRT_SECURE_NO_DEPRECATE    

/*              д���뽫�����������Ӵ�С���                     */
/*               ���磺���룺2 3 1                                 */
/*                     �����3 2 1                                 */
//
//#include <stdio.h>
//void Sort_Max(int a, int b, int c);//��������
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//if (a >= b) {						
//	//	if (c >= a) {					// c > a >b
//	//		printf("%d %d %d\n", c, a, b);
//	//	}
//	//	else if (c < a) {			
//	//		if (c >= b) {				
//	//			printf("%d %d %d\n", a, c, b);		//a > c >b
//	//		}
//	//		else if (c < b) {
//	//			printf("%d %d %d\n", a, b, c);		//a > b > c
//	//		}
//	//	}
//	//}
//	//else if (a < b) {
//	//	if (c >= b) {				//c > b > a
//	//		printf("%d %d %d\n", c, b, a);
//	//	}
//	//	else if (c < b) {
//	//		if (c >= a) {			//b > c > a
//	//			printf("%d %d %d\n", b, c, a);
//	//		}
//	//		else if (c < a) {
//	//			printf("%d %d %d\n", b, a, c);
//	//		}
//	//	}
//	//}
//	Sort_Max(a, b, c);
//	return 0;
//}
//
//void Sort_Max(int a, int b, int c) {
//	if (a >= b) {
//		if (c >= a) {					// c > a >b
//			printf("%d %d %d\n", c, a, b);
//		}
//		else if (c < a) {
//			if (c >= b) {
//				printf("%d %d %d\n", a, c, b);		//a > c >b
//			}
//			else if (c < b) {
//				printf("%d %d %d\n", a, b, c);		//a > b > c
//			}
//		}
//	}
//	else if (a < b) {
//		if (c >= b) {				//c > b > a
//			printf("%d %d %d\n", c, b, a);
//		}
//		else if (c < b) {
//			if (c >= a) {			//b > c > a
//				printf("%d %d %d\n", b, c, a);
//			}
//			else if (c < a) {
//				printf("%d %d %d\n", b, a, c);
//			}
//		}
//	}
//}


/*     ˼·��     */
/*      ����Ƶһ��      */
//#include <stdio.h>
//void Sort_Max(int x, int y, int z) {				//����
//	/*        ͨ���Ƚ��滻������������������ٶ�              */
//	/*        ��ʡ���ڴ棬����Ҳʹ�����ٶȸ���                */
//	int temp = 0;				//������ʱ����
//	if (x < y) {				// ���xС��y����ôy��ֵ��x��x��ֵ��y
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (x < z) {				// ����滻���x��ֵС��z��ֵ����ôz��ֵ����x�� �滻���x��ֵ����y
//		temp = x;
//		x = z;
//		z = temp;
//	}
//	if (y < z) {				// ����滻���y��ֵС���滻��z��ֵ����ô�滻��z��ֵ��y���滻���y��ֵ��z
//		temp = y;
//		y = z;
//		z = temp;
//	}
//	printf("%d %d %d\n", x, y, z);
//}
//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//	printf();
//	Sort_Max(a, b, c);
//	return 0;
//}


/*       ��ӡ1-100֮���������ı���������           */

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 100;num++) {
//		if (num % 3 == 0)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}


/*    �������������Լ��      */
/*    myself  ˼·              */
/*#include <stdio.h>
int Max(int* px, int* py) {
	int temp = 0;
	if ((*px) < (*py)) {
		temp = *px;
		*px = *py;
		*py = temp;
	}
	return *py;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int i = 0;
	int j = 0;
	int min = 0;
	scanf("%d %d", &num1, &num2);
	min = Max(&num1, &num2);
	for (i = 2; i <= min; i++) {
		if()
		for (j = 2; j <= min; j++) {
			
		}
	}
	return 0;
}


˼·�����⣬�����޷����б���
*/


/*      
�ж������������Լ��������ʹ��շת�������ŷ������㷨����
  ���岽�����£�
	1. ȷ������a��b������aӦ���ڻ����b��
	2. ����a����b����������Ϊr����temp����
	3. ���rΪ0����b�������������Լ����
	4. ���r��Ϊ0����b��ֵ����a����r��ֵ����b��Ȼ���ظ�����2��3��
��ʵ��Ӧ���У�շת����������Ч����Ϊʹ�á�
*/
#include <stdio.h>
void Compare(int* x, int* y)				//�ȽϺ���
{
	int temp = 0;
		if (*x < *y)
		{
			temp = *x;
			*x = *y;
			*y = temp;
		}
}

void Number(int x, int y) {
	int temp = 0;
again:
	Compare(&x, &y);
	if (x % y == 0)
	{
		printf("%d\n", y);
		//	break;
	}
	else if (x % y != 0) {
		temp = x;
		x = y;
		y = temp % y;
		goto again;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Number(a, b);
	//Compare(&a, &b);					�ȽϺ���
	//printf("%d %d\n", a, b);			�ȽϺ�������
	return 0;
}