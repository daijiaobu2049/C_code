#pragma once

#include <stdio.h>

#include <stdlib.h>
#include <time.h>

//随机生成10个雷
#define EASY_COUNT 10

//棋盘的真实使用大小
#define ROW 9
#define COL 9

//棋盘大小
#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);