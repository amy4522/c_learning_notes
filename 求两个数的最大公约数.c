#define _CRT_SECURE_NO_WARNINGS
//求两个数的最大公约数
# include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//方法1：暴力求解
	/*int min = (a < b) ? a : b;
	int m = min;
	while (1)
	{
		if ((a % m == 0) && (b % m == 0))
		{
			break;
		}
		m--;
	}
	printf("%d\n", m);
	*/
	//方法2：辗转相除法
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}