#define _CRT_SECURE_NO_WARNINGS
//��ӡ100-200֮�������
//������ֻ�ܱ�1����������������

# include <stdio.h>
# include <math.h>

int main()
{
	int i = 0;
	int count = 0;//ͳ�������ĸ���

	for (i = 101; i <= 200; i++)
	{
		int flag = 1;//flag��1����ʾ������, Ӧ�÷Ž�ѭ���壬ÿһ�������Ȱ��������һ������

		//��2 ~ i- 1֮�����ȥ�Գ��������������˵��i��������
		int j = 0;

		//for (j = 2; j <= i - 1; j++)
		//�Ż���������Χ������С��ƽ��������Ϊ��������������1�����������⣬һ������һ��С�ڵ�������ƽ��������
		for (j = 2; j <= sqrt(i); j++)

		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}