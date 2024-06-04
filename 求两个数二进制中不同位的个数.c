#define _CRT_SECURE_NO_WARNINGS
//两个int（32位）整数m和n的二进制表达中，有多少个位不同？

# include<stdio.h>

//方法1，利用右移+按位与1逐个获取每一位数字然后比较
//int count_differ_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

 //方法2，利用异或操作符, ^ 相同为0，相异为1，然后统计1的个数
int count_differ_bit(int m, int n)
{
	int count = 0;
	int ret = m ^ n;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int ret = count_differ_bit(m, n);
	printf("%d\n", ret);
	return 0;
}