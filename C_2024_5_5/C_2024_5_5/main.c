#define _CRT_SECURE_NO_DEPRECATE    

/*          �����ݹ�            */



/*          ����1234��˳�����1 2 3 4            */
/*          ʹ�ú����ݹ�                         */

#include <stdio.h>

//void is_print(unsigned int num) {				//��������
//	if (num > 9) {								//���һ
//		is_print(num/10);						//num / 10,�����ݹ�
//	}
//	printf("%d ", num % 10);					//ֻ��һλ����ʱ��������һλ
//}
//int main()
//{
//	unsigned int num = 0;		//unsigned int  num
//	scanf("%u", &num);			//����һ����
//	is_print(num);				//���ú���
//	return 0;
//}


/*          ���������������ַ����ĳ���            */
/*                ʹ�ú����ݹ�                    */


int my_strlen(char* str) {
	if (*str != '\0') {						//�����ǰָ��ָ����ַ�����\0
		return 1 + my_strlen(str + 1);		//1+ָ��+1��ָ����һ���ַ�
	}
	else {									//���ָ��ָ�����\0
		return 0;							//����һ��0
	}
}
int main() 
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr) );
	return 0;
}