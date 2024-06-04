#define _CRT_SECURE_NO_WARNINGS
//统计二进制中1的个数
# include<stdio.h>

//方法1：二进制%2、/2 获取每一位数字
//int count_num_of_1(unsigned int n)//防止负数出错
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//方法2：利用位操作符实现
//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)//如果按位与1结果是1，说明这个数的最低位是1，逐次右移32位并依次按位与即可获得结果
//		{
//			count++;
//		}
//	}
//	return count;
//}

//n = 15
// 1111 n
// 1110 n - 1
// 1110 n
// 1101 n - 1
// 1100 n
// 1011 n - 1
// 1000 n
// 0111 n - 1
// 0000
//方法3
int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_num_of_1(num);
	printf("%d\n", n);
	return 0;
}
