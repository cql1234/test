#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Bubble_sort(int* arr, int sz)//ʵ��ð������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//��ӡ
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}
//�ҳ�����
void Single(int arr[], int sz)
{
	int i = 0;
	printf("����Ϊ��");
	for (i = 0; i < sz;)
	{
		if (arr[i] ==arr[i + 1])
			i += 2;
		else
		{
			printf("%d ", arr[i]);
				i += 1;
			
		}
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,4,2,5,6,4,2,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);
	Single(arr,sz);
	//Print(arr,sz);

	return 0;
}
