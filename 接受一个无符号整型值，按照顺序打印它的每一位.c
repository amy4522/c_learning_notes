#define _CRT_SECURE_NO_WARNINGS
//����һ���޷�������ֵ������˳���ӡ����ÿһλ
//����:1234, �����1 2 3 4

// %d ��ӡ�з��ŵ����������и�����
// %u ��ӡ�޷��ŵ�����

# include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//����һ���޷�������ֵ������˳���ӡ����ÿһλ
	
	return 0;
}

/*while (num)
	{
		printf("%d ", num % 10);
		num = num / 10;
	}*/ //���ֻᵹ�Ŵ�ӡ����Ҫʹ��һ������洢���ٴӺ���ǰ������ӡ

//���ú����ݹ�˼��
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4