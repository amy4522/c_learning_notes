#define _CRT_SECURE_NO_WARNINGS
//��������Ϸ���������һ��1-100֮������֣���������²����֣���Ӧ����ʾ�´��˻��߲�С�ˣ�ֱ�����и����֡�
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void menu()// ��ʾ��Ϸ�˵�
{
	printf("**************************\n");
	printf("*******   1.play   ***********\n");
	printf("*******   0.exit    ***********\n");
	printf("**************************\n");
}
//RAND_MAX(0x7fff, 32767)--rand�����ܷ�������������ֵ
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("������²�����>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�����ˣ�\n");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}