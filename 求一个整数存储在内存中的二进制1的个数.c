#define _CRT_SECURE_NO_WARNINGS
//��һ�������洢���ڴ��еĶ�����1�ĸ���
//�����������1�ĸ���

# include<stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);

	int i = 0;
	int count = 0;
	for (i = 1; i <= 32; i++)
	{
		if (a & 1 == 1)
		{
			count++;
		}
		a = a >> 1;
	}

	printf("%d\n", count);
	return 0;
}