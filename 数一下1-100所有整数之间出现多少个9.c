#define _CRT_SECURE_NO_WARNINGS
//��һ��1-100��������֮����ֶ��ٸ�����9
// (�����ж��ٸ�������9, ����ȥ��9�ĸ���)
//9 19 29 39 49 59 69 79 89
//90 91 92 93 94 95 96 97 98 99

# include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//�жϸ�λ�ǲ���9
		if (i % 10 == 9)
			count++;
		//�ж�ʮλ�ǲ���9
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}