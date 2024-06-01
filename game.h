#pragma once

#include<stdio.h>
# include<time.h>
# include<stdlib.h>

# define ROW 9
# define COL 9

# define ROWS ROW + 2
# define COLS COL + 2

# define EASY_COUNT 10

//初始化数组内容
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印面板
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//标记雷
void MarkMine(char board[ROWS][COLS], int row, int col);

//自动扩展
void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y);

//判断找到雷的数量
void IsWin(char show[ROWS][COLS], int row, int col, int* p);
