#define _CRT_SECURE_NO_WARNINGS
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//例如: 2 + 22 + 222 + 2222 + 22222
// 2 = 0 * 10 + 2
//22 = 2  * 10 + 2
//222 = 22 * 10 + 2
//……
# include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int k = 0;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);
	return 0;
}