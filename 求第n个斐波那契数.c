#define _CRT_SECURE_NO_WARNINGS
//求第n个斐波那契数(不考虑溢出)
//斐波那契数列
//1 1 2 3 5 8 13 21 34 45 55 ……

# include <stdio.h>

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
////使用递归求解斐波那契数效率太低

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}