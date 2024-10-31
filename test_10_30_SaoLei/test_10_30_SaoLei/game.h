#pragma once

#include <stdio.h>

//棋盘的真实使用大小
#define ROW 9
#define COL 9

//棋盘大小
#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int rows, int cols);