#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-----------ɨ����Ϸ---------\n");
	//��ӡ������
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ������
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		//��ӡ����
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����ʮ����
	//����������꣬������
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//�������1~row
		int y = rand() % col + 1;//�������1~col
		if (mine[x][y] != '1')//������ɵ�������Ѿ������ף���ô�Ͳ��ڸ���������
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{

}