#define _CRT_SECURE_NO_WARNINGS
//���0-100000֮�������"ˮ�ɻ���"�����
//"ˮ�ɻ���"��һ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
//���磺153 = 1^3 + 5^3 + 3^3��153��һ��"ˮ�ɻ���"

# include<stdio.h>
# include<math.h>

int if_narcissistic_number(int i)
{
	//�ж�i�Ƿ�Ϊ"ˮ�ɻ���"
		//1234
		//����i�Ǽ�λ��
	int n = 1;//�κ�һ����������һλ��
	int tmp = i;
	int sum = 0;
	while (tmp / 10 != 0)
	{
		n++;
		tmp /= 10;
	}//forѭ���ڲ���Ҫ����޸�ѭ������

	//�õ�i��ÿһλ����������n�η�֮��
	tmp = i;
	while (tmp)
	{
		sum += pow(tmp % 10, n);
		tmp /= 10;
	}

	return sum == i;
	/*if (sum == i)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (if_narcissistic_number(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}