#define _CRT_SECURE_NO_WARNINGS
//接受一个无符号整型值，按照顺序打印它的每一位
//输入:1234, 输出：1 2 3 4

// %d 打印有符号的整数（会有负数）
// %u 打印无符号的整数

# include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//接受一个无符号整型值，按照顺序打印它的每一位
	
	return 0;
}

/*while (num)
	{
		printf("%d ", num % 10);
		num = num / 10;
	}*/ //这种会倒着打印，需要使用一个数组存储，再从后往前遍历打印

//利用函数递归思想
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4