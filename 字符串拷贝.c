#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)//返回值为dest的地址，用const修饰*src，使源头不可改变
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}


int main()
{
	char arr1[] = "##############";
	char arr2[] = "bit";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}
