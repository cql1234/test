#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//����������ż��
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//��������������
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int temp = 0;
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
int main()
{
	int sz = 0;
	int arr[] = { 1,3,5,7,8 };
	sz = sizeof(arr) / sizeof(arr[0]);
	//����
	move(arr,sz);
	//��ӡ
	print(arr, sz);
	return;
}