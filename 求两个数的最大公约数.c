#define _CRT_SECURE_NO_WARNINGS
//�������������Լ��
# include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//����1���������
	/*int min = (a < b) ? a : b;
	int m = min;
	while (1)
	{
		if ((a % m == 0) && (b % m == 0))
		{
			break;
		}
		m--;
	}
	printf("%d\n", m);
	*/
	//����2��շת�����
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}