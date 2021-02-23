#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//存放最终结果
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int ret = 1;//存放n的阶乘
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}