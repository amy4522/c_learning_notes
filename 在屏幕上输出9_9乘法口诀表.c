#define _CRT_SECURE_NO_WARNINGS
//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//……

# include<stdio.h>

int main()
{
	int i = 0;
	//打印9行
	for (i = 1; i <= 9; i++)
	{
		//打印1行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}//%2d,右对齐；%-2d左对齐
		printf("\n");
	}
	return 0;
}