#define _CRT_SECURE_NO_WARNINGS
//static修饰局部变量改变了变量的生命周期
//让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束。
#include <stdio.h>
void test()
{
	static int i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}