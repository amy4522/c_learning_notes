#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("*******  1. play   ************\n");
	printf("*******  0. exit   ************\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息,不能在这里初始化，这样只初始化1个元素，是不完全初始化

	//初始化数组的内容为指定内容
	//mine数组在没有布置雷的时候，都是'0'
	InitBoard(mine, ROWS, COLS, '0');
	//show数组在没有排查雷的时候，都是'*'
	InitBoard(show, ROWS, COLS, '*');

	//设置雷
	SetMine(mine, ROW, COL);

	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//扫雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}