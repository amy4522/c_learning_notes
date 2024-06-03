#define _CRT_SECURE_NO_WARNINGS
//不创建临时变量，实现两个数的交换

# include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("交换前，a=%d, b=%d\n", a, b);

	/*a = a + b;
	b = a - b;
	a = a - b;*/
	//这种方法存在溢出问题

	a = a ^ b;//3 ^ 5
	b = a ^ b;//3 ^ 5 ^ 5 = 3
	a = a ^ b;///3 ^ 5 ^ 3 = 5
	printf("交换后，a=%d, b=%d\n", a, b);
	return 0;
}