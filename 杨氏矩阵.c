#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Findnum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py-1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int x = 3;
	int y = 3;
	int k = 7;
	int ret=Findnum (arr, k, &x, &y);//返回值为0或1
	if (1 == ret)
	{
		printf("找到了\n");
		printf("下标是 %d %d", x, y);
	}
	else
	{
		printf("没找到\n");
	}

	return 0;
}