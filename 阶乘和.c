#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//������ս��
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int ret = 1;//���n�Ľ׳�
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}