#pragma once

#include<stdio.h>
# include<time.h>
# include<stdlib.h>

# define ROW 9
# define COL 9

# define ROWS ROW + 2
# define COLS COL + 2

# define EASY_COUNT 10

//��ʼ����������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ���
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//�����
void MarkMine(char board[ROWS][COLS], int row, int col);

//�Զ���չ
void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y);

//�ж��ҵ��׵�����
void IsWin(char show[ROWS][COLS], int row, int col, int* p);
