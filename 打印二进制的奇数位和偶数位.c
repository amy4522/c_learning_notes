#define _CRT_SECURE_NO_WARNINGS
//��ȡһ���������������������е�����λ��ż��λ���ֱ��ӡ������������
//00000000000000000000000000001010
//10
# include<stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);
	
	//��ȡ����λ�����֡�
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	//��ȡż��λ������
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	
	return 0;
}