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
	char mine[ROWS][COLS];//存放布置好的雷
	char show[ROWS][COLS];//存放排查出雷的信息

	//初始化棋盘
	//mine数组开始全是'0'
	//show数组开始全是'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	
	//排查雷
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
				printf("游戏结束\n");
				break;
			default:
				printf("输入错误，请重新输入!!!\n");
				break;
		}
	} while (input);
	return 0;
}