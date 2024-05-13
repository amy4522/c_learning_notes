#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	//输入2个整数
	scanf("%d %d", &num1, &num2);
	
	//求和
	int sum = num1 + num2;

	//输出
	printf("%d\n", sum);

	return 0;
}