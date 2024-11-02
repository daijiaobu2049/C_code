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

//������Χ�׵ĸ���
//int GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y - 1] - 8 * '0');
//}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');//�ַ���ȥ'0'�õ��ַ���Ӧ������
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų��׵�����:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <=row && y >= 1 && y <= col)
		{
			//�����λ������
			if (mine[x][y] == '1')
			{
				printf("�˵ķ�������Ϸ����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //������
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//���ּ�'0'�õ���Ӧ���ַ�
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�������������x(1~9)y(1~9),����������");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ���׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}