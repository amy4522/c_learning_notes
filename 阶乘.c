#define _CRT_SECURE_NO_WARNINGS
////����n�Ľ׳�
//# include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	//����
//	scanf("%d", &n);
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//���
//	printf("%d\n", ret);
// return 0;
//}


//����1��+2��+3��+����+10��
# include <stdio.h>

int main()
{
	int i = 1;
	int j = 1;
	int ret = 1;
	int sum = 0;
	//����1������ѭ��Ƕ��ʵ��
	/*for (i = 1; i <= 10; i++)
	{ 
		//ע��ÿһ�μ����µĽ׳ˣ���Ҫ��ʼ����1��1*1��1*2��1*2*3
		int ret = 1��
		for (j = 1; j <= i; j++)
			ret *= j;
		sum += ret;
	}*/
	//����2�����ã�n! = (n - 1)! * n
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	//���
	printf("%d\n", sum);

	return 0;
}