#define _CRT_SECURE_NO_WARNINGS
//���꣺
// 1.�ܱ�4�������ǲ��ܱ�100����
//2.�ܱ�400����
# include <stdio.h>

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж��Ƿ�������
		if (year % 4 == 0)
		{
			if(year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		//����������Ҫ�жϣ�����Ҫʹ��2��if���
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
	}
	return 0;
}