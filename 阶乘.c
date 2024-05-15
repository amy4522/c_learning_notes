#define _CRT_SECURE_NO_WARNINGS
////计算n的阶乘
//# include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//输入
//	scanf("%d", &n);
//	//计算
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//输出
//	printf("%d\n", ret);
// return 0;
//}


//计算1！+2！+3！+……+10！
# include <stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	int ret = 1;
	int sum = 0;
	//方法1，利用循环嵌套实现
	/*for (i = 1; i <= 10; i++)
	{ 
		//注意每一次计算新的阶乘，都要初始化乘1，1*1，1*2，1*2*3
		int ret = 1；
		for (j = 1; j <= i; j++)
			ret *= j;
		sum += ret;
	}*/
	//方法2，利用：n! = (n - 1)! * n
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	//输出
	printf("%d\n", sum);

	return 0;
}