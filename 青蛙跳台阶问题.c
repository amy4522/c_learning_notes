#define _CRT_SECURE_NO_WARNINGS
//һֻ����һ�ο�����1��̨�ף�Ҳ����һ����2��̨�ס��������Ҫ����n��̨�ף�������������
//n = 1, ret = 1
//n = 2, ret = 2
//n = 3, ret = 1 + 2 = 3
//n = 4, ret = 3 + 2 = 5
//n = 5, ret = 5 + 3 = 8
//��
//��������1������ʣn - 1��̨�ף���������2������ʣn - 2��̨�ס�
# include <stdio.h>

int Frog_jump(int n)//����������̨�׵�����
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return Frog_jump(n - 1) + Frog_jump(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Frog_jump(n);
	printf("%d\n", ret);
	return 0;
}