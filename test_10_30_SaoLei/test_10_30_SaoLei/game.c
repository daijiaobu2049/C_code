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
	printf("-----------扫雷游戏---------\n");
	//打印横坐标
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印纵坐标
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		//打印棋盘
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置十个雷
	//生成随机坐标，布置雷
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//随机生成1~row
		int y = rand() % col + 1;//随机生成1~col
		if (mine[x][y] != '1')//如果生成的随机数已经有了雷，那么就不在该坐标生成
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{

}