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
	int ret=Findnum (arr, k, &x, &y);//����ֵΪ0��1
	if (1 == ret)
	{
		printf("�ҵ���\n");
		printf("�±��� %d %d", x, y);
	}
	else
	{
		printf("û�ҵ�\n");
	}

	return 0;
}