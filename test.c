#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("*******  1.play   *******\n");
	printf("*******  0.exit   *******\n");
	printf("*************************\n");
}
void game()
	{
	//�׵Ĵ洢��Ϣ
	//1.���úõ��׵���Ϣ
	char mind[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mind, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mind, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mind, ROW, COL);
	DisplayBoard(mind, ROW, COL);
	//ɨ��
	FindMIne(mind, show, ROW, COL);
	}

void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");

		}

	} while (input);
}



int main()
{

	test();

	return 0;
}