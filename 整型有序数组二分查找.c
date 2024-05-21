#define _CRT_SECURE_NO_WARNINGS

//��д������ʵ��һ��������������Ķ��ֲ���

# include <stdio.h>

int binary_search(int arr[], int k, int sz)//������arr[]��һ��ָ�����
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ���������������飬�����ں����ڲ���������Ԫ�صĸ����ǲ����׵ġ�
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//�ҵ��ˣ������±�
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�ҵ��������±�
	//�Ҳ���������-1
	
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}