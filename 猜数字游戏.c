#define _CRT_SECURE_NO_WARNINGS
//猜数字游戏，随机生成一个1-100之间的数字，键盘输入猜测数字，相应的提示猜大了或者猜小了，直至猜中该数字。
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void menu()// 显示游戏菜单
{
	printf("**************************\n");
	printf("*******   1.play   ***********\n");
	printf("*******   0.exit    ***********\n");
	printf("**************************\n");
}
//RAND_MAX(0x7fff, 32767)--rand函数能返回随机数的最大值
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜测数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜中了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}