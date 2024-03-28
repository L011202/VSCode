#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int My_strlen(char* str)
{
	char* start = str;
	char* end =str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "ZTBU";
	int len = My_strlen(arr);
	printf("%d\n", len);
	return 0;
}