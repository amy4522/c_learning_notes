#define _CRT_SECURE_NO_WARNINGS
//打印100-200之间的素数
//素数：只能被1和它本身整除的数

# include <stdio.h>
# include <math.h>

int main()
{
	int i = 0;
	int count = 0;//统计素数的个数

	for (i = 101; i <= 200; i++)
	{
		int flag = 1;//flag是1，表示是素数, 应该放进循环体，每一个数都先把它假设成一个素数

		//用2 ~ i- 1之间的数去试除，如果能整除，说明i不是素数
		int j = 0;

		//for (j = 2; j <= i - 1; j++)
		//优化：除数范围可以缩小到平方根，因为合数的因数除了1和它本身以外，一定存在一个小于等于自身平方根的数
		for (j = 2; j <= sqrt(i); j++)

		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}