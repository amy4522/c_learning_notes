#define _CRT_SECURE_NO_WARNINGS
//���庯���������������ͱ�����ֵ
# include <stdio.h>

void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ������
//���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//�����Ҫ�޸�ʵ�ε�ֵ����ô��Ҫ���ݵ�ַ���β�����Ϊָ�������
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a = %d, b = %d\n", a, b);

	Swap(&a, &b);
	
	printf("������a = %d, b = %d\n", a, b);

	return 0;
}