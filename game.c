#define _CRT_SECURE_NO_WARNINGS

# include"game.h"

//初始化面板
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印面板
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏-----\n");
	for (j = 0; j <= col; j++)//打印列的编号
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行的编号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏-----\n");
}
//设置雷区
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9

		//判断坐标有没有布置雷
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}//在这里循环可能运行超过10次
	}
}
//检查坐标周围雷的数量
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	//每个元素减去'0'然后再相加
	//或者全部相加再减去9*'0'（ASCII)
	/*return(board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 9 * '0');*/
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum += board[x + i][y + j];
		}
	}
	return (sum - 9 * '0');//字符型转换成整型
}
//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到雷的数量
	int* p = &win;
	int choose = 0;//存储模式选择


	while (1)//一直循环，除非碰到雷或者排除所有雷
	{
		printf("请选择模式：1.排查 0.标记\n");
		getchar();
		scanf("%d", &choose);

		if (choose == 1)//排查雷
		{
			printf("输入要排查的坐标\n");
			getchar();//清空输入残留
 			scanf("%d %d", &x, &y);

			//坐标合法性判断
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("该坐标已经被排查过，不能重复排查\n");
				}
				else
				{
					if (mine[x][y] == '1')//如果是雷
					{
						printf("很遗憾……你被炸死了。\n");
						DisplayBoard(mine, ROW, COL);
						break;
					}
					else//如果不是雷
					{
						//统计mine数组中x,y坐标周围有几个雷
						int count = get_mine_count(mine, x, y);
						show[x][y] = count + '0';//转换成数字字符

						if (show[x][y] == '0')//如果这个坐标周围没有雷
						{
							AutoExc(show, mine, ROW, COL, x, y);//自动展开这片区域
						}
						DisplayBoard(show, ROW, COL); 
					}
				}
			}
			else
			{
				printf("输入坐标非法，请重新输入\n");
			}
		}
		else if (choose == 0)
		{
			//标记雷
			MarkMine(show, ROW, COL);
		}
		else
		{
			printf("输入非法，请重新输入\n");
		}
		//判断赢，每次都会判断
		IsWin(show, ROW, COL, p);//计算已经排雷的格子数量,使用指针传参，自动更改值
		if (win == EASY_COUNT)
		{
			printf("恭喜你！！排雷成功！\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}
//标记雷
void MarkMine(char board[ROWS][COLS], int row, int col)
{
		int x = 0;
		int y = 0;
		printf("请输入需要标记或者取消标记的坐标:>\n");
		getchar();
		scanf("%d %d", &x, &y);
		if (board[x][y] == 'M')//判断玩家需要标记还是取消标记
		{
			board[x][y] = '*';
			DisplayBoard(board, row, col);
			printf("取消标记成功！\n");
		}
		else
		{
			board[x][y] = 'M';
			DisplayBoard(board, row, col);
			printf("标记成功！\n");
		}
}

void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y)
{
	//运用递归思想实现,
	int i = -1;
	int j = -1;
	show[x][y] = ' ';//将当前格替换为空格
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] != '1')//下一个坐标不是雷
			{
				int count = get_mine_count(mine, x + i, y + j);//计算下一个坐标周围的雷
				if (count == 0)//下一个坐标周围没有雷
				{
					if (show[x + i][y + j] == '*' )//下一个坐标没有被排查过，防止死递归
					{
						show[x + i][y + j] = ' ';//先将格子设为空格，避免重复
						AutoExc(show, mine, ROW, COL, x + i, y + j);//进入递归
					}
				}
				else//下一个坐标周围有雷
				{
					show[x + i][y + j] = count + '0';//展示周围雷的总数，转化为字符显示
				}
			}
		}
	}
}
//判断找到雷的数量
void IsWin(char show[ROWS][COLS],int row, int col, int* p)
{
	int i = 0;
	int j = 0;
	*p = 0;//因为每次都会计算，所以需要初始化
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == 'M')//标记雷或者避开雷
			{
				++*p;
			}
		}
	}
}