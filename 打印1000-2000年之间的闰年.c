#define _CRT_SECURE_NO_WARNINGS
//闰年：
// 1.能被4整除但是不能被100整除
//2.能被400整除
# include <stdio.h>

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断是否是闰年
		if (year % 4 == 0)
		{
			if(year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		//两个规则都需要判断，所以要使用2个if语句
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}