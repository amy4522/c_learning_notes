#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

//编写函数判断是否是闰年
//是闰年，返回1
//不是闰年，返回0
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断是否是闰年
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}