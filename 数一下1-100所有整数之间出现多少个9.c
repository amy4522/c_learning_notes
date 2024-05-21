#define _CRT_SECURE_NO_WARNINGS
//数一下1-100所有整数之间出现多少个数字9
// (不是有多少个数包含9, 而是去数9的个数)
//9 19 29 39 49 59 69 79 89
//90 91 92 93 94 95 96 97 98 99

# include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断个位是不是9
		if (i % 10 == 9)
			count++;
		//判断十位是不是9
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}