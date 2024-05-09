#define _CRT_SECURE_NO_DEPRECATE    

/*              写代码将三个整数按从大到小输出                     */
/*               例如：输入：2 3 1                                 */
/*                     输出：3 2 1                                 */
//
//#include <stdio.h>
//void Sort_Max(int a, int b, int c);//函数声明
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


/*     思路二     */
/*      跟视频一样      */
//#include <stdio.h>
//void Sort_Max(int x, int y, int z) {				//函数
//	/*        通过比较替换，来提升代码的运行速度              */
//	/*        节省了内存，并且也使运行速度更快                */
//	int temp = 0;				//创建临时变量
//	if (x < y) {				// 如果x小于y，那么y的值给x，x的值给y
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (x < z) {				// 如果替换后的x的值小于z的值，那么z的值赋给x， 替换后的x的值赋给y
//		temp = x;
//		x = z;
//		z = temp;
//	}
//	if (y < z) {				// 如果替换后的y的值小于替换后z的值，那么替换后z的值给y，替换后的y的值给z
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


/*       打印1-100之间所有三的倍数的数字           */

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


/*    求两个数的最大公约数      */
/*    myself  思路              */
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


思路有问题，代码无法进行编译
*/


/*      
判断两个数的最大公约数，可以使用辗转相除法（欧几里得算法）。
  具体步骤如下：
	1. 确定两数a和b，其中a应大于或等于b。
	2. 计算a除以b的余数，记为r（即temp）。
	3. 如果r为0，则b就是两数的最大公约数。
	4. 如果r不为0，则将b的值赋给a，将r的值赋给b，然后重复步骤2和3。
在实际应用中，辗转相除法因其高效而广为使用。
*/
#include <stdio.h>
void Compare(int* x, int* y)				//比较函数
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
	//Compare(&a, &b);					比较函数
	//printf("%d %d\n", a, b);			比较函数测试
	return 0;
}