#define _CRT_SECURE_NO_WARNINGS
//求一个整数存储在内存中的二进制1的个数
//求补码二进制中1的个数

# include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);

	int i = 0;
	int count = 0;
	for (i = 1; i <= 32; i++)
	{
		if (a & 1 == 1)
		{
			count++;
		}
		a = a >> 1;
	}

	printf("%d\n", count);
	return 0;
}