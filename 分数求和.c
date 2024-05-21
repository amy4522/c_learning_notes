#define _CRT_SECURE_NO_WARNINGS
//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ……+1/99 -1/100的值
//分子总是1
//分母是1-100

# include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;//正负号
	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}