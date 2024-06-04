#define _CRT_SECURE_NO_WARNINGS
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��ͬ��

# include<stdio.h>

//����1����������+��λ��1�����ȡÿһλ����Ȼ��Ƚ�
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

 //����2��������������, ^ ��ͬΪ0������Ϊ1��Ȼ��ͳ��1�ĸ���
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