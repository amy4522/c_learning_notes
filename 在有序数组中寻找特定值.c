#define _CRT_SECURE_NO_WARNINGS
//������������Ѱ���ض�ֵ
# include <stdio.h>

int main()
{
	////����һ����������
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int k = 0;
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//����1����������Ԫ�����β���
	/*for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("�ҵ��ˣ���ֵ�±�Ϊ��%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("û�ҵ�");*/


	//����2�����ַ����۰���ң�Ҫ����������
	//����һ����������
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}