#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count_bit_one(int n)
{
	int count = 0;
		while (n)
		{
			n = n & (n - 1);
			count++;
		}
		return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("%d", count);
	return 0;
}
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111 n
//11111111111111111111111111111110 n-1
//11111111111111111111111111111110 n
//11111111111111111111111111111101 n-1
//11111111111111111111111111111100 n π»∏Ë±  ‘Ã‚