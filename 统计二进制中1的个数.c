#define _CRT_SECURE_NO_WARNINGS
//ͳ�ƶ�������1�ĸ���
# include<stdio.h>

//����1��������%2��/2 ��ȡÿһλ����
//int count_num_of_1(unsigned int n)//��ֹ��������
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

//����2������λ������ʵ��
//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)//�����λ��1�����1��˵������������λ��1���������32λ�����ΰ�λ�뼴�ɻ�ý��
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
//����3
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
