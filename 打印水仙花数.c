#define _CRT_SECURE_NO_WARNINGS
//求出0-100000之间的所有"水仙花数"并输出
//"水仙花数"：一个n位数，其各位数字的n次方之和恰好等于该数本身
//例如：153 = 1^3 + 5^3 + 3^3，153是一个"水仙花数"

# include<stdio.h>
# include<math.h>

int if_narcissistic_number(int i)
{
	//判断i是否为"水仙花数"
		//1234
		//计算i是几位数
	int n = 1;//任何一个数至少是一位数
	int tmp = i;
	int sum = 0;
	while (tmp / 10 != 0)
	{
		n++;
		tmp /= 10;
	}//for循环内部不要随便修改循环变量

	//得到i的每一位，计算它的n次方之和
	tmp = i;
	while (tmp)
	{
		sum += pow(tmp % 10, n);
		tmp /= 10;
	}

	return sum == i;
	/*if (sum == i)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (if_narcissistic_number(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}