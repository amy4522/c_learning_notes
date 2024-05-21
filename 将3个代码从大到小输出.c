#define _CRT_SECURE_NO_WARNINGS
//将3个整数从大到小输出
# include <stdio.h>

void Swap(int* px, int* py)//交换两个变量的值
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	//输入
	scanf("%d %d %d", &a, &b, &c);
	//调整,依次比较3次
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	//输出
	printf("%d %d %d\n", a, b, c);
	return 0;
}