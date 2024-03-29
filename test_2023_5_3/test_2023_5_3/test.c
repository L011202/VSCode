#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int* test(int x)
//{
//	return &x;
//}
//int main()
//{
//	int a = 10;
//	int* p = test(a);
//	//*p++;
//	printf("%d", *p);
//	return 0;
//}
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "I_love_beautiful_girl";
	//int x = "I_love_beautiful_girl";
	int len = my_strlen(arr);
	printf("I_love_beautiful_girl\n");
	printf("%d", len);
	return 0;
}