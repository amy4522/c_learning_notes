#define _CRT_SECURE_NO_WARNINGS

# include"game.h"

//��ʼ�����
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
//��ӡ���
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ-----\n");
	for (j = 0; j <= col; j++)//��ӡ�еı��
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�еı��
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ-----\n");
}
//��������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9

		//�ж�������û�в�����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}//������ѭ���������г���10��
	}
}
//���������Χ�׵�����
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	//ÿ��Ԫ�ؼ�ȥ'0'Ȼ�������
	//����ȫ������ټ�ȥ9*'0'��ASCII)
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
	return (sum - 9 * '0');//�ַ���ת��������
}
//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//�ҵ��׵�����
	int* p = &win;
	int choose = 0;//�洢ģʽѡ��


	while (1)//һֱѭ�������������׻����ų�������
	{
		printf("��ѡ��ģʽ��1.�Ų� 0.���\n");
		getchar();
		scanf("%d", &choose);

		if (choose == 1)//�Ų���
		{
			printf("����Ҫ�Ų������\n");
			getchar();//����������
 			scanf("%d %d", &x, &y);

			//����Ϸ����ж�
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("�������Ѿ����Ų���������ظ��Ų�\n");
				}
				else
				{
					if (mine[x][y] == '1')//�������
					{
						printf("���ź������㱻ը���ˡ�\n");
						DisplayBoard(mine, ROW, COL);
						break;
					}
					else//���������
					{
						//ͳ��mine������x,y������Χ�м�����
						int count = get_mine_count(mine, x, y);
						show[x][y] = count + '0';//ת���������ַ�

						if (show[x][y] == '0')//������������Χû����
						{
							AutoExc(show, mine, ROW, COL, x, y);//�Զ�չ����Ƭ����
						}
						DisplayBoard(show, ROW, COL); 
					}
				}
			}
			else
			{
				printf("��������Ƿ�������������\n");
			}
		}
		else if (choose == 0)
		{
			//�����
			MarkMine(show, ROW, COL);
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
		//�ж�Ӯ��ÿ�ζ����ж�
		IsWin(show, ROW, COL, p);//�����Ѿ����׵ĸ�������,ʹ��ָ�봫�Σ��Զ�����ֵ
		if (win == EASY_COUNT)
		{
			printf("��ϲ�㣡�����׳ɹ���\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}
//�����
void MarkMine(char board[ROWS][COLS], int row, int col)
{
		int x = 0;
		int y = 0;
		printf("��������Ҫ��ǻ���ȡ����ǵ�����:>\n");
		getchar();
		scanf("%d %d", &x, &y);
		if (board[x][y] == 'M')//�ж������Ҫ��ǻ���ȡ�����
		{
			board[x][y] = '*';
			DisplayBoard(board, row, col);
			printf("ȡ����ǳɹ���\n");
		}
		else
		{
			board[x][y] = 'M';
			DisplayBoard(board, row, col);
			printf("��ǳɹ���\n");
		}
}

void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y)
{
	//���õݹ�˼��ʵ��,
	int i = -1;
	int j = -1;
	show[x][y] = ' ';//����ǰ���滻Ϊ�ո�
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] != '1')//��һ�����겻����
			{
				int count = get_mine_count(mine, x + i, y + j);//������һ��������Χ����
				if (count == 0)//��һ��������Χû����
				{
					if (show[x + i][y + j] == '*' )//��һ������û�б��Ų������ֹ���ݹ�
					{
						show[x + i][y + j] = ' ';//�Ƚ�������Ϊ�ո񣬱����ظ�
						AutoExc(show, mine, ROW, COL, x + i, y + j);//����ݹ�
					}
				}
				else//��һ��������Χ����
				{
					show[x + i][y + j] = count + '0';//չʾ��Χ�׵�������ת��Ϊ�ַ���ʾ
				}
			}
		}
	}
}
//�ж��ҵ��׵�����
void IsWin(char show[ROWS][COLS],int row, int col, int* p)
{
	int i = 0;
	int j = 0;
	*p = 0;//��Ϊÿ�ζ�����㣬������Ҫ��ʼ��
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == 'M')//����׻��߱ܿ���
			{
				++*p;
			}
		}
	}
}