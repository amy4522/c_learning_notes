#define _CRT_SECURE_NO_WARNINGS
//求10个整数的最大值
# include <stdio.h>

int main()
{
	int arr[10] = { -1,210,34,-41,50,61,71,80,-98,102 };
	int max = arr[0];//假设第1个元素是最大的
	int i = 0;
	for (i = 1; i < 10; i++)//从第2个元素开始找
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}