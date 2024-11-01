#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("**********************\n");
	printf("****** 1.play  *******\n");
	printf("****** 0.exit  *******\n");
	printf("**********************\n");
	printf("**********************\n");
}

void game()
{ 
	char mine[ROWS][COLS];//��Ų��úõ���
	char show[ROWS][COLS];//����Ų���׵���Ϣ

	//��ʼ������
	//mine���鿪ʼȫ��'0'
	//show���鿪ʼȫ��'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("�����������������!!!\n");
				break;
		}
	} while (input);
	return 0;
}