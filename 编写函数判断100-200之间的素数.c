#define _CRT_SECURE_NO_WARNINGS
//��д����ʵ�ִ�ӡ100-200֮�������
# include <stdio.h>
# include <math.h>

int is_prime(int n)
//�ж�һ�����ǲ����������������������1��������Ƿ���0
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}