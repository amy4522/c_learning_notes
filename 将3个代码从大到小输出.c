#define _CRT_SECURE_NO_WARNINGS
//��3�������Ӵ�С���
# include <stdio.h>

void Swap(int* px, int* py)//��������������ֵ
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	//����
	scanf("%d %d %d", &a, &b, &c);
	//����,���αȽ�3��
	if (a < b)
	{
		Swap(&a, &b);
	}
	if (a < c)
	{
		Swap(&a, &c);
	}
	if (b < c)
	{
		Swap(&b, &c);
	}
	//���
	printf("%d %d %d\n", a, b, c);
	return 0;
}