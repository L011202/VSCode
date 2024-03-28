#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>


int main()
{
	char arr1[] = "I will definitely be admitted to the master`s degree";
	char arr2[] = "****************************************************";
	int left1 = 0;
	int right1 = (int)strlen(arr1) - 1;
	while (left1 <= right1)
	{
		arr2[left1] = arr1[left1];
		arr2[right1] = arr1[right1];
		printf("%s\n", arr2);//%c用于打印一个单字符，%s用于打印一个字符串
		Sleep(1000);
		//system("cls");
		left1++;
		right1--;
	}
	printf("%s\n", arr2);
	return 0;
}