#define _CRT_SECURE_NO_WARNINGS
//获取一个整数二进制序列中所有的奇数位和偶数位，分别打印出二进制序列
//00000000000000000000000000001010
//10
# include<stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);
	
	//获取奇数位的数字‘
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	//获取偶数位的数字
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	
	return 0;
}