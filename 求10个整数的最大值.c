#define _CRT_SECURE_NO_WARNINGS
//��10�����������ֵ
# include <stdio.h>

int main()
{
	int arr[10] = { -1,210,34,-41,50,61,71,80,-98,102 };
	int max = arr[0];//�����1��Ԫ��������
	int i = 0;
	for (i = 1; i < 10; i++)//�ӵ�2��Ԫ�ؿ�ʼ��
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}