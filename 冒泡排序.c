#define _CRT_SECURE_NO_WARNINGS
//ð�������㷨

# include <stdio.h>

//���鴫�Σ��βο���д�ɣ�1.����2.ָ��
bubble_sort(int arr[], int sz)
{
	//����
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])//����
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//0 1 2 3 4 5 6 7 8 9
	//��������ĳ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	//����ð�������㷨��ʹ����������Ϊ����
	bubble_sort(arr, sz);
	//ע�⣺���鴫��ʱ���������Ԫ�صĵ�ַ��
	// �������鳤���޷��ں����ڲ����㣬��Ҫ�ⲿ���롣
	// 
	//���
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}