#define _CRT_SECURE_NO_DEPRECATE    

/*          函数递归            */



/*          输入1234，顺序输出1 2 3 4            */
/*          使用函数递归                         */

#include <stdio.h>

//void is_print(unsigned int num) {				//函数定义
//	if (num > 9) {								//情况一
//		is_print(num/10);						//num / 10,函数递归
//	}
//	printf("%d ", num % 10);					//只有一位数的时候输出最后一位
//}
//int main()
//{
//	unsigned int num = 0;		//unsigned int  num
//	scanf("%u", &num);			//输入一个数
//	is_print(num);				//调用函数
//	return 0;
//}


/*          不创建变量，求字符串的长度            */
/*                使用函数递归                    */


int my_strlen(char* str) {
	if (*str != '\0') {						//如果当前指针指向的字符不是\0
		return 1 + my_strlen(str + 1);		//1+指针+1，指向下一个字符
	}
	else {									//如果指针指向的是\0
		return 0;							//返回一个0
	}
}
int main() 
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr) );
	return 0;
}