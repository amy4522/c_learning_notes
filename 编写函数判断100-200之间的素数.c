#define _CRT_SECURE_NO_WARNINGS
//编写函数实现打印100-200之间的素数
# include <stdio.h>
# include <math.h>

int is_prime(int n)
//判断一个数是不是素数，如果是素数返回1，如果不是返回0
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}