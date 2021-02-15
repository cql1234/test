#include<stdio.h>
void swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;


}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a=%d b=%d\n",a,b);
	/*temp = a;
	a = b;
	b = temp;
	printf("a=%d b=%d\n", a, b);*/

	return 0;
}