#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		int sum = 0;
		int n = 1;
		int temp = 0;
		//1.����i��λ�� n
		temp = i;
		while (temp /= 10)
		{
			n++;
		}
		//2.����i��ÿһλn�η�֮��
		temp = i;
		while (temp)
		{
			sum += (int)pow(temp % 10, n);
			temp /= 10;
		}
		//3.�Ƚ�i==sum
		if (i == sum)
			printf("%d ", i);
	}
	return 0;
}