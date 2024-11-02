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

//计算周围雷的个数
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
			count += (mine[x + i][y + j] - '0');//字符减去'0'得到字符对应的数字
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
		printf("请输入要排查雷的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <=row && y >= 1 && y <= col)
		{
			//输入的位置是雷
			if (mine[x][y] == '1')
			{
				printf("菜的发瘟，游戏结束\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //不是雷
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//数字加'0'得到对应的字符
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入的坐标有误x(1~9)y(1~9),请重新输入");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}